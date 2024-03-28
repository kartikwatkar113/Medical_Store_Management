#include<stdio.h>

void stock()
{
	fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","r+");  
	
	printf("    ====================================MEDICINE'S ====================================\n\n");
	printf("Id\tmedicine_name\track_no.   cabinit_no.   quantity   sale   total   unit   cost   profit   medicine_buy\n\npurchase_date   expiry_date   manufacturing_date   bill_no.   company_name   supplier_name\n\n");
	
	
	while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%s%s%s%d%s%s",&m.med_id,&m.med_name,&m.rack,&m.cabinit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.buy,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		printf("%d\t%4s\t\t%4d\t    %4d\t  %4d\t   %4d\t   %4d\t  %4d\t  %4d\t  %4d\t     %d\n\n%4s\t\t%4s\t   %4s\t   %4d\t\t %4s\t\t%4s\n\n",m.med_id,m.med_name,m.rack,m.cabinit,m.quantity,m.sale,m.total,m.unit,m.cost,m.profit,m.buy,m.pur_date,m.exp_date,m.manu_date,m.bill_no,m.comp_name,m.supp_name);
		printf("---------------------------------------------------------------------------------------------------------------\n");
	}
	
	fclose(fptr1);
}
/*int med_id;
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
	*/
