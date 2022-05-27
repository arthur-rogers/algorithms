#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(const std::string& str1, const std::string& str2);

int main()
{
  std::cout.setf(std::ios::boolalpha);
  
  std::cout << isAnagram(" ", " ") << std::endl;                           // true
  std::cout << isAnagram("aaz", "zza") << std::endl;                       // false
  std::cout << isAnagram("anagram", "nagaram") << std::endl;               // true
  std::cout << isAnagram("car", "rat") << std::endl;                       // false
  std::cout << isAnagram("awesome", "awesom") << std::endl;                // false
  std::cout << isAnagram("qwerty", "qeywrt") << std::endl;                 // true
  std::cout << isAnagram("texttwisttime", "timetwisttext") << std::endl;   // true

  return 0;
}

bool isAnagram(const std::string& str1, const std::string& str2)
{
  if (str1.size() != str2.size()) return false;

  std::unordered_map<char, short> map1;

  for (auto iter = str1.begin(); iter != str1.end(); iter++)
    map1[*iter]++;
  
  for(auto iter = str2.begin(); iter != str2.end(); iter++)
  {
    if (!map1[*iter]) return false;
    else map1[*iter]--;
  }

  return true;
}