#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
public:
    Array(int initialSize = 10, int step = 2);
    Array(const Array& other);
    ~Array();

    void setValue(int val);
    void setArray(int* pArr, int size);
    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;

    Array operator+(const Array& other) const;
    Array operator+(int num) const;
    Array operator-(int num) const;
    bool operator==(const Array& other) const;
    bool operator!=(const Array& other) const;
    Array operator++(int);
    Array& operator+=(int num);
    int operator[](int index) const;
    friend Array operator+(int num, const Array& arr);
    friend std::ostream& operator<<(std::ostream& os, const Array& arr);

private:
    int _size;
    int _step;
    int* _arr;
    int _currentIndex;
};
