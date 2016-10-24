/**  
  * Title      : Smallest Multiple
  * Date       : 21/10/2016  
  * Program By : Jeff Mbeleke 
  * Description: This is a solution to problem 5 "Smallest Multiple" 				   product" from projecteuler.net 
**/
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int *primes;
	int prime=1;
	int n=5;
	int finish=1;
	int j=0;
	int i=0;

	primes = malloc( sizeof(int));
	primes[0] = 2;
	
	printf("Enter number of primes to be printed. \n");
	scanf("%i",&n);
	printf(" \n");

	for (int i = 3; i < 999999; i = i + 1)
	{
		prime = 1;
		for (int j = 0; j < finish; j = j + 1)
		{
			if (i % primes[j] == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime == 1)
		{
			finish = finish + 1;
			primes = realloc ( primes , finish * sizeof(int) ); 
			primes[finish-1] = i;

			printf(" %i, ", i);

			if (finish == n)
				{
					printf(" \n");
					break;
				}
		}
		

		
	}

	free(primes);
}

