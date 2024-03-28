#include<stdio.h>
#include<string.h>

FILE *fptr1;
struct medic
{
	int med_id;
	char med_name[50];
	int rack;
	int cabinit;
	int quantity;
	int sale;
	int total;
	int unit;
	int cost;
	int profit;
	int buy;
	char pur_date[20];
	char exp_date[20];
	char manu_date[20];
	int bill_no;
	char comp_name[30];
	char supp_name[30];
};
struct medic m;

void medicine()
{
	fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","a+");
	
    	printf("--------------------------\n");
		printf("add medicine id\n");
		scanf("%d",&m.med_id);
		fprintf(fptr1,"%d\t",m.med_id);
		
		printf("add medicine name\n");
		scanf("%s",&m.med_name);
		fprintf(fptr1,"%4s\t",m.med_name);
		
		printf("add rack number where have to store medicine\n");
		scanf("%d",&m.rack);
		fprintf(fptr1,"%4d\t",m.rack);
		
		printf("add cabnit number where have to store medicine\n");
		scanf("%d",&m.cabinit);
		fprintf(fptr1,"%4d\t",m.cabinit);
		
		printf("add qauntity of medicine\n");
		scanf("%d",&m.quantity);
		fprintf(fptr1,"%4d\t",m.quantity);
		
		printf("add sale of medicine\n");
		scanf("%d",&m.sale);
		fprintf(fptr1,"%4d\t",m.sale);
		
		printf("add total medicines\n");
		scanf("%d",&m.total);
		fprintf(fptr1,"%4d\t",m.total);
		
		printf("add unit of medicines\n");
		scanf("%d",&m.unit);
		fprintf(fptr1,"%4d\t",m.unit);
		
		printf("add cost of medicines\n");
		scanf("%d",&m.cost);
		fprintf(fptr1,"%4d\t",m.cost);
		
		printf("add profit of medicines\n");
		scanf("%d",&m.profit);
		fprintf(fptr1,"%4d\t",m.profit);
		
		printf("buy medicines\n");
		scanf("%d",&m.buy);
		fprintf(fptr1,"%4d\t",m.buy);
		
		printf("purchase date of medicines\n");
		scanf("%s",&m.pur_date);
		fprintf(fptr1,"%4s\t",m.pur_date);
		
		printf("expiry date of medicines\n");
		scanf("%s",&m.exp_date);
		fprintf(fptr1,"%4s\t",m.exp_date);
		
		printf("manufacturing date of medicines\n");
		scanf("%s",&m.manu_date);
		fprintf(fptr1,"%4s\t",m.manu_date);
		
		printf("bill number of medicine\n");
		scanf("%d",&m.bill_no);
		fprintf(fptr1,"%4d\t",m.bill_no);
		
		printf("company name of that medicine\n");
		scanf("%s",&m.comp_name);
		fprintf(fptr1,"%4s\t",m.comp_name);
		
		printf("supplier name of that medicine\n");
		scanf("%s",&m.supp_name);
		fprintf(fptr1,"%4s\n",m.supp_name);
		
		fclose(fptr1);

}

