/*accept a grade from user and display the equivalent discription
grade discription
E = Excellent
V = Very Good
G = Good
A = Average
F = Fail*/
/*#include<stdio.h>
int main()
{
  char grade;
  printf("Enter your grade::");
  scanf("%c",&grade);
    
 if(grade=='E')
 {
     printf("Excellent!");
 }
 else if(grade=='v')
 {
     printf("Very Good!");
 }
 else if(grade=='G')
 {
     printf("Good!");
 }
 else if(grade=='A')
 {
     printf("Average!");
 }
  else if(grade=='F')
 {
     printf("Fail!!");
 }
 else
 {
     printf("Entered character is not a grade");
 }
return 0;
}*/
#include<stdio.h>
int main()
{
  char grade;
  printf("Enter your grade::");
  scanf("%c",&grade);

  switch(grade)
  {
      case'E':
         printf("Excellent!");
         break;
      case'V':
         printf("Very Good!");
        break;
      case'G':
         printf("Good!");
        break;
      case'A':
        printf("Average!");
        break;
      case'F':
        printf("Fail!");
         break;
      default:
        printf("invalid!!");
        break;
  }
 // printf("Entered character is not a grade.");
 return 0;
  }
