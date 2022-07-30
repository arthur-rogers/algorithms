#include <iostream>
#include <vector>

template <typename T>
void bubble_sort(std::vector<T>& arr) {
  for (auto iter = arr.begin(); iter < arr.end() - 1; iter++) {
    for (auto j = arr.begin(); j < arr.end() - 1; j++) {
      if (*j > *(j + 1)) {
        T temp = *j;
        *j = *(j + 1);
        *(j+ 1) = temp;
      }
    }
  }
}

int main()
{
  std::vector<int> ivect {12, 22, 9, 34, 1, 7};
  std::vector<double> dvect {0.39, 22.1, 3.75, 0.01, 1.01};
  bubble_sort<int>(ivect);
  bubble_sort<double>(dvect);
  //
  std::cout << "{ ";
  for (auto i : ivect) std::cout << i << ", ";
  std::cout << "}\n"; 
  //
  std::cout << "{ ";
  for (auto i : dvect) std::cout << i << ", ";
  std::cout << "}\n"; 

  return 0;
}