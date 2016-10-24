/**  
  * Title      : Multiples of 3 and 5
  * Date       : 21/10/2016  
  * Program By : Jeff Mbeleke 
  * Description: This is a solution to problem 1 "Multiples of 3 and 5" 
  				 from projecteuler.net 
**/

#include <stdio.h>

void main() 
{
	int sum;
	int i;

	sum = 0;
	 
	for ( i = 1; i < 1000; i = i + 1 )
	{
		if ( i % 5 == 0 || i % 3 == 0) 
		{
			
			sum = sum + i;

		}
	}

printf("sum %i", sum);		


}
