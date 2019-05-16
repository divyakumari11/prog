#include<stdio.h>
int pass(&a,&b);
int main()
{
        int a=14,b=15;
        printf("enter the valuesof a and b before function call in main function: %d %d"a,b);
        pass(&a,&b);
        printf("the values of a and b by passing address of function call in main function; %d %d",a,b);
        return 0;
}
int pass (int *a,int *b)
*a=15;*b=14;
        printf("the values of a and b after function call in the main function: %d %d",a,b);
}







