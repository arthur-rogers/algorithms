#include <iostream>
#include <vector>

template <typename T>
void insertion_sort(std::vector<T> &vect) {
  for (auto i = vect.begin() + 1; i < vect.end(); i++) {
    T curval = *i;
    std::cout << "curval: " << curval << std::endl;
    for (auto j = i - 1; j >= vect.begin(); j--) {
      if (*j > curval) {
        *(j + 1) = *j;
        *j = curval;
      }
    }
  }
}

int main()
{
  std::vector<int> iv {5, 1, 2, 9, 4, 10, 13, 0};
  std::vector<double> dv {1.22, 34.5, 0.33, 4.87, 0.01};

  insertion_sort<int>(iv);
  insertion_sort<double>(dv);

  std::cout << "iv : { ";
  for(auto i : iv) std::cout << i << " ";
  std::cout << "}\n";

  std::cout << "dv: { ";
  for(auto i : dv) std::cout << i << " ";
  std::cout << "}\n";

  return 0; 
}