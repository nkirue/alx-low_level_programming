#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key based on username for crackme5
 * @argc: no arguments passed
 * @argv: arguments passed
 *
 * Return: 0 sucess, 1 error
 */
int main(int argc, char *argv[])
{
	unsigned int i_x, b_y;
	size_t len_x, add_y;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len_x = strlen(argv[1]);
	p[0] = l[(len_x ^ 59) & 63];
	for (i_x = 0, add_y = 0; i_x < len_x; i_x++)
		add_y += argv[1][i_x];
	p[1] = l[(add_y ^ 79) & 63];
	for (i_x = 0, b_y = 1; i_x < len_x; i_x++)
		b_y *= argv[1][i_x];
	p[2] = l[(b_y ^ 85) & 63];
	for (b_y = argv[1][0], i_x = 0; i_x < len_x; i_x++)
		if ((char)b_y <= argv[1][i_x])
			b_y = argv[1][i_x];
	srand(b_y ^ 14);
	p[3] = l[rand() & 63];
	for (b_y = 0, i_x = 0; i_x < len_x; i_x++)
		b_y += argv[1][i_x] * argv[1][i_x];
	p[4] = l[(b_y ^ 239) & 63];
	for (b_y = 0, i_x = 0; (char)i_x < argv[1][0]; i_x++)
		b_y = rand();
	p[5] = l[(b_y ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
