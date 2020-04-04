#include <stdio.h>  
  
int main()  
{  
    int amount, temp;  
  
    printf("Enter amount:\n");  
    scanf("%d", &amount);  
  
    temp   = amount / 100;  
    amount = amount - (temp*100);  
  
    printf("Rs 100 = %d\n", temp);  
  
    temp   = amount / 50;  
    amount = amount - (temp*50);  
  
    printf("Rs 50  = %d\n", temp);  
  
    temp   = amount / 10;  
    amount = amount - (temp*10);  
  
    printf("Rs 10  = %d\n", temp);  
  
    temp   = amount / 5;  
    amount = amount - (temp*5);  
  
    printf("Rs 5   = %d\n", temp);  
  
    temp   = amount / 2;  
    amount = amount - (temp*2);  
  
    printf("Rs 2   = %d\n", temp);  
  
    temp   = amount / 1;  
    amount = amount - (temp*1);  
  
    printf("Rs 1   = %d\n", temp);  
  
    return 0;  
}
