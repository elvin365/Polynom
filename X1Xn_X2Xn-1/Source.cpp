#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int *p = NULL;
	p = (int*)malloc(sizeof(int));
	int buf = 0;
	for (;;)
	{
		scanf("%d", &buf);
		if (buf == 0)
			break;
		p[n] = buf;
		n++;
		p=(int*)realloc(p, (n + 1)*sizeof(int));//вствил предвинул и выделил на 1 больше
		
	}
	int i = 0;
	for ( i = 0; i < n; i++)
		printf("%d ", p[i]);
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += p[i] * p[n-1-i];//sum+p[i] * p[n-1-i]
	printf("\n%d ", sum);
	_getch();
	return 0;
}







//A[1] == 1[A]  *(A+1) 
//
//int main(void) {
//    #define  _-_-_-_-;
//	_ - _ - _ - _ - _ - _ - ;
//
//	return 0;
//}