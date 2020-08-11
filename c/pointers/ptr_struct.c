#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char *chrName;
  int start;
  int stop;
} ChrRegion;

char *chrR1="1";
char *chrR2="1";

ChrRegion *region1;
ChrRegion *region2;

int isEqual(ChrRegion *r1, ChrRegion *r2) {

  // r2->.start and (*r2).start both
  // extracts the `start` value from the struct
  if(
    r1->chrName == r2->chrName &&
    r1->start == (*r2).start &&
    r1->stop == (*r2).stop
  )
    return 1;
  else 
    return 0;

}

int main(){
  printf("hello world\n");

  region1 = malloc(sizeof(ChrRegion));
  region2 = malloc(sizeof(ChrRegion));

  region1->chrName = chrR1;
  region1->start = 10;
  region1->stop = 20;

  region2->chrName = chrR2;
  region2->start = 10;
  region2->stop = 20;

  int result = 0;
  result = isEqual(region1, region2);
  printf("is equal: %d", result);

  free(region1);
  free(region2);

  return 0;
}
