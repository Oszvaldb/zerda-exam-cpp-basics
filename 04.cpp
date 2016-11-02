#include <iostream>

using namespace std;

/** 
 * Create a function that takes an integer and returns how many divisors it has
 */

void div_counter(int number, int *pointer_div) {
  for (int i = 1; i <= number; i++) {
	if (number % i == 0) {
	  *pointer_div += 1;
	}
  }
}

int main() {
  int number = 20;
  int divisors = 0;
  int* pointer_div = &divisors;
  div_counter(number, pointer_div);
  cout << divisors;
  return 0;
}

