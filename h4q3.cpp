#include <iostream>
#include <cstdio>
#include <ctime>

void stack_dynamic_array();
void static_array();
void explicit_heap_dynamic_array();

const int ITERATIONS = 100000;
const int ARRAY_SIZE = 10000;

int main(void) {
    std::clock_t start1;
    double duration1;
    start1 = std::clock();

    for (int i = 0; i < ITERATIONS; i++)
        stack_dynamic_array();

    duration1 = (std::clock() - start1) / (double)CLOCKS_PER_SEC;
    std::cout << "printf: " << duration1 << '\n';

    std::clock_t start2;
    double duration2;
    start2 = std::clock();

    for (int i = 0; i < ITERATIONS; i++)
        static_array();

    duration2 = (std::clock() - start2) / (double)CLOCKS_PER_SEC;
    std::cout << "printf: " << duration2 << '\n';

    std::clock_t start3;
    double duration3;
    start3 = std::clock();

    for (int i = 0; i < ITERATIONS; i++)
        explicit_heap_dynamic_array();

    duration3 = (std::clock() - start3) / (double)CLOCKS_PER_SEC;
    std::cout << "printf: " << duration3 << '\n';

    return 0;
}

void stack_dynamic_array(){
    int stack_dynamic_array[ARRAY_SIZE];
}
void static_array(){
    static int static_array[ARRAY_SIZE];
}
void explicit_heap_dynamic_array(){
    int *explicit_heap_dynamic_array = new int[ARRAY_SIZE];
}