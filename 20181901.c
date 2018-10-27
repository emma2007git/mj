#include <stdio.h>

int rfibo(int n);
int sfibo(int n);

int main()
{
	
	sfibo(1);

	for (int i = 1; i < 23; i++)
	{
		printf("rfibo(%d) = %d\n", 2 * i + 1, rfibo(2 * i + 1));
		printf("sfibo(%d) = %d\n", 2 * i + 1, sfibo(2 * i + 1));
		sfibo(2 * (i + 1));
	}
	return 0;
}

int rfibo(int n)
{
	int result = 0;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return result = rfibo(n - 2) + rfibo(n - 1);
}

int sfibo(int n)
{
	static int result0 , result1 = 1, result;
	

		result = result0 + result1;
		result0 = result1;
		result1 = result;

		return result;
	}
