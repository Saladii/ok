#include "structure.h"
#include <stdio.h>
#include <string.h>

/**
 * main function - arrange the employee in an array
 * 
 * Return - nothing
 */
int main(void)
{
    int i;
    int j;
    struct employee emp[3];
    
    for (i = 0; i < 6; i++)
    {
        emp[i].id = (111 + i);
        emp[i].check_in_time = (2.30 + i);
        emp[i].check_out_time = (11.30 - i);
        if (i == 5)
        {
          emp[i].check_out_time = (6.30 - i);  
        }
        
    }
    for (j = 0; j < 5; j++)
    {
        if (emp[i].check_in_time != 2.30)
        {
          
          printf("the amount of minute the employee missed is %f\n",(emp[i].check_in_time - 2.30));  
        }

        if (emp[i].check_out_time != 10.30)
        {
            printf("the amount of minute the employee missed is %f\n",(11.30 - emp[i].check_out_time ));
        }
    }
    for (i = 5; i < 6; i++)
    {
        if (emp[i].check_in_time != 2.30)
        {
           printf("the amount of minute the employee missed is %f\n",(emp[i].check_in_time - 2.30)); 
        }
        
        if (emp[i].check_out_time != 6.30)
        {
            printf("the amount of minute the employee missed is %f\n",(6.30 - emp[i].check_out_time));
        }
        
    }
    
}