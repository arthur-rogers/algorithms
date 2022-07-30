#include <iostream>
#include <vector>

int main()
{
  std::vector<int> vint {1, 2, 3, 4, 5};
  for (auto iter = vint.begin(); iter < vint.end(); iter++) *iter = 5;
  for (size_t i : vint) std::cout << i << ' ';
  std::cout << '\n';

  return 0;
}