#include<stdio.h>
#include"supplier.h"
#include"supp_entry.h"
#include"supp_list.h"
#include"sup_update.h"
#include"supp_search_id.h"
#include"supp_search_name.h"
void Supplier_menu()
{
	int ch;
	do
	{
		printf("------------------------------\n");
		printf("1.add supplier\n");
		printf("\n2.supplier entry\n");
		printf("\n3.supplier list\n");
		printf("\n4.update supplier\n");
		printf("\n5.search supplier by ID\n");
		printf("\n6.search supplier by Name\n");
		printf("--------------------------\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("add supplier information\n");
				supplier();
			break;
			
			case 2:
				supp_entry();
			break;
			
			case 3:
				supp_list();
			break;
			
			case 4:
				sup_update();
			break;
			
			case 5:
				supp_search_id();
			break;
			
			case 6:
				supp_search_name();
			break;
			
			default:
				printf("wrong choice\n");
		}
	}
	while(ch<=6);
}
