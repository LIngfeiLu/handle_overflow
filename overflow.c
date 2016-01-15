/* First partner's name: Lingfei Lu, A91046735
 * Second partner's name: Junxi Li, A91105747
 */
/* Your implementation of the overflow function should go here */

//import header file
#include "overflow.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define TWO 2
#define POWER 31

/*
	method overflow
*/
int overflow(int num1, int num2, char operation)
{
	//the largest positive number can be represented by 2's compl in 32 bits
    int const p_limit = pow(TWO, POWER) - 1;
  	//the least negative number can be represented by 2's compl in 32 bits
	int const n_limit = pow(TWO, POWER) * (-1);
  	//the flag used to lable if there is an overflow
  	//number 1 for there's an overflow, 0 for none
	int overflow = 0;
	/* positive plus positive*/
	if(operation == '+')
	{	
      	//positive + positive can overflow
		if(num1 >= 0 && num2>= 0)
		{
          	//if limit minus the sum of two number is greater than 0
          	//then no overflow
			if(p_limit - num1 - (int)abs(num2) >= 0)
			{
				overflow = 0;
			}
			
          	//otherwise, overflow
			else
			{
				overflow = 1;
			}
		}
		
      	//the sum of two negative numbers can overflow
		else if(num1 < 0 && num2 < 0)
		{
          	//if negative limit minus two number is less than 0
          	//aka plus two abs value num, then no overflow
			if(n_limit - num1 - num2 <= 0)
			{
				overflow = 0;
			}
		
          	//otherwise, overflow
			else
			{
				overflow = 1;
			}
		}
	}
	
  	//If operation is minus
	else if(operation == '-')
	{
      	//when num1 is positive and num2 is negative
		if(num1 >= 0 && num2 < 0)
		{
          	//if positive limit minus num1 and then minus num2 is greater than 0
			if(p_limit-num1-(int)abs(num2) >= 0)
			{
              	//then there is not overflow
				overflow = 0;
			}

			else
			{
              	//if not, there is an overflow
				overflow = 1;
			}
		}
		
      	//when num1 is negative and num2 is positive
		else if(num1 < 0 && num2 >= 0)
		{
          	//if negative limit plus num1 and num2 is less than 0
			if(n_limit + (int)abs(num1) + num2 <= 0 )
			{
              	//then there is no overflow
				overflow = 0;
			}

			else
			{
              	//else there is an overflow
				overflow = 1;
			}
		}
	}
  
  	//if the operation is neither plus nor minus
	else
	{
      	//then print invalid operation, and return -1
		printf("INVALID OPERATION\n");
		return -1;
	}
	//if overflow is 0
	if(overflow == 0)
	{
      	//print no overflow to indicate
	    printf("NO OVERFLOW\n");
      	//return 0
		return 0;
	}
	
  	//if overflow is not 0
	else
	{
      	//print overflow to indicate there is an overflow
		printf("OVERFLOW\n");
      	//return 1 to show there is overflow
		return 1;
	}
}