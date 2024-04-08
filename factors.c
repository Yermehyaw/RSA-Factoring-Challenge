#include "rsa.h"

/**
 * factors - Factorize the number
 * @buf: integer read from file.to be factorized.
 *
 */

void factors(char *buf)
{
	int i, n;
	int even_no[] = {2, 4, 6, 8, 0};/*even_no generator could also be used*/
	int odd_no[] = {3, 5, 7, 9, 0};

	n = atoi(buf); /* assuming valid no, see readme for more details */
	for (i = 0; even_no[i] != 0; ++i)
	{
		if ((n % even_no[i]) == 0)
		{
			printf("%d=%d*%d\n", n, n / even_no[i], even_no[i]);
			return; /* Answer is found already */
		}
		if (n == even_no[i])
		{
			printf("%d=%d*%d\n", n, n, 1);
			return;
		}
	}
	for (i = 0; odd_no[i] != 0; ++i)
	{
		if ((n % odd_no[i]) == 0)
			printf("%d=%d*%d\n", n, n / odd_no[i], odd_no[i]);
		if (n == even_no[i])
			printf("%d=%d*%d\n", n, n, 1);
	}
}
