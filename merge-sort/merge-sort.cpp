#include "merge-sort.hpp"
#include <memory>

List::List(std::initializer_list<int> list) {
    // Задание №1: сделать список из list
    ListElement * last = nullptr;
    for (auto number : list) {
        // TODO: Добавить в создаваемый односвязный список
        if (last == nullptr) {
            // TODO: Создать первый элемент списка в head
        } else {
            // TODO: Создать элемент списка в tail->next
        }
    }
}

auto merge(List a, List b) noexcept -> List {
    // Слияние двух списков
    return a;
}

auto mergesort(List &list) noexcept -> void {
    // Сортировка слиянием
}
