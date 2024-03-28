/*Medical Store Management Project Structure:-
1. Customer Info 
2. Medicine 
3. Supplier Info 
4. Billing 
5. About 
6. Exit
*/

#include<stdio.h>
#include"Customer_menu.h"
#include"Medicine_menu.h"
#include"Supplier_menu.h"
#include"Billing.h"


int main()
{
	int ch;
	do
	{
		printf("1.Customer Infor\n");
		printf("\n2.Medicine\n");
		printf("\n3.Supplier Info\n");
		printf("\n4.Billing\n");
		printf("\n5.About\n");
		printf("\n6.Exit\n");
		printf("----------------------------\n");
		printf("\nSelect a choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
		    	Customer_menu();
			break;
			
			case 2:
   	    		Medicine_menu();
   			break;
   			
   			case 3:
   				Supplier_menu();
   			break;
   			
   			case 4:
   				Billing();
   			break;
//   			
//   			case 5:
//   				About();
//   			break;
   			
   			default:
   			printf("Wrong choice\n");
   			
		}
		
	}
	while(ch<=5);
	return 0;
}
