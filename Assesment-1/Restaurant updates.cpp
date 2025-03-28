#include<stdio.h>
main()
{
	int a,qty,tot,gtot,Amt;
	char g;
	
	do
	{
		printf("Welcome to Restaurant");
		printf("\n **** Menu ****");
		printf("\n1. Manchurian       price=110");
		printf("\n2. Gravy Manchurian price=130");
		printf("\n3. Veg Noodles	    price=140");
		printf("\n4. Sezwan Noodles   price=150");
		printf("\n5. Tomato Rice      price=120");	
		printf("\n Please enter your choose:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf(" Great! You have selected manchurian");
				printf("\n Please Enter the Qnty=");
				scanf("%d",&qty);
				tot=qty*110;
				printf(" your Bill is=%d",tot);
				gtot=tot;
				printf(" \nyour grand total is=%d",gtot);
				break;
			case 2:
				printf(" Great! you have selected Gravy Manchurian");
				printf("\n Please Enter the Qnty=");
				scanf("%d",&qty);
				tot=qty*130;				
				printf(" your total Bill is=%d",tot);
				gtot+=tot;
				printf("\n your grand total is=%d",gtot);
				break;
			case 3:
				printf("Great! You have selected Veg Noodles");
				printf("\n Please Enter the Qnty=");
				scanf("%d",&qty);
				tot=qty*140;				
				printf(" your Bill is=%d",tot);
				gtot+=tot;
				printf("\n your grand total is=%d",gtot);
				break;
			case 4:
				printf("Great! You have Selected Sezwan Noodles");
				printf("\n Please Enter the Qnty=");
				scanf("%d",&qty);
				tot=qty*150;
				printf(" your Bill is=%d",tot);
				gtot+=tot;
				printf("\n your grand total is=%d",gtot);
				break;
			case 5:
				printf("Great! You have selected Tomato Rice");
				printf("\n Please Enter the Qnty=");
				scanf("%d",&qty);
				tot=qty*120;
				printf(" your Bill is=%d",tot);
				gtot+=tot;
				printf("\n your grand total is=%d",gtot);
				break;
			default:
				printf(" Please enter Valid choice");
		}
		printf("\n*----Next Order----*");
		printf("\nIf you want to more order(Y/N)=");
		scanf(" %c",&g);		
		
		
	}
	while(g=='y' || g=='Y');
	gtot>=tot;	
	printf("Thanks! Your Total Bill Value is=%d",gtot);
	printf("\nwelcome Again");
	
}

