//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 3
//#define M 4
//void weightedAverage(float sets[N][M], float weights[M], float res[N])
//{
//	float avg = 0.0,divide=0.0,bulk=0.0;
//	for (int d = 0; d < M ; d++)
//		divide += weights[d];
//	for (int i= 0; i < N ; i++)
//	{
//		bulk = 0.0;
//		for (int j = 0; j < M ;j++)
//		{
//			avg= sets[i][j];
//			bulk += weights[j] * avg;
//		}
//		res[i] = bulk / divide;
//	}
//}
//void main()
//{
//	float arr[N][M];
//	float w[M];
//	float r[N];
//	printf("Enter 12 Decimal numbers: ");
//	for (int r = 0; r < N; r++)
//	{
//		printf("\n");
//		for (int c = 0; c < M; c++)
//		{
//			scanf("%f", &arr[r][c]);
//		}
//
//	}
//	printf("Enter 4 weights:\n");
//	for (int i = 0; i < M; i++)
//		scanf("%f", &w[i]);
//	weightedAverage(arr, w, r);
//	for (int j = 0; j < N; j++)
//		printf("For the sets of values at position %d is: %f\n", j, r[j]);
//
//}