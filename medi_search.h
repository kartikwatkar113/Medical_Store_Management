#include<stdio.h>

void medi_search()
{
	int m_id,flag=0;
	printf("Enter medicine id\n");
	scanf("%d",&m_id);
	fptr1=fopen("C:\\Gir's\\Practical_session\\project_on_C\\medicine_Info.txt","r+");
	printf("    ====================================MEDICINE'S ====================================\n");
	while(fscanf(fptr1,"%d%s%d%d%d%d%d%d%d%d%d%s%s%s%d%s%s",&m.med_id,&m.med_name,&m.rack,&m.cabinit,&m.quantity,&m.sale,&m.total,&m.unit,&m.cost,&m.profit,&m.buy,&m.pur_date,&m.exp_date,&m.manu_date,&m.bill_no,&m.comp_name,&m.supp_name)!=EOF)
	{
		if(m.med_id==m_id)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("                                Medicine found\n");
		printf("                               -----------------\n");
	}
	else
	{
		printf("                              Medicine not found\n");
		printf("                            ---------------------\n");
	}
	
	fclose(fptr1);
}
