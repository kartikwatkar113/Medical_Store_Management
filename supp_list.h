#include<stdio.h>

void supp_list()
{
	fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","r+");
	
	printf("    ====================================SUPPLIER'S DETAILS====================================\n\n");
	
	printf("ID\tsupplier_name\t\tmobile_number\t\tcity\t\temail\n\n");
	while(fscanf(fptr2,"%d%s%lld%s%s",&s.supp_id,&s.supp_name,&s.supp_mobn,&s.city,&s.email)!=EOF)
	{
		printf("%d\t\t%4s\t\t%4lld\t\t%4s\t\t%4s\n",s.supp_id,s.supp_name,s.supp_mobn,s.city,s.email);
		printf("-------------------------------------------------------------------------------------\n");
	}
	
	fclose(fptr2);
}
