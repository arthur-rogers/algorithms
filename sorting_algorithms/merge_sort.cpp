#include <iostream>
#include <vector>

template <typename T>
void displayVector(std::vector<T> vect, const char* name = NULL)
{
  std::cout << (name == NULL ? "vector" : name) << ": {";
  for(auto iter = vect.begin(); iter != vect.end(); iter++) std::cout << *iter << (iter != vect.end() - 1 ? ", " : " ");
  std::cout << "}\n";
}

template <typename T>
std::vector<T> merge(std::vector<T> v1, std::vector<T> v2) 
{
  displayVector(v1, "v1");
  displayVector(v2, "v2");
  std::vector<T> result {};
  size_t i = 0, j = 0;
  while (i < v1.size() && j < v2.size())
  {
    if(v1[i] < v2[j])
    {
      result.push_back(v1[i]);
      i++;
    }
    else {
      result.push_back(v2[j]);
      j++;
    }
  }
  while(i < v1.size())
  {
    result.push_back(v1[i]);
    i++;
  }
  while(j < v2.size()) 
  {
    result.push_back(v2[j]);
    j++;
  }
  displayVector(result);
  return result;
}

template <typename T>
std::vector<T> mergeSort(std::vector<T> vect)
{
  displayVector(vect, "mergeSort");
  if(vect.size() <= 1) return vect;
  auto mid = vect.begin() + (vect.size() / 2);
  std::vector<T> vec(vect.begin(), mid);
  std::vector<T> v(mid, vect.end());
  displayVector(vec, "vec");
  displayVector(v, "v");
  std::vector<T> left = mergeSort(vec);
  std::vector<T> right = mergeSort(v);
  return merge(left, right);
}

int main()
{
  std::vector<int> dv {1, 3, 9, 7, 0, 10, 0};
  std::vector<int> dv_merged = mergeSort<int>(dv);

  displayVector(dv_merged, "dv_merged");

  return 0;
}