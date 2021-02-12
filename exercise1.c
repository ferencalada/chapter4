/*program that prints my name, a number of my choice and my date of birth*/
#include <stdio.h>
int day=24, month=3, year=2002, num=245;
  //I used int just for the sake of using something other than printf
int main(void){
  printf("my name is Fernanda\n");
  printf("a number I find very neat is %i\n",num);
  printf("my date of birth is %i/%i/%i",month,day,year);
  return 0;
}
