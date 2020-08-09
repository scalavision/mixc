// typedef can be used to give name to an existing type
// this name can then be used to declare variables to that type
#include <stdio.h>
#include <string.h>

typedef int Age;

// Age is now of type `int`
Age age;

typedef struct {
  int day;
  char month[4];
  int year;
} Date;

// Date is now a redefined type for the `date` struct
Date dob, borrowed, returned;

void printDate(Date d){
  printf("date : %d-%s-%d\n", d.year, d.month, d.day);
}

void main(){
  dob.day = 18;
  strcpy(dob.month, "Nov");
  dob.year = 2020;
  printDate(dob);
}