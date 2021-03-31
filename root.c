//write a programe to find the roots of quadratic equations
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,k,r,root,root1,root2,real_part,im_part;
    printf("Input the coefficient of equation of the form a*x*x+b*x+c=0");
    printf("\nYour quadratic equation is homageneouse.");
    printf("\nEnter the coefficient of x^2::");
    scanf("%f",&a);
    printf("Enter the coefficient of x::");
    scanf("%f",&b);
    printf("Enter the value of constant::");
    scanf("%f",&c);
    k=b*b-(4*a*c);
    
 if(k==0)
    {
        printf("Roots are real and equal.");
        root = (-b)/(2*a);
        printf("\nX1=X2=%f",root);
    }
    else if(k>0)
    {
        printf("Roots are real and different.");
        root1=(-b+sqrt(k))/(2*a);
        root2=(-b-sqrt(k))/(2*a);
        printf("\nX1=%f\t X2=%f",root1,root2);
    }
    else if(k<0)
    {
        printf("Root are complex and diiferent");
        real_part=(-b)/(2*a);
        im_part=sqrt(-k)/(2*a);
        printf("\nX1=%f+%fi\t X2=%f-%fi",real_part,im_part,real_part,im_part);
    }
    else{
        printf("check your values.");

    }
   return 0;
}