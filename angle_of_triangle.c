//write a programe to find the third angle of triangle if two angles are given
#include<stdio.h>
int main()
{
    float third_angle,first, second;
    printf("Enter the first angle of the triangle:");
    scanf("%f",&first);

    printf("Enter the second angle of the triangle:");
    scanf("%f",&second);

    third_angle=180-first-second;
    printf("Third angle of thriangle is %f.", third_angle);

    return 0;
}