#include<stdio.h>
int main()
{
  char arr[10]="Hello!";
  char *parr;
  parr=arr;
  while(*parr!='\0')
  {
    printf("\n%c",*parr);
    *parr++
   }
   return 0;
}
