#include <stdio.h>
int main()
{
    float a,b,c;
    int choice;
  printf("                                                Welcome to  the Program                                  ");

  printf("\n Enter 1 for addition\n Enter 2 for subtraction\n Enter 3 for multiplication\n Enter 4 for division\n");
  printf("Enter the no. between 1 to 4:");
  scanf("%d",&choice);
   
  if(choice>4)
  {
    printf("Enter a valid no.\n");
    goto end;
  }

  printf("Enter the first no.:\n");
  scanf("%f",&a);
  printf("Enter the second no.:\n");
  scanf("%f",&b);
  switch (choice)
  {
  case 1 :
    c=a+b;
    printf("The addition of %f and %f is %f \n",a,b,c);
    break;
  case 2:
   c=a-b;
    printf("The subtraction of %f and %f is %f \n", a,b,c); 
    break;
  case 3:
   c=a*b;
    printf("The multipication of %f and %f is %f \n",a,b,c);  
     break;
   case 4:
   c=a/b;
     printf("The division of %f and %f is %f \n",a,b,c); 
     break;
  default:
    break;
  }
  end:
  printf("Thanks for using this system");
}


