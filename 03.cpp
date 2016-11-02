#include <iostream>

using namespace std;

/** 
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

void multiplier(float* pointer_total, int other) {
  *pointer_total *= other;
}

int main() {
  float total = 123;
  float other = 5;
  float* pointer_total = &total;
  multiplier(pointer_total, other);
  cout << total;
  return 0;
}

