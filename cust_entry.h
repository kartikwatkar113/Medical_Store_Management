#include<stdio.h>

void cust_entry()
{
	int count=0;
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","r+");
	
	printf("      ------------------------------here are entries of customers-----------------------------\n");
	while(fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
	{
		count++;
	} 
	printf("------------------------\n");
	printf("Customers are: %d\n",count);
	
	fclose(fptr);
}
