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


double integral(double x, double y, int i, double (*fp)(double)){

  double h, sum;
  h = (y - x) / i;
  sum = ( (*fp)(x) + (*fp)(y) ) / 2.0;

  int j;
  for(j = 1; j < i; j++) {
    sum += (*fp)(x + j * h);
  }

  return h * sum;

}

double quad(double x) {
  return x*x + 2.0 * x + 4.0;
}

int main(){

  printf("reciproc values:\n");
  generateValues(1,10, reciprocValues);
  
  printf("squared values:\n");
  generateValues(1,10, squareValues);


  printf("trapezoidal rule ");
  double result = integral(1,4,20, quad);
  printf("result: %f", result);
  return 0;

}
