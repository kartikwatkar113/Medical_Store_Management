#include<stdio.h>

void cust_update()
{
	int cust_id,flag=0;
    char cust_name[20],cust_city[30],email[30];
    long long int mob_no;
	
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","r+");
	FILE *fptr5=fopen("C:\\Gir's\\Practical_session\\project_on_C\\temp_cust.txt","a+");
	
	printf("------------------------------\n");
	printf("enter id for search\n");
	scanf("%d",&cust_id);
	
	while(fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
    {
    	if(c.cust_id==cust_id)
		{
		 printf("hi");
		  flag=1;
		  
     	  printf("add customer name\n");
     	  fflush(stdin);
		  gets(cust_name);
		
		  printf("add customer city\n");
		  fflush(stdin);
		  gets(cust_city);
 
		
		  printf("add cusotmer mobile number\n");
		  scanf("%lld",&mob_no);
		
		  printf("add customer email\n");
		  fflush(stdin);
	      gets(email);
	      
	      fprintf(fptr5,"%4d\t%4s\t%4s\t%4lld\t%4s\n",cust_id,cust_name,cust_city,mob_no,email);
	      
	      continue;
		}
		else
		{
			fprintf(fptr5,"%4d\t%4s\t%4s\t%4lld\t%4s\n",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email);
		}
	}
	if(flag)
	{
		printf("Id not found\n");
		printf("----------------------------------\n");
	}	
	fclose(fptr);
	fclose(fptr5);
	
	remove("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt");
	rename("C:\\Gir's\\Practical_session\\project_on_C\\temp_cust.txt","C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt");
}
