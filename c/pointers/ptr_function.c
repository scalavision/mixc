#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
In `c` a pointer to a function can be passed to another function:
the `my_func_ptr` is a function that takes one argument of type `int`, and
this function returns a double.

It also have been written like this:
double *my_func_ptr(int)

which means a function that takes one `int` argument and returns a pointer
to a double.
*/

void generateValues(int init, int stop, double (*my_func_ptr)(int) ) {
  int i;
  for(i = init; i <= stop; i++){
    // *my_func_ptr is the materialized function, `i` is the argument
    // passed to the function, so in this moment we are actually
    // calling the function `my_func_ptr`
    printf("%d  %0.3f\n", i, (*my_func_ptr)(i));
  }
}

double reciprocValues(int n){
  return 1.0 / n;
}

double squareValues(int n){
  return n * n;
}

int main(){

  printf("reciproc values:\n");
  generateValues(1,10, reciprocValues);
  
  printf("squared values:\n");
  generateValues(1,10, squareValues);

  return 0;

}