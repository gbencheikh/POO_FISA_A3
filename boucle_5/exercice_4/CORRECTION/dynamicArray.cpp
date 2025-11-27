#include "dynamicArray.h"
using namespace std;

template<typename T>
string array_element_to_string(T *el) {
    return to_string(*el);
}

// ---- Constructeur ----
template<typename T>
DynamicArray<T>::DynamicArray(int size) : count(0), size(size) {
    els = new T*[size];
}

// ---- Destructeur ----
template<typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] els;
}

// ---- add ----
template<typename T>
int DynamicArray<T>::add(T* el) {
    if (count >= size)
        resize(size * 2);

    els[count] = el;
    return count++;
}

// ---- remove ----
template<typename T>
T* DynamicArray<T>::remove(int i) {
    T* removed = els[i];
    els[i] = els[--count];
    resize(count);
    return removed;
}

// ---- get ----
template<typename T>
T* DynamicArray<T>::get(int i) {
    return els[i];
}

// ---- print ----
template<typename T>
void DynamicArray<T>::print() {
    std::cout << "[";
    for (int i = 0; i < count; i++) {
        std::cout << array_element_to_string(els[i]);
        if (i < count - 1) std::cout << ", ";
    }
    std::cout << "]";
}

// ---- resize ----
template<typename T>
void DynamicArray<T>::resize(int newSize) {
    try {
        T **temp;
        this->size = size;
        temp = new T *[size];

        for (int i = 0; i < count; i++) {
            temp[i] = els[i];
        }

        delete[] els;
        els = temp;
    } catch (std::bad_alloc &e) {
        this->size = size / 2;
    }
}

template class DynamicArray<int>;
template class DynamicArray<double>;
