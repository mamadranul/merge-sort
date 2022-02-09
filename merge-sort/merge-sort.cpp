#include "merge-sort.hpp"
#include <memory>

List::List(std::initializer_list<int> list) {
    // Задание №1: сделать список из list
    ListElement * last = nullptr;
    for (auto number : list) {
        // TODO: Добавить в создаваемый односвязный список
        if (last == nullptr) {
            // TODO: Создать head
        } else {
            // TODO: Создать tail->next
        }
        
    }
}

List merge(List a, List b) noexcept { return a; }

void mergesort(List &list) noexcept {
}
