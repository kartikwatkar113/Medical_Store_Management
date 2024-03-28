#include<stdio.h>

void supp_search_id()
{
	int supp_id,flag=0;
	fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","r+");
	
	printf("    ====================================SUPPLIER'S MENU====================================\n\n");
	
	printf("enter supplier id\n");
	scanf("%d",&supp_id);
	
	while(fscanf(fptr2,"%d%s%lld%s%s",&s.supp_id,&s.supp_name,&s.supp_mobn,&s.city,&s.email)!=EOF)
	{
		if(s.supp_id==supp_id)
		{
			flag=1;
			break;
		}
		
	}
	if(flag)
	{
		printf("                                supplier found\n");
		printf("                               -----------------\n");
	}
	else
	{
		printf("                              supplier not found\n");
		printf("                            ---------------------\n");
	}
	
	fclose(fptr2);
}
