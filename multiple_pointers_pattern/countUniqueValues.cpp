#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int countUniqValues(std::vector<T> arr) {
  if(arr.size() == 0) return 0;
  //
  // I know it's kinda cheating in terms of algorithms course
  // but the main point here is counting unique values - not sorting
  std::sort(arr.begin(), arr.end());
  auto firstIter = arr.begin();
  auto secondIter = arr.begin() + 1;
  while(secondIter != arr.end()) {
    if (*secondIter != *firstIter) *(++firstIter) = *secondIter;
    ++secondIter;
  }
  return ++firstIter - arr.begin();
}

int main()
{
  std::cout << countUniqValues<int>({}) << std::endl;                                                 // 0
  std::cout << countUniqValues<int>({1}) << std::endl;                                                // 1
  std::cout << countUniqValues<int>({1, 1, 1, 2, 3, 3, 3, 4}) << std::endl;                           // 4
  std::cout << countUniqValues<double>({1.11, 1.12, 1.11, 1.11, 2.35, 9.99, 2.35}) << std::endl;      // 4
  std::cout << countUniqValues<char>({'a', 'a', 'b', 'c'}) << std::endl;                              // 3
  std::cout << countUniqValues<std::string>({"sample", "sample", "test", "test", "yo"}) << std::endl; // 3

  return 0;
}