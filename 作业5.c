/*#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	double flag = 1.0;
	double sum = 0.0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += flag * 1 / i;
		flag = -flag;
	}
	printf("jieguo:%f", sum);

}*/
#include <stdio.h>
int main()
{
	int i, t;
	float sum;
	t = 1.0;
	sum = 0.0;
	for (i = 1; i <= 100; i++)
	{

		sum += t * 1.0 / i;
		t = -t;
		}
	printf("result is:%f", sum);
	return 0
}