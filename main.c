#include<stdio.h>

int main(){
    double revenue;
    double expense;
    double balance;
    int department=0.00;
    double payroll=0.00;
    double procurement=0.00;
    double asserts=0.00;
printf("MUNICIPALITY BUDGET CALCULATOR\n");
printf("Enter revenue: ");
scanf("%f",&revenue);

printf("Enter expense :");
scanf("%f",&expense);

//prompt user for Departments
printf("Enter departments :");
scanf("%f",&department);

//prompt user for payroll
printf("Enter payroll :");
scanf("%f",&payroll);

//prompt user for procurement
printf("Enter procurement :");
scanf("%f",&procurement);

//prompt user asserts
printf("Enter asserts :");
scanf("%f",&asserts);

//Calculate the balance
balance =revenue - expense;

//Display balance with two decimal places
printf("\nRevenue : %.2f,revenue\n");
printf("expense : %.2f,expense\n");
printf("balance :%.2f,balance\n");
printf("department :%2f,department\n");
printf("payroll :%2f,payroll\n");
printf("procurement %2f,procurement\n");
printf("asserts :%2f",asserts);

return 0;
}