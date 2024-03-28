#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sup_update()
{
	
	int supp_id,flag=0;
	char supp_name[20],city[30],email[20];
    long long int supp_mobn;
	
	FILE *fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","r+");   //main
	FILE *fptr3 = fopen("C:\\Gir's\\Practical_session\\project_on_C\\temp.txt","a+");   //temp

    printf("Enter id\n");
    scanf("%d",&supp_id);
 
	while(fscanf(fptr2,"%d%s%lld%s%s",&s.supp_id,&s.supp_name,&s.supp_mobn,&s.city,&s.email)!=EOF)
	{

		if(s.supp_id==supp_id)
		{
			flag=1;
			
			printf("add supplier name\n");
			fflush(stdin);
			gets(supp_name);
			
			
			printf("add supplier mobile number\n");
			scanf("%lld",&supp_mobn);
			
			
			printf("add supplier city\n");
			fflush(stdin);
			gets(city);
			
			
			printf("add supplier email\n");
			fflush(stdin);
			gets(email);
			
			fprintf(fptr3,"%d\t%s\t%lld\t%s\t%s\n",supp_id,supp_name,supp_mobn,city,email);
			
			continue;
		
		}
		else
		{
			fprintf(fptr3,"%d\t%s\t%lld\t%s\t%s\n",s.supp_id,s.supp_name,s.supp_mobn,s.city,s.email);
		}
	}
	if(flag==0)
	{
		printf("Id not found\n");
		printf("------------------------\n");
	}
    fclose(fptr2);
    fclose(fptr3);
    remove("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt");
    rename("C:\\Gir's\\Practical_session\\project_on_C\\temp.txt","C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt");

}
