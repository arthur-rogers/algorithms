#include <iostream>
#include <vector>
#include <string>

template<typename T>
int binary_search(std::vector<T> vect, T value) {
  size_t begin = 0, end = vect.size() -1, middle = (end + begin) / 2;
  while(vect[middle] != value && begin < end) {
    if (value > vect[middle]) begin = middle + 1;
    if (value < vect[middle]) end = middle - 1;
    middle = (end + begin) / 2;
  }
  return vect[middle] == value ? middle : -1;
}

int main()
{
  std::cout << binary_search(std::vector<int> {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16}, 9) << std::endl;
  std::cout << binary_search(std::vector<double> {1.11, 1.12, 2.13, 2.14, 3.14, 3.15}, 2.14) << std::endl;
  std::cout << binary_search(std::vector<double> {1.11, 1.12, 2.13, 2.14, 3.14, 3.15}, 9.0) << std::endl;

  return 0;
}