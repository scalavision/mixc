#include <stdio.h>
#include <string.h>

typedef struct {
  char chr[3];
  int start;
  int stop;
} ChrInterval;

ChrInterval events[100];

void readLine(FILE * in, char str[], char delim){
  
}

/*
void readData(){
  FILE * in = fopen("regions.bed", "r");
  int i = 0;
  char chr_tmp[40];
//  getString(in, chr_tmp);
  while(strcmp(chr_tmp, "EOF") !=0 ) {
    strcpy(events[i].chr, chr_tmp);
    fscanf(in, "%d", &events[i].start);
    fscanf(in, "%d", &events[i].stop);
    i ++;
 //   getString(in, chr_tmp);
  }

  fclose(in);
}
*/

void main() {

}