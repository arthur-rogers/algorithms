#include <iostream>
#include <vector>

template<class T>
T max_subarray_sum(std::vector<T> arr, size_t count)
{
  if(arr.size() == 0) {
    return 0;
  }
  T max {};
  T temp {};
  for(auto iter = arr.begin(); iter < arr.begin() + count; iter++)
  {
    temp += *iter;
  }
  for(auto iter = arr.begin() + count; iter < arr.end(); iter++)
  {
    temp = temp - *(iter - count) + *iter;
    max = temp > max ? temp : max;
  }
  return max;
}

int main()
{
  std::cout << "arr : " << max_subarray_sum<double>({1.02, 2.25, 5.12, 2.35, 8.04, 1.22, 5.101}, 2) << std::endl;
  std::cout << "arr : " << max_subarray_sum<float>({1.3f, 2.1f, 5.9f, 2.0f, 8.8f, 1.7f, 5.3f}, 4) << std::endl;
  std::cout << "arr : " << max_subarray_sum<int>({4, 2, 1, 6}, 1) << std::endl;
  std::cout << "arr : " << max_subarray_sum<size_t>({}, 4) << std::endl;

  return 0;
}