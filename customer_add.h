#include<stdio.h>
#include<string.h>

FILE *fptr;
struct cust
{
	int cust_id;
	char cust_name[50];
	char cust_city[50];
	long long int mob_no;
	char email[30]; 
};
struct cust c;

void customer()
{
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","a+");
	
    	printf("--------------------------\n");
		printf("add customer id\n");
		scanf("%d",&c.cust_id);
		fprintf(fptr,"%4d\t",c.cust_id);
		
		printf("add customer name\n");
		scanf("%s",&c.cust_name);
		fprintf(fptr,"%4s\t",c.cust_name);
		
		printf("add customer city\n");
		scanf("%s",&c.cust_city);
		fprintf(fptr,"%4s\t",c.cust_city);
		
		printf("add cusotmer mobile number\n");
		scanf("%lld",&c.mob_no);
		fprintf(fptr,"%4lld\t",c.mob_no);
		
		printf("add customer email\n");
		scanf("%s",&c.email);
		fprintf(fptr,"%s\n",c.email);
		
		fclose(fptr);

}

