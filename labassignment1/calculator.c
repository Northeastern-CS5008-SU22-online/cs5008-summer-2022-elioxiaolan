// Name: Xiao Lan
// Email: lan.x@northeastern.edu
#include<stdio.h>
int main()
{
    int a,b,c, choice;
    
    printf("Enter your choice\n");
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    switch(choice) {
       case 1:
	  printf("Addition\n");
	  c = a + b;
	  printf("Sum = %d", c);
	  break;
       case 2:
	  printf("Subtraction\n");
	  c = a - b;
	  printf("Difference = %d", c);
	  break;
       case 3:
	  printf("Multiplication\n");
	  c = a * b;
	  printf("Product = %d", c);
	  break;
       case 4:
	  printf("Division\n");
	  c = a / b;
	  printf("Quotient = %d", c);
	  break;
       default:
	  printf("Invalid option");
	  break;
    }
    
           
    return 0;
}
