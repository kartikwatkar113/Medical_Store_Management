#include<stdio.h>
#include<string.h>
void supp_search_name()
{
	int flag=0;
	char supp_name[20];
	fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","r+");
	
	printf("    ====================================SUPPLIER'S MENU====================================\n\n");
	
	printf("enter supplier name\n");
	scanf("%s",&supp_name);
	
	while(fscanf(fptr2,"%d%s%lld%s%s",&s.supp_id,&s.supp_name,&s.supp_mobn,&s.city,&s.email)!=EOF)
	{
		if(strcmp(s.supp_name,supp_name)==0)
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
