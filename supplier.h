#include<stdio.h>
#include<string.h>

FILE *fptr2;

struct supp{
	int supp_id;
	char supp_name[20];
	long long int supp_mobn;
	char city[30];
	char email[20];
};
struct supp s;
void supplier()
{
	fptr2=fopen("C:\\Gir's\\Practical_session\\project_on_C\\Supplier_Info.txt","a+");
	
		printf("------------------------\n");
		printf("1.add supplier id\n");
		scanf("%d",&s.supp_id);
		fprintf(fptr2,"%d\t",s.supp_id);
		
		printf("\n2.add supplier name\n");
		scanf("%s",&s.supp_name);
		fprintf(fptr2,"%4s\t",s.supp_name);
		
		printf("\n3.add supplier mobile number\n");
		scanf("%lld",&s.supp_mobn);
		fprintf(fptr2,"%4lld\t",s.supp_mobn);
		
		printf("\n4.add supplier city\n");
		scanf("%s",&s.city);
		fprintf(fptr2,"%4s\t",s.city);
		
		printf("\n5.add supplier email\n");
		scanf("%s",&s.email);
		fprintf(fptr2,"%4s\t",s.email);
		
		fclose(fptr2);
	
}
