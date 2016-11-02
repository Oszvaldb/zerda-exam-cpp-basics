#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool find_bigger (int array[], int num, int length) {
  bool isbigger = false;
  for (int i = 0; i < length; i++) {
    if (array[i] >= num) {
    	isbigger = true;
    }
  }
  return isbigger;
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int num = 5;
  find_bigger(array, num, 5);
  cout << find_bigger(array, num, 5);
  return 0;
}
