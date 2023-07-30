#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
    int temp_3305=*a;
    *a=*b;
    *b=temp_3305;
}

int main()
{
    int a_3305,b_3305,c_3305;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d",&a_3305,&b_3305,&c_3305);
    swap(&a_3305,&b_3305);
    swap(&b_3305,&c_3305);
    printf("The values of a, b and c after swapping are %d, %d and %d respectively\n",a_3305,b_3305,c_3305);
    return 0;
}