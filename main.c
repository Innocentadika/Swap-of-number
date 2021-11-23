#include <stdio.h>
//swap number defination
void swap(int*a,int*b)

{
    int t;
        t=*b;
        *b=*a;
        *a=t;

}
int main()
{int num1,num2;
printf("enter first number: ");
scanf("%d", &num1);
printf("enter second number: ");
scanf("%d", &num2);

swap(&num1 ,&num2);

printf("\nAfter swapping, first number = %d/n",num1);
printf("After swapping, second number = %d/n",num2);
return 0;
}
