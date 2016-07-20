
#include <stdio.h>

typedef int bool;

/** Tests if a given number is divisible from numbers min to max inclusive */
bool testDivisible(int n, int min, int max) {

  for (int i = min; i <= max; i++) {
    if (n % i != 0) {
      return 0;
    }
  }
  return 1;

}

/** Finds the smallest number divisible by all numbers betwen min and max inclusive */
int findSmallest(int min, int max) {

  int testNum = 2;
  while (1) {
    if (testDivisible(testNum++, min, max)) {
      return testNum - 1;
    }
  }

}

int main(int argc, char** argv) {

  printf("%d\n", findSmallest(1, 20));

}
