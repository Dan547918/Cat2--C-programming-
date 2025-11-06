#include <stdio.h>

int main() {

    // initialize 2*2 integer array

    int array[2][2] = {{65, 92}, {84, 72}};

  // nested for loop

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 2; j++) {

            printf("%d\n", array[i][j]);

      }
  }

    return 0;

}


