#include <stdio.h> // printf, scanf
#include <stdlib.h> // malloc
#include "mylibrary.h"
#include "myprogram.h"


int main()
{
	int n, res;
	fprintf(stderr, "Which task to run? (1-5) ");
	scanf("%d", &n);

	if (n < 1 || n > 5)
	{
		fprintf(stderr, "Invalid task number.\n");
		return -1;
	}
	fprintf(stderr, "Task %d selected.\n", n);
	if (n == 1)
	{
		fprintf(stderr, "Enter the number: ");
		scanf("%d", &n);
		res = fibonacci(n);
		printf("%d\n", res);
	}
	else if (n == 2)
	{
		fprintf(stderr, "How many numbers? ");
		scanf("%d", &n);
		int *a = (int *)malloc(sizeof(int)*n);
		for (int i=0;i<n;++i)
			scanf("%d", &a[i]);
		res = mean_of_numbers(a, n);
		printf("%d\n", res);
	}
	else if (n == 3)
	{
		fprintf(stderr, "How many numbers? ");
		scanf("%d", &n);
		int *a = (int *)malloc(sizeof(int)*n);
		for (int i=0;i<n;++i)
			scanf("%d", &a[i]);
		res = min_of_numbers(a, n);
		printf("%d\n", res);
	}
	else if (n == 4)
	{
		fprintf(stderr, "Enter the number: ");
		scanf("%d", &n);
		res = reflected_number(n);
		printf("%d\n", res);
	}
	else if (n == 5)
	{
		fprintf(stderr, "Enter the digit: ");
		scanf("%d", &n);
		printf("%c\n", digit2char(n));
	}

	wrapper();
	return 0;
}