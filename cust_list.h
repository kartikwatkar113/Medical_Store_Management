#include<stdio.h>

void cust_list()
{
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","r+");
	
	printf("    ------------------------------here are the list of customers-----------------------------\n\n");
	printf("id\t\tname\t\tcity\t\t\tmobile number\t\t\temail\n");
	while(fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
	{	
		printf("%d\t\t%4s\t\t%4s\t\t\t%4lld\t\t%4s\n",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email);		
	}
	fclose(fptr);
}
