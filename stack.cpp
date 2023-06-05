#include "stack.h"
#include <iostream>

// Конструктор за замовчуванням
Stack::Stack() {
    size = 10;
    stackArray = new int[size];
    top = -1;
}

// Конструктор копіювання
Stack::Stack(const Stack& otherStack) {
    size = otherStack.size;
    stackArray = new int[size];
    top = otherStack.top;

    for (int i = 0; i <= top; i++) {
        stackArray[i] = otherStack.stackArray[i];
    }
}

// Деструктор
Stack::~Stack() {
    delete[] stackArray;
}

// Оператор присвоєння
Stack& Stack::operator=(const Stack& otherStack) {
    if (this == &otherStack) {
        return *this;
    }

    delete[] stackArray;

    size = otherStack.size;
    stackArray = new int[size];
    top = otherStack.top;

    for (int i = 0; i <= top; i++) {
        stackArray[i] = otherStack.stackArray[i];
    }

    return *this;
}

// Додавання елемента в стек
void Stack::push(int elem) {
    if (top == size - 1) {
        int* newStackArray = new int[size * 2];

        for (int i = 0; i <= top; i++) {
            newStackArray[i] = stackArray[i];
        }

        delete[] stackArray;
        stackArray = newStackArray;
        size *= 2;
    }

    top++;
    stackArray[top] = elem;
}

// Видалення елемента зі стеку
int Stack::pop() {
    if (isEmpty()) {
        std::cerr << "Stack is empty." << std::endl;
        return -1; // або інше значення за вибором
    }

    int elem = stackArray[top];
    top--;

    return elem;
}

// Перевірка, чи порожній стек
bool Stack::isEmpty() const {
    return top == -1;
}

// Виштовхнення N елементів
void Stack::multiPop(int N) {
    if (N > top + 1) {
        std::cerr << "Can't remove more elements than there are in the stack." << std::endl;
        return;
    }

    top -= N;
}

// Виведення всіх елементів на екран
void Stack::show() const {
    for (int i = 0; i <= top; i++) {
        std::cout << stackArray[i];
        if (i != top) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

// Отримання розміру стеку
int Stack::getSize() const {
    return size;
    std::cout << std::endl;
}