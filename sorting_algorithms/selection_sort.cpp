#include <iostream>
#include <vector>
#include <csignal>

template<typename T>
void selection_sort(T* arr, size_t size) {
  T temp;
  for (size_t i = 0; i < size; i++) {
    T* smallest = &arr[i];
    for (size_t j = i; j < size; j++) {
      if (*smallest > arr[j]) smallest = &arr[j];
    }
    temp = *smallest;
    *smallest = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int integer_array[] {2, 14, 9, 1, 0, 7};
  double double_array[] {0.12, 3.22, 8.91, 5.43, 0.01};

  selection_sort<int>(integer_array, sizeof(integer_array) / sizeof(int));
  selection_sort<double>(double_array, sizeof(double_array) / sizeof(double));

  std::cout << "integer array : { ";
  for (size_t i : integer_array) std::cout << i << ", ";
  std::cout << "}\n";

  std::cout << "double array : { ";
  for (double i : double_array) std::cout << i << ", ";
  std::cout << " }\n";

  return 0;
}