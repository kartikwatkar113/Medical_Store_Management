#include<stdio.h>

void supp_entry()
{
	int count=0;
	fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","r+");
	
	while(fscanf(fptr2,"%d%s%lld%s%s",&s.supp_id,&s.supp_name,&s.supp_mobn,&s.city,&s.email)!=EOF)
	{
		count++;
	}
	printf("    ====================================SUPPLIER'S MENU ====================================\n");
	printf("                           < %d >supplier are available\n",count);
	printf("                         -----------------------------------\n");
	fclose(fptr2);
}

