#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	int id,num_of_working_days,days_absent,present_days,MA_monthly,MA;
	float cut_off_salary,salary,hraPercent,hra,netSal,tds,grossSal,DA_Percent,DA;
	//Take Details of Employees
	printf("Enter name: ");
	gets(name);
	printf("Number of working days: ");
	scanf("%d",&num_of_working_days);
	printf("Number of absent days: ");
	scanf("%d",&days_absent);		
	printf("Enter Salary of Employee: ");
	scanf("%f",&salary);	
	printf("Enter HRA Percentage: ");
	scanf("%f",&hraPercent);
	printf("Enter DA Percentage: ");
	scanf("%f",&DA_Percent);
	printf("Enter MA Provided monthly: ");
	scanf("%d",&MA_monthly);
	
	//Calculate Home Rent Allownce
	hra=(salary*hraPercent)/100;
	//Calculate Dearness Allownence
	DA = (salary *DA_Percent)/100;
	//Calculate Medical Allowence
	MA = MA_monthly * 12;
	//Calculate Days Worked
	present_days = num_of_working_days - days_absent;
	//Calculate Gross Salary
	grossSal = salary+hra+DA+MA;
	//Calculate Cut Off Salary
	cut_off_salary=(grossSal/num_of_working_days)*present_days;
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
	netSal = cut_off_salary - tds;
	printf("******************\n");
	printf("\n");
	printf("Print the Employee Details\n");
	printf("\n");
	printf("******************\n");
	printf("\n");
	printf("Name: %s\n", name);
	printf("Total number of days attended: %d\n",present_days);
	printf("Gross Salary before tax deductation: %.2f\n",grossSal);
	printf("Cut Off Salary earned: %.2f\n",cut_off_salary);
	printf("Tax Dduction on Source: %.2f\n",tds);
	printf("Net Salary earned by the Employee: %.2f\n",netSal);
	return 0;
}