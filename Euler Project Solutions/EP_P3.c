/**  
  * Title      : Largest prime factor
  * Date       : 22/10/2016  
  * Program By : Jeff Mbeleke 
  * Description: This is a solution to problem 3 "Largest prime factor" 
  				 from projecteuler.net 
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	long long i;
	int j;
	int n;
	int *prime;
	int isPrime;
	int largestPrime;
	
	i = 0;
	n = 1;
	largestPrime = 2;

	prime = malloc( 1000 * sizeof(int));
	prime[0] = 2;



	if ( prime == NULL)
	{
		printf(" Error 1 - Unable to allocate memory \n");
	}
	else
	{
		for ( i = 3 ; i <= sqrt(600851475143) ; i++ )
		{
			isPrime = 1;

			/* Finding prime numbers */

			for ( j = 0; j < n ; j++) 
			{
			 	if ( i % prime[j] == 0)
				{
					isPrime = 0;
					break;
				}
			}
			
			/* Saving prime numbers and verifying if it divides the target saving as largest prime*/
			if ( isPrime == 1 )
			{
				n = n + 1;

				if ( (n + 5) % 1000 == 0)
				{
				
				prime = realloc ( prime , 2 * (n + 5) * sizeof(int) ); /* Over kill */
				} 
				
				prime[n-1] = i;

				if ( 600851475143 % prime[n-1] == 0)
				{ 
					largestPrime = prime[n-1];
				}
			}
		}

		printf(" \n The largest prime factor of 600851475143 13195 is: %i \n", largestPrime);
	}
	
free(prime);
    
return 0;


}