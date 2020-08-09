struct date {
  int day;
  int month;
  int year;
}

// declare variables of type date
struct date dob;

// multiple declarations
struct date borrowed, returned;


void printDate(struct date d) {
  printf("%d/%d/%d \n", d.day, d.month, d.year);
}

