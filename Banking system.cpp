#include <stdio.h>
#include <stdlib.h>
int users[5] = {1,2,3,4,5};
int balance[5] = {10000,20000,5000,3000,7000};
int i;
int dep(int depo);
int withd(int withd);
int main()
{
	
	int option,deposit,withdraw,n;
	
	
	printf("\t\tWELCOME TO THE MY BANK APPLICATION");
	
	printf("\nEnter user's id\t");
	scanf("%d",&i);
	
	while (i != 0)
	{
	if (i>4)
	{
		printf("The id is not registered");
		break;
	}
	else
	{
	

	printf("\nSelect (1) to Deposit (2) to Withdraw (3) to Check balance (4) to Exit");
	scanf("%d",&option);

	switch (option)
	{
		case 1:
			printf("Enter the amount you want to deposit");
			scanf("%d",&deposit);
			balance[i] = dep(deposit);
			printf("\n%d deposited successfully",deposit);
			printf("\nYour current balance is %d",balance[i]);
			break;
		
		case 2:
			printf("Enter the amount you want to withdraw");
			scanf("%d", &withdraw);
			balance[i] = withd(withdraw);
			printf("\n%d Withdrawed successfully",withdraw);
			printf("\nYour current balance is %d",balance[i]);
			break;
			
		case 3:
			printf("Your current balance is %d",balance[i]);
			break;
			
		case 4:
			printf("Have a good day");
			exit(0);
			
		default:
				printf("Invalid choice");
				break;
		
	}
	
}
}
return 0;
}
int dep(int depo)
{
	int add;
add = balance[i] + depo;
return add;
}
int withd(int withd)
{
	int sub;
sub = balance[i] - withd;
return sub;
}




