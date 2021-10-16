#include <iostream>

using namespace std;

void print(const int *const arr, size_t size) {
    cout << "[ ";
    for (size_t i{0}; i<size; ++i)
        cout << arr[i] << " ";
    cout <<  "]";
    cout << endl;
}

// You can't perform a range based loop directly over a dynamically allocated array because all you have is a pointer to the first element. There is no information concerning its size that the compiler can use to perform the loop. The idiomatic C++ solution would be to replace the dynamically allocated array by an std::vector:

// void print(const int *const arr, size_t size) {
//     cout << "[ ";
//     for (size_t size : arr)
//         cout << size << " ";
//     cout <<  "]";
//     cout << endl;
// }
int *apply_all(const int *const array1, size_t array1_size,const int *const array2, size_t array2_size) {
    int *new_array {};

    new_array = new int [array1_size * array2_size];
    int position {0};
    for(size_t j {0}; j< array2_size; ++j) {
        for (size_t i {0}; i< array1_size; ++i) {
            new_array[position] = array1[i] * array2[j];
            ++position;
        }
    }
    return new_array;
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *result {nullptr}; 
    result = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(result, results_size);

    delete[] result;
    
    cout << endl;

    return 0;
}
