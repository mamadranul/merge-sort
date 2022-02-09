#pragma once
#include <initializer_list>
#include <memory>

struct ListElement {
    int value;
    std::unique_ptr<ListElement> next;

    ListElement(int value, std::unique_ptr<ListElement> &&next) : value(value), next(std::move(next)) {}
};

struct List {
    std::unique_ptr<ListElement> head;
    List(std::initializer_list<int>);

};

extern List merge(List, List) noexcept;

extern void mergesort(List&) noexcept;
