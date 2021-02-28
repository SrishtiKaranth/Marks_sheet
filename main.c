#include<stdio.h>
void main()
{ char name[30];
  int marks ;
  printf("\n Enter your name");
  scanf("\n %s",name);
  printf("\n Enter your marks");
    scanf("\n %d",&marks);
    if((marks<=100)&&(marks>=85))
    { printf("Grade A \n");
    }
    else if((marks<=84)&&(marks>=70))
    { printf("Grade B \n");
    }
  else if((marks<=69)&&(marks>=55))
      { printf("Grade C \n");
          }
        else if((marks<=54)&&(marks>=40))
    { printf("Grade D \n");
    }
    else
    { printf("Grade F \n");
    }
    }
