#include<stdio.h>

void update_stock()
{
	int med_id,flag=0;
	int rack,cabinit,quantity,sale,total,unit,cost,profit,buy,bill_no;
	char med_name[30],pur_date[20],manu_date[20],exp_date[20],supp_name[30],comp_name[30];
	
	FILE *fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","r+");
	FILE *fptr4=fopen("C:\\Gir's\\Practical_session\\project_on_C\\temp_med.txt","a+");
	
	printf("Enter medicine id\n");
	scanf("%d",&med_id);
	
	while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%s%s%s%d%s%s",&m.med_id,&m.med_name,&m.rack,&m.cabinit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.buy,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		if(m.med_id==med_id)
		{
			flag=1;
			
			printf("add medicine name\n");
			fflush(stdin);
    		gets(med_name);

    		printf("add rack number where have to store medicine\n");
	    	scanf("%d",&rack);
		
    		printf("add cabnit number where have to store medicine\n");
    		scanf("%d",&cabinit);

			printf("add qauntity of medicine\n");
    		scanf("%d",&quantity);
		
	    	printf("add sale of medicine\n");
	    	scanf("%d",&sale);
		
    		printf("add total medicines\n");
	    	scanf("%d",&total);
	    	
	    	printf("add unit of medicines\n");
	    	scanf("%d",&unit);
		
	    	printf("add cost of medicines\n");
	    	scanf("%d",&cost);
		
    		printf("add profit of medicines\n");
	    	scanf("%d",&profit);
		
    		printf("buy medicines\n");
    		scanf("%d",&buy);
		
     		printf("purchase date of medicines\n");
     		fflush(stdin);
    		gets(pur_date);
		
	    	printf("expiry date of medicines\n");
	    	gets(exp_date);
		
	    	printf("manufacturing date of medicines\n");
	    	gets(manu_date);
	
	    	printf("bill number of medicine\n");
	    	scanf("%d",&bill_no);
		
     		printf("company name of that medicine\n");
     		fflush(stdin);
    		gets(comp_name);
		
    		printf("supplier name of that medicine\n");
    		gets(supp_name);
    		
    		fprintf(fptr4,"%d\t%4s\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4s\t%4s\t%4s\t%4d\t%4s\t%4s\n",med_id,med_name,rack,cabinit,quantity,sale,total,unit,cost,profit,buy,pur_date,exp_date,manu_date,bill_no,comp_name,supp_name);
    		
    		continue;
    		
    	}
    	else
   		{
    		fprintf(fptr4,"%d\t%4s\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4d\t%4s\t%4s\t%4s\t%4d\t%4s\t%4s\n",m.med_id,m.med_name,m.rack,m.cabinit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.buy,m.pur_date,m.exp_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name);
		}
	}
	if(flag==0)
	{
		printf("Id not found\n");
		printf("--------------------------\n");
	}
	fclose(fptr1);
	fclose(fptr4);
	
	remove("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt");
	rename("C:\\Gir's\\Practical_session\\project_on_C\\temp_med.txt","C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt");
}
