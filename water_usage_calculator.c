/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>

int main()
{
    
    bool loop_again = true;
    while (loop_again)    {
    int last_month, current_month, total_cube, calc_again;
    float total_charge;
    printf("Enter last month meter reading : ");
    scanf("%d", &last_month);
    
    while (last_month < 0)  {
        printf("Invalid meter reading. Please re-enter: ");
        scanf("%d", &last_month);
    }
    
     printf("Enter current month meter reading : ");
    scanf("%d", &current_month);
    
    while (current_month < last_month)  {
        printf("Invalid meter reading. Please re-enter: ");
        scanf("%d", &current_month);
    }
    
    total_cube = (current_month - last_month);
    printf("Monthly usage is %d meter cube", total_cube);
    
    
    
    printf("\n\n\n=====================================\n");
    
    
    
    if (total_cube < 20)    {
        total_charge = total_cube*.55+3.5;
        printf("First 20 meter cube: RM%.2f\n", total_cube*.55);
        
    } else if (total_cube >= 20 && total_cube < 40)   {
        printf("First 20 meter cube: RM11.00\n");
        printf("20 - 40 meter cube: RM%.2f\n", ((total_cube - 20)*0.85));
        printf("40 meter cube onwards: RM0.00\n");
        total_charge = (total_cube-20)*0.85+3.5+11;
        
    } else if (total_cube >= 40)   {
        printf("First 20 meter cube: RM11.00\n");
        printf("20 - 40 meter cube: RM%.2f\n", (((total_cube - 20) - (total_cube - 40))*0.85));
        printf("40 meter cube onwards: RM%.2f\n", ((total_cube - 40)*1.00));
        total_charge = (((total_cube - 20)-(total_cube - 40))*.85) + (total_cube - 40*1.00) + 3.5+11;
        
    } else {
        printf("40 meter cube onwards: RM0.00\n");
    }
    
    printf("\n\nTotal charge is RM%.2f\n\n", total_charge);
    
    
    printf("Continue with next meter reading? 1-yes, 2-no: ");
    
    scanf("%d", &calc_again);
    
    
    printf("\n\n\n=====================================\n");
    
    if (calc_again == 2)    {
        printf("\n\nThank you");
        break;
    }   
    
    }
    return 0;
}
