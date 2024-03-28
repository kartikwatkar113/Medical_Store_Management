#include<stdio.h>
#include"customer_add.h"
#include"search_cid.h"
#include"search_cname.h"
#include"cust_entry.h"
#include"cust_list.h"
#include"cust_update.h"


void Customer_menu()
{
	int ch;

	do
	{
		printf("-----------------------------\n");
		printf("1.Enter Customer Information\n");
		printf("\n2.Customer search By ID\n");
		printf("\n3.Customer search By Name\n");
		printf("\n4.Customer entry\n");
		printf("\n5.Customer list\n");
		printf("\n6.Customer update\n");
		printf("----------------------------\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Add Customer info\n");
				customer();
			break;
			
			case 2:
				search_cid();
			break;
			
			case 3:
				search_cname();
			break;
			
			case 4:
				cust_entry();
			break;
			
			case 5:
				cust_list();
			break;
			
			case 6:
				cust_update();
			break;
			
			default:
			printf("enter valid input\n");
		}
	}
	while(ch<=6);
	
}
