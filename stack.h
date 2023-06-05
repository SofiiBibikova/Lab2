#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int* stackArray; // динамічний масив для зберігання стеку
    int top; // індекс вершини стеку
    int size; // розмір стеку

public:
    // Конструктори
    Stack();
    Stack(const Stack& otherStack);
    // Деструктор
    ~Stack();
    // Оператор присвоєння
    Stack& operator=(const Stack& otherStack);

    // Методи для роботи зі стеком
    void push(int elem);
    int pop();
    bool isEmpty() const;
    void multiPop(int N);
    void show() const;

    // Додаткові методи
    int getSize() const;
};

#endif
