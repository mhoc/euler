
// Does it still count as cpp if i dont use any cpp specific features? :O

#include <stdio.h>

void find() {

  int MAX = 1000;

  for (int a = 0; a < MAX; a++) {
    for (int b = a+1; b < MAX; b++) {
      for (int c = b+1; c < MAX; c++) {
        if (a*a+b*b == c*c && a + b + c == 1000) {
          printf("%d\n", a*b*c);
          return;
        }
      }
    }
  }

}

int main() {

  find();

}
