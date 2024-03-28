#include<stdio.h>
#include<stdlib.h>
void medi_entry()
{
	int count=0;
	fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","r+");
	
	while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%s%s%s%d%s%s",&m.med_id,&m.med_name,&m.rack,&m.cabinit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.buy,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		count++;
	}
	printf("    ====================================MEDICINE'S ====================================\n");
	printf("                           < %d >medicines are available\n",count);
	printf("                         -----------------------------------\n");
	
	fclose(fptr1);
}

