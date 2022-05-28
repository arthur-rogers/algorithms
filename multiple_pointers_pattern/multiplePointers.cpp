/*
 * Works for sorted arrays only!!!
*/

#include <iostream>
#include <vector>

template<typename T>
std::vector<T> findNumbersForZeroSum(std::vector<T> arr) {
  auto straightIter = arr.begin();
  auto backwardIter  = arr.end() - 1;
  while (straightIter < backwardIter) {
    T sum = *straightIter + *backwardIter;
    if (sum == 0) { 
      std::vector<T> vec = {*straightIter, *backwardIter};
      return vec;
    }
    else if (sum > 0) 
      --backwardIter;
    else 
      ++straightIter;
  }
  // in case if nothing approriate was found
  return {0};
};

int main()
{
  std::vector<int> v1i = findNumbersForZeroSum<int>({-4, -3, -2, -1, 0, 1, 2, 3, 10});                     // {-3, 3}
  std::vector<float> v2f = findNumbersForZeroSum<float>({-4.2, -3.9, -2.1, -1.0, 0, 1.4, 2.5, 3.9, 4.8});  // {-3.9, 3.9}
  std::vector<double> v3d = findNumbersForZeroSum<double>({-2.25, -1.33, -0.04, 0, -1.29, 3.30});          // { 0, }
  
  std::cout << "v1i = { ";
  for(int i : v1i) std::cout << i << ", "; 
  std::cout << "}\n";

  std::cout << "v2f = { ";
  for(float f : v2f) std::cout << f << ", ";
  std::cout << "}\n";

  std::cout << "v3d = { ";
  for(double d : v3d) std::cout << d << ", ";
  std::cout << "}\n";

  return 0;
}