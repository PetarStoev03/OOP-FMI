#include <iostream>

template <typename T>
void swap(T* a, T* b) {
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int a = 20;
    int b = 30;

    swap(&a, &b);

    std::cout << a << ' ' << b;
}