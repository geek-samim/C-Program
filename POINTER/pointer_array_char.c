#include<stdio.h>
#include<string.h>
int main()
{
char *ptr[3]={"Subrata","Arnab","Sarbajeet"};
int i;
for(i=0;i<3;i++)
  {
    printf("\n %s", *ptr[i]);
  }
return 0;
}
