#include 
  int main() {
        int a, b, temp;

        printf("Enter the value for a:");
        
        scanf("%d", &a);

        printf("Enter the value for b:");
       
        scanf("%d", &b);

        
        temp = a;
        
        a = b;
        
        b = temp;

  

        printf("Result after swapping:\n");
        printf("Value of a: %d\n", a);
        printf("Value of b: %d\n", b);
        return 0;
  }
