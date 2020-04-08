#include<stdio.h>
int main()
{
int **ptr;
int mat[2][2]={{1,2},{3,4}};
int i;
//mat[0][0]=*(arr[0]+0)=*(*(arr+0)=(*arr+i))[j]
for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
     {
        printf("\n%d", *(ptr+i)+[j]);
      }
     }
     return 0;
     }
