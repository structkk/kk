#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//
//void reverse_strint(char *arr)
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_strint(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	reverse_strint(arr);
//	printf("%s\n", arr);
//	
//	return 0;
//}
//
//int P(int n, int k)
//{
//	if (k < 0)
//		return(1 / P(n, -k));
//
//
//	else if (k == 0)
//
//		return 1;
//	
//	else
//		return n * P(n, k - 1);
//}
//int main()
//{
//	int n = 2;
//	int k = 3;
//	int ret = P(n, k);
//	printf("%d\n", ret);
//	return 0;
////}
//	int main()
// {
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}
