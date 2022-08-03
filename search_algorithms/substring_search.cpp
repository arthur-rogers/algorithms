#include <iostream>
#include <string>

int count_substrings(const std::string& main_str, const std::string& substr) {
  size_t counter = 0;
  for (size_t i = 0; i < main_str.size(); i++) {
     for (size_t j = 0; j < substr.size(); j++) {
      if (substr[j] != main_str[i + j]) break;
      if (j == substr.size() - 1) counter++;
     }
  }

  return counter;
}

int main()
{
  std::string mainstr, substr;
  while (!std::cin.eof())
  {
    std::cout << "Enter main string: "; 
    std::getline(std::cin, mainstr);
    std::cout << "Enter substring: ";
    std::getline(std::cin, substr);
    std:: cout << substr << ": " << count_substrings(mainstr, substr) << std::endl;
  }

  return 0;
  
}