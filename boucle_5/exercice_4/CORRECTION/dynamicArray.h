#pragma once
#include <iostream>
#include <string>

template<typename T>
class DynamicArray {
private:
    int count;
    int size;
    T** els;

public:
    DynamicArray(int size = 1);
    ~DynamicArray();

    int add(T *el);
    T* remove(int i);
    T* get(int i);
    void print();

private:
    void resize(int newSize);
};
