#include <stdio.h>

   int main(){

char supplierName[100];
float supplierPrice;
float budget;
float lowestPrice;
int registrationStatus, 
int documentsComplete;

printf("===== TENDER EVALUATION SYSTEM =====\n");

printf("Enter Supplier Name: ");
scanf(" %[^\n]", supplierName);

printf("Enter Supplier Price: ");
scanf("%f", &supplierPrice);

printf("Enter Available Budget: ");
scanf("%f", &budget);

printf("Has Valid Registration? (1 = Yes, 0 = No): ");
scanf("%d", &registrationStatus);

printf("Are All Documents Complete? (1 = Yes, 0 = No): ");
scanf("%d", &documentsComplete);

// Evaluate supplier
if (registrationStatus == 1 &&
documentsComplete == 1 &&
supplierPrice <= budget)
{
printf("\nSupplier: %s\n", supplierName);
printf("Status: QUALIFIED\n");

printf("\nEnter Lowest Tender Price Submitted: ");
scanf("%f", &lowestPrice);

if (supplierPrice == lowestPrice)
{
printf("Result: PREFERRED SUPPLIER\n");
}
else
{
printf("Result: NOT THE PREFERRED SUPPLIER\n");
}
}
else
{
printf("\nSupplier: %s\n", supplierName);
printf("Status: DISQUALIFIED\n");

if (registrationStatus == 0)
printf("- Reason: Invalid Registration\n");

if (documentsComplete == 0)
printf("- Reason: Required Documents Not Complete\n");

if (supplierPrice > budget)
printf("- Reason: Price Exceeds Budget\n");
}

printf("\n===== EVALUATION COMPLETED =====\n");

return 0;
}