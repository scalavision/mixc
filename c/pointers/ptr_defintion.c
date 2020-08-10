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

void looping_through_string_ptr() {
  char *verse = "hello world";

  printf("first char: %c\n", *verse);
  while (*verse != '\0')
    printf("%c\n", *verse++);
}

void length(char *ptr, int *counter){
  // increase the value that counter is pointing to
  while (*ptr++ != '\0') (*counter)++;  
}

void add(int value, int *accum){
  *accum = *accum + value;
}

void calc_length(){
  // declare the pointer, 
  // this allocates memory to hold a pointer of type Int
  int * counterPtr;
  // declare a value of type int
  // this will allocate memory on the stack for an int
  int counter = 0;
  // we make our pointer point to the stack allocated int
  // of value 0
  // we could have skipped the counter int if we directly allocated
  // this memory on the stack for the pointer directly
  counterPtr = &counter;

  printf("calc len\n");
  length("hello world\n", counterPtr);
  printf("length: %d\n\n", *counterPtr);
  printf("adding 10 to the length\n");
  add(10, counterPtr);
  printf("length added 10: %d\n", *counterPtr);
}

void ptr_arithmetic(){
  char *words = "hello world\n";
  printf("h: %c\n", words[0]);
  printf("e: %c\n", *(words + 1));
  printf("l: %c\n", *(words + 2));
  printf("o: %c\n", *(&words[4]));
  //TODO

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
//  looping_through_string_ptr();
  // playing_with_pointers();
//  calc_length(); 
  ptr_arithmetic();
  //array_sv_ptr();
  return 0;
}