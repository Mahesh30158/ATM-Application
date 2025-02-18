#include <stdio.h>
#include <stdlib.h>
int main()
{
   	int pin,pin1=5555,c=1,ch,amt,balance=5000;
   	printf("welcome user\n");
   	start:
	printf("enter the pin number :  ");
	scanf("%d",&pin);
	if(pin==pin1)
	{
        printf("please select your choice\n");
        printf("1.deposite \n2.withdraw \n3.checkbalance \n4.changepin\n");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:printf("enter the deposite ammount : ");
                    scanf("%d",&amt);
                    if(amt<=20000)
                    {
                        balance +=amt;
                        printf("%d",balance);
                    }
                    else
                    {
                        printf("max limit of withdraw is 20k\n");
                    }
                break;
            case 2:printf("enter the withdraw ammount : ");
                    scanf("%d",&amt);
                    if(amt<=20000)
                    {
                        balance -=amt;
                        printf("after deducting %d ,balance=%d\n",amt,balance);
                    }
                    else
                    {
                        printf("insufficient balance\n");
                    }
                break;
            case 3:printf("your balance=%d\n",balance);
                break;
            case 4:printf("enter the new pin");
                    scanf("%d",&pin1);
                    printf("your pin is updated succesfully.....!\nlogin again\n");
                    goto start;
                break;

        }

	}
	else
    {
        printf("please enter the valid pin\n");
        if(c<3)
        {
        c+=1;
        goto start;
        }

    }
    printf("press 1 to continue..\n");
    scanf("%d",&ch);
    goto start;
    printf("thanks for using presoftware applications");

}
