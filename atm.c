#include<stdio.h>
//#include<conio.h>
void main()
{
int pin,pin1=5555,c=1,ch,amt,balance=5000;
	printf("Welcome to K&K Bank\n");
	start:
	
	printf("Enter the pin number\n");
	scanf("%d",&pin);
	if(pin==pin1)
	{
		printf("Please select your choice\n");
		printf("1.Deposite \n 2.Withdraw\n 3.Checkbalance\n 4.ChangePin\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the deposite amount\n");
			scanf("%d",&amt);
			if(amt<=20000)
			{
				balance=balance+amt;
				printf("%d",balance);
			}
			else
			{
				printf("max limit of withdraw is 20k\n");
			}
			break;
			case 2:printf("Enter the withdraw amount\n");
			scanf("%d",&amt);
			if(amt<=20000)
			{
				if(amt<=balance){
					balance=balance-amt;
					printf("after deducting %d,current balance=%d\n",amt,balance);
			}
			else
			{
				printf("insufficient balance\n");
			}
			}
			break;
			case 3:printf("Your balance=%d\n",balance);
			break;
			case 4:printf("Enter the new pin");
			scanf("%d",&pin1);
			printf("Your pin is updated succesfully ...!\nlogin again\n");
			goto start;
			break;
		}
			
	
	}
	else
	{
		printf("Please enter the valid pin\n");
		if(c<3)//here c is for c<3 pin after restart
		{
			c++;
		goto start;
		}
		
	}
	printf("Press 1 to continue..\n");
	scanf("%d",&ch);
	if(ch==1)
	goto start;
	printf("Thanks for using K&K Bank");


}