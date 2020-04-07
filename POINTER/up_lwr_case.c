#include<stdio.h>
int main()
{
  char arr[100], *ptr;
  int up=0, lw=0;
  printf("\n Enter the string");
  grts(arr);
  parr=arr;
  while(*parr!='\0')
  {
    if(*parr>='A' && *parr<='Z')
    {
      up++;
    }
    
      else if(*parr>='a' && *parr<='z')
      {
        lw++
      }
      parr++;
    }
    puts(arr);
    printf("Uppercase==%d",up);
    printf("Lowercase==%d",lw);
    return 0;
  }
