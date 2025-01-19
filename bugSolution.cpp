#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  // Safer access using at() for bounds checking
  if (!vec.empty()) {
    bool b = vec.at(0); 
    std::cout << "First element: " << b << std::endl; //Output: true
  }

  //Or using iterators
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " "; //Output: true false
  }
  std::cout << std::endl;

  //Consider using std::vector<int> or std::vector<char> for better performance and predictability
  return 0;
}
