#include <iostream>
#include <string>
#include <vector>

template<typename T>
int linear_search(std::vector<T> arr, T value) {
  for (auto iter = arr.begin(); iter < arr.end(); iter++) {
    if (*iter == value) return iter - arr.begin();
  }

  return -1;
}

int main()
{
  std::vector<int> arr {1, 2, 53, 9, 12, 22};
  std::vector<double> darr {2.22, 3.21, 9.54, 10.01};
  std::vector<std::string> sarr {"some", "test", "text"};
  std::cout << linear_search<int>(arr, 9) << std::endl; // 3
  std::cout << linear_search<double>(darr, 9.54) << std::endl; // 2
  std::cout << linear_search<std::string>(sarr, "test") << std::endl; // 1

  return 0;
}