//check whether alphabet is vowel or consonent.
#include<stdio.h>
int main()
{
    char any_ch;
    printf("Enter any character::");
    scanf("%c",&any_ch);
     if((any_ch=='a')||(any_ch=='e')||(any_ch=='i')||(any_ch=='o')||(any_ch=='u')||(any_ch=='A')||(any_ch=='E')||(any_ch=='I')||(any_ch=='O')||(any_ch=='U'))
     {
         printf("Given character is vowel.",any_ch);
     }
     else if(((any_ch>='a')&&(any_ch<='z'))||((any_ch>='A')&&(any_ch<='Z')))
     {
         printf("The alphabet is consonent.");
     }
     else
     {
         printf("The character is not an alphabet.");
     }
    return 0;
}