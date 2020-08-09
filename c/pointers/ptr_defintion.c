#include <stdio.h>
#include <string.h>

int number=14;
int *ptr;
int *next_ptr;
int x=0;

/*
You can often think of * and & as cancelling out each other
*ptr == *(&number) == number
*/

void array_sv_ptr() {
  // an array's first character acts as a pointer constant and can not be changed.
  char str1[20];
  // we need to use strcpy to change the value:
  strcpy(str1, "hello world 1");
  //['h', 'i', '!'];
  char *str2;
  // we can change the value directly:
  str2 = "hello world 2";

  printf("1: %s\n", str1);
  printf("2: %s\n", str2);

  str2 = "hello world 3";
  printf("chaning the value pointed to by the ptr:\n");
  printf("2: %s\n", str2);

}

void ptr_arithmetic(){
  TODO
}

void playing_with_pointers() {
  printf("value: %d\n", number);
  printf("address: %p\n", &number);
  printf("address of pointer: %p\n", ptr);
  ptr = &number;
  printf("address of pointer: %p\n", ptr);
  x = *ptr + 7;
  printf("value of x: %d\n", x);
  printf("value of x address: %p\n", &x);
  number = number + 1;
  printf("value of number: %d\n", number);
  // increasing the value of *ptr
  (*ptr)++;
  printf("value of number: %d\n", number);
  // wild reference to the next address in memory of ptr
  // the ptr is of type int, thus one more byte ahead?
  next_ptr = ptr;
  next_ptr += 1;
  printf("address of next_ptr: %p\n", next_ptr);
  // interpreting it as an int:
  printf("value of next_ptr: %d\n", *next_ptr);
}

int main(){
  array_sv_ptr();
  return 0;
}