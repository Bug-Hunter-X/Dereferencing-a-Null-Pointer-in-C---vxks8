#include <iostream>

int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { // Check if the pointer is valid before dereferencing.
    *ptr = 10;
  }
  else {
    std::cerr << "Error: Pointer is null!" << std::endl;
    return 1; // Indicate an error.
  }
  return 0;
} 