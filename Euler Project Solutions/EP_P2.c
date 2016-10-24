/**  
  * Title      : Even Fibonacci numbers
  * Date       : 21/10/2016  
  * Program By : Jeff Mbeleke 
  * Description: This is a solution to problem 2 "Even Fibonacci numbers" 
  				 from projecteuler.net 
**/

#include <stdio.h>

void main()
{
	int i;
	int sum;
	int temp;
	temp=1;
	i=2;
	sum=2;
	
	while ( i <= 4000000)
	{
		i = i + temp;
		temp = i - temp;
		
		if( i % 2 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%i",sum);

}
 
