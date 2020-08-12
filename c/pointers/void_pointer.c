#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
A void pointer can be assigned to any other type of pointer, henche
i.e. any valid address containing any struct or type, that means.

However, you should always use `casting` when assigning a void pointer to
something.

TODO: Need more resources to find how this works:

// a void pointer;
void *void_pointer;

// A function that returns a void pointer
void *getNode(int size) {
  void *vp;
  char *hello = "hello world";
  vp = hello;
  return vp;
}

double d, *dp;
dp = &d;
void_pointer = dp;

*/

enum {INT, DOUBLE} Type;

void printAnyType(void *ptr, int Type){
  switch(Type) {
    case INT:
      printf("%d\n", *(int *) ptr);
      break;
    case DOUBLE:
      printf("%f\n", *(double *) ptr);
      break;
    default:
      printf("error");
      break;
  }
}

int main(){

  double d = 10.0;
  int i = 10;

  printAnyType(&i, INT);
  printAnyType(&d, DOUBLE);
  
}