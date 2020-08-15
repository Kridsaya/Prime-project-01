#include<stdio.h>
int isPrime(int X)
{
	int i, round = 0;
	for (i = 1; i <= X; i++)
	{
		if (X % i == 0)round++;
	}
	if (round == 2)return 1;
	else return 0;
}
int main()
{
	int x;
	printf("Enter number to check : ");
	scanf_s("%d", &x);
	if (isPrime(x) == 1)
		printf("%d is prime", x);
	else
		printf("%d is not prime", x);
	return 0;
}