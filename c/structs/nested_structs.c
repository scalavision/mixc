#include <stdio.h>
#include <string.h>

typedef struct {
  int day;
  char month[4];
  int year;
} Date;

typedef struct {
  char cmd[100];
  int cores;
} Process;

typedef struct {
  char name[31];
  Date date;
  Process proc; 
} Job;

int main(){ return 0; }