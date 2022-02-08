#include <doctest.h>
#include <initializer_list>
#include "merge-sort.hpp"

TEST_SUITE_BEGIN("constructor");

TEST_CASE("Empty List") {
    auto a = List{};
    REQUIRE(a.head == nullptr);
}

TEST_CASE("List 1") {
    auto a = List{1};
    REQUIRE(a.head != nullptr);
    REQUIRE(a.head->value == 1);
    REQUIRE(a.head->next == nullptr);
}

TEST_CASE("List 1,2") {
    auto a = List{1,2};
    REQUIRE(a.head != nullptr);
    REQUIRE(a.head->value == 1);
    REQUIRE(a.head->next != nullptr);
    REQUIRE(a.head->next->value == 2);
    REQUIRE(a.head->next->next == nullptr);
}

TEST_CASE("List 1,2,...,0") {
    auto ilist = {1,2,3,4,5,6,7,8,9,0};
    auto a = List(ilist);
    ListElement *ptr = a.head.get();
    for (auto elem : ilist) {
        REQUIRE(ptr != nullptr);
        CHECK(ptr->value == elem);
        ptr = ptr->next.get();
    }
    CHECK(ptr == nullptr);
}

TEST_SUITE_END();

// Для проверки всех ошибок
extern "C" const char *__asan_default_options() {
    return "debug=1:detect_invalid_pointer_pairs=2:detect_leak=1:detect_leaks="
           "1:leak_check_at_exit=true:color=always";
}
