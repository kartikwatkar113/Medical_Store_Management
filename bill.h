#include<stdio.h>
#include<string.h>

struct billprint
{
	int billno;
	char cname[30];
	char mediname[30];
	int medi_qty;
	int medi_rate;
	int total;
	int day;
	int month;
	int year;	
};
struct billprint b;
void bill()
{
	
	fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","r+");
	FILE *fptr9=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Bill_Print.txt","a+");
	fprintf(fptr9,"              ========================BILL INFO===========================\n");
	
	int bcount=0,flag=0,flag1=0;
	printf("enter medicine\n");
	fflush(stdin);
	gets(b.mediname);
	b.billno=0;
	
	
	while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%s%s%s%d%s%s",&m.med_id,&m.med_name,&m.rack,&m.cabinit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.buy,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
	
		if(strcmp(m.med_name,b.mediname)==0)
		{
			flag=1;
			printf("medicine name: %s  and thier ID: %d\n",m.med_name,m.med_id);
			printf("enter quantity: \n");
			scanf("%d",&b.medi_qty);
			
			if(b.medi_qty<=b.medi_qty)
			{
				
				flag1=1;
				printf("Enter Customer name:\n");
				fflush(stdin);
				gets(b.cname);
				printf("Enter date:\n");
				scanf("%d %d %d",&b.day,&b.month,&b.year);
				b.medi_rate=m.cost+m.profit;
//				printf("%d",b.medi_rate);
				b.total=b.medi_rate*b.medi_qty;
				b.billno=b.billno+1;
				printf("%d\n",b.billno);
				fprintf(fptr9,"\nBILL NO: %d\nCustomer Name: %s\nMedicine Name: %s\t\tMedicine Quantity: %d\nMedicine rate: %d\tDATE: %d/%d/%d\nTotal: %d\n",b.billno,b.cname,b.mediname,b.medi_qty,b.medi_rate,b.day,b.month,b.year,b.total);

			}
			
		}
	}
	if(flag==0)
	{
		printf("Medicine not available\n");
	}
	fclose(fptr1);
	fclose(fptr9);
}
