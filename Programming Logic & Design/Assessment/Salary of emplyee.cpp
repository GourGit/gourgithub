#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	int id,num_of_working_days,days_absent,present_days;
	float cut_off_salary,salary,hraPercent,hra,netSal,tds,grossSal;
	//Take Details of Employees
	printf("Enter name: ");
	getchar();
	fgets(name,sizeof(name),stdin);
	name[strcspn(name, "\n")] = '\0';
	
	printf("Enter Employee ID: ");
	scanf("%d",&id);
	
	printf("Number of working days: ");
	scanf("%d",&num_of_working_days);
	
	printf("Number of absent days: ");
	scanf("%d",&days_absent);	
	
	printf("Enter Salary of Employee: ");
	scanf("%f",&salary);
	
	printf("Enter HRA Percentage: ");
	scanf("%f",&hraPercent);
	
	//Calculate Home Rent Allownce
	hra=(salary*hraPercent)/100;
	//Calculate Days Worked
	present_days = num_of_working_days - days_absent;
	//Calculate Gross Salary
	grossSal=(salary+hra)/num_of_working_days;
	//Calculate Cut Off Salary
	cut_off_salary=grossSal*present_days;
	//Calculate TDS on salary
	if(cut_off_salary<=150000){
		tds=0;
	}
	else if(cut_off_salary<=250000){
		tds=(cut_off_salary-150000)*0.05;
	}
	else if(cut_off_salary<=500000){
		tds=(250000-150000)*0.05 + (cut_off_salary-250000)*0.10;
	}
	else if(cut_off_salary<=1000000){
		tds=(250000-150000)*0.05 + (500000-250000)*0.10 + (cut_off_salary-500000)*0.20;
	}
	else{
		tds=(250000-150000)*0.05 + (500000-250000)*0.10 + (1000000-500000)*0.20 + (cut_off_salary-1000000)*0.30;
	}
	
	//Calculate Net Salary
	netSal=cut_off_salary - tds;
	printf("******************\n");
	printf("\n");
	printf("Print the Employee Details\n");
	printf("\n");
	printf("******************\n");
	printf("Name: %s\n", name);
	printf("Employee ID: %d\n",id);
	printf("Total number of days attended: %d\n",present_days);
	printf("Total Days Absent: %d\n",days_absent);
	printf("HRA: %.2f\n",hra);
	printf("Gross Salary before tax deductation: %.2f\n",grossSal);
	printf("Cut Off Salary earned: %.2f\n",cut_off_salary);
	printf("Tax Dduction on Source: %.2f\n",tds);
	printf("Net Salary earned by the Employee: %.2f\n",netSal);
	return 0;
}
