#include<stdio.h>
#include<time.h>
#define CUBE(x) (x)*(x)*(x)
int main() {
  int i = 0;
  int x = 2;
  int sum = 0;
  int msec;
  clock_t  start,stop;
  start=clock();
  while (i++ < 1e7) {
    sum += CUBE(x);
  }
  stop=clock();
  msec= (stop-start)*1000/CLOCKS_PER_SEC;
  printf("The sum is %d\n", sum);
  printf("The elapsed time in ms = %d\n",msec);
}
