#include<stdio.h>
#include<string.h>
void search_cname()
{
	char ch[30];
	int flag=0,diff;
	printf("enter name for search\n");
	scanf("%s",&ch);
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","r+");
	
//	do
//	{
//		fscanf(fptr,"%s%s%s%s%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email);
//		
//		if(strcmp(c.cust_name,ch)==0)
//		{
//			printf("hi");
//			flag=1;
//			break;
//		}
//	}
//	while(1);
//	fclose(fptr);

	
	while(fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
	{
		if(strcmp(c.cust_name,ch)==0)
		{
			printf("id\t\tname\t\tcity\t\t\tmobile number\t\t\temail\n");
			printf("%d\t\t%4s\t\t%4s\t\t\t%4lld\t\t%4s\n",c.cust_id,c.cust_name,c.cust_city,c.mob_no,c.email);
			flag=1;
			break;
		}
	}
	fclose(fptr);
	if(flag)
	{
		printf("found\n");
		printf("-------------------------\n");
	}
	else
	{
		printf("not found\n");
		printf("-------------------------\n");
	}
}
