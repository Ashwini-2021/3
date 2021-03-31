/*calculate profit and loss on a transaction
input cost price 500
input selling price 700 */
#include<stdio.h>
int main()
{
    int cost_pri,sell_pri,total_pro,total_ls;
    printf("Enter cost price::");
    scanf("%d",&cost_pri);
    printf("\nEnter selling price::");
    scanf("%d",&sell_pri);

    if(cost_pri<sell_pri)
    {   
        total_pro=sell_pri-cost_pri;
        printf("\nYou get a profit of %d rupees.",total_pro);
    }
    else if(cost_pri>sell_pri)
    {
       total_ls=cost_pri-sell_pri;
       printf("You get a loss of %d rupees.",total_ls);
    }
    else
    {
        printf("You are in no profit no loss condition.");
    }
    return 0;
    }