#include <iostream>
#include <list>
#include <unordered_map>
#include <cmath>
#include <iomanip>

bool containsOnlySquaredValues(std::list<int>, std::list<int>);

int main() 
{
  bool res1 = containsOnlySquaredValues({1, 2, 3},{1, 4, 9});
  bool res2 = containsOnlySquaredValues({1, 5, 7},{1, 2, 11});
  bool res3 = containsOnlySquaredValues({4, 2, 9}, {1,2});

  std::cout.setf(std::ios::boolalpha);
  std::cout << "res1: " << res1 << std::endl;
  std::cout << "res2: " << res2 << std::endl;
  std::cout << "res3: " << res3 << std::endl;
  
  return 0;
}

bool containsOnlySquaredValues(std::list<int> L1, std::list<int> L2) {
  if (L1.size() != L2.size()) {
    return false;
  }
  std::unordered_map<int, int> m1;
  std::unordered_map<int, int> m2;

  for(auto iter = L1.begin(); iter != L1.end(); iter++)
    m1[*iter]++;
  
  for(auto iter = L2.begin(); iter != L2.end(); iter++)
    m2[*iter]++;

  for(auto iter1 = L1.begin(); iter1 != L1.end(); iter1++) {
    if(m1[*iter1] != m2[std::pow(*iter1, 2)])
      return false;
  }

  return true;
}