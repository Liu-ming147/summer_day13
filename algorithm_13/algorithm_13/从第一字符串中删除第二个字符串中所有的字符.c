#include<stdio.h>
int main()
{
	char a[] = "They are students.";
	char b[] = "aeiou";
	int i, j, k, len_a, len_b, newlen_a;
	len_a = strlen(a);
	len_b = strlen(b);
	newlen_a = len_a;
	for (i = 0; i < len_b; ++i)
	{
		for (j = 0; j < newlen_a; ++j)
		{
			if (b[i] == a[j])
			{
				for (k = j; k < newlen_a; ++k)
				{
					a[k] = a[k + 1];
				}
				newlen_a--;
			}
		}
	}
	printf("%s\n", a);

	return 0;
}