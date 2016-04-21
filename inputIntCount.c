#include<stdio.h>

int main(int argc, char *argv[])
{
	int x = 1;
	int pos;
	int neg;
	int count;
	int maxvalue;
	int minvalue;
	
	while (x != 0)
	{
		printf("Enter an integer (zero terminates this program): ");
		scanf("%d", &x);

		if (count == 0)
		{
			maxvalue = x;
			minvalue = x;
		}

		if (x != 0)
		{	
			if (x > 0)
				pos = pos + 1;
			if (x < 0)
				neg = neg + 1;
			if (x > maxvalue)
				maxvalue = x;
			if (x < minvalue)
				minvalue = x;
			count = count + 1;
		}
	}
	printf("You entered %d non-zero integers; %d were positive, %d were negative.\n", count, pos, neg);
	printf("The largest value you entered was %d; the smallest was %d.\n", maxvalue, minvalue);
}
