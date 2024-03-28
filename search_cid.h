#include<stdio.h>
#include<stdlib.h>

void search_cid()
{
	int cust_id,flag=0;
	printf("------------------------------\n");
	printf("enter id for search\n");
	scanf("%d",&cust_id);
	fptr=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Customer_Info.txt","r+");
	
//	fread(&c,sizeof(cust),1,fptr);

    while(fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email)!=EOF)
    {
    	if(c.cust_id==cust_id)
		{
		  printf("hi");
		  flag=1;
		  break;
		}
	}
		

	
//	do
//	{
//		fscanf(fptr,"%d%s%s%lld%s",&c.cust_id,&c.cust_name,&c.cust_city,&c.mob_no,&c.email);
//		if(c.cust_id==cust_id)
//		{
//			printf("hi");
//			flag=1;
//			break;
//		}
//	}
//	while(1);
//	while(fscanf(fptr,"%d",&c.cust_id)!=)
//	{
//		if(c.cust_id==cust_id)
//		{
//			flag=1;
//			break;
//		}
//	}
	fclose(fptr);
	if(flag)
	{
		printf("--------------\n");
		printf("id found\n");
	}
	else
	{
		printf("--------------\n");
		printf("id not found\n");
	}
	
}
