#include<stdio.h>
#include"medicine.h"
#include"update_stock.h"
#include"medi_entry.h"
#include"medi_search.h"
#include"stock.h"

void Medicine_menu()
{
	int ch;
	do
	{
		printf("-----------------------------\n");
		printf("1.add medicine\n");
		printf("\n2.update the stock\n");
		printf("\n3.medicine entry\n");
		printf("\n4.medicine sale\n");
		printf("\n5.medicine search\n");
		printf("\n6.medicine stocks\n");
		printf("-----------------------------\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("add medicines\n");
				medicine();
			break;
			
			case 2:
				update_stock();
			break;
			
			case 3:
				medi_entry();
			break;
//			
//			case 4:
//				medi_sale();
//			break;
//			
			case 5:
				medi_search();
			break;
			
			case 6:
				stock();
			break;
			
			default:
				printf("wrong choice\n");
		}
	}
	while(ch<=6);
}
