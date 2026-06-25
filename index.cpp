#include <iostream>

inline int sum(int a, int b) {
  return a + b;
}

inline int diff(int a, int b) {
  return a - b;
}

int main() {
  std::cout << "diff of " << diff(5, 9) << std::endl;
  return 0;
}
