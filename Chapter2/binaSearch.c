#include <stdio.h>

int
BinarySearch(const int A[], int X, int N) {
	int Low, Mid, High;

	Low = 0; High = N - 1;
	while (Low <= High)
	{
		Mid = (Low + High) / 2;
		if (A[Mid] < X) {
			Low = Mid + 1;
		}
		else if (A[Mid] > X) {
			High = Mid;
		}
		else
			return Mid;
	}
	return -1;
}

int 
main() {
	int a[8] = { 2,5,6,7,8,10,21,33 };
	int X = 21;
	printf("%d",BinarySearch(a,X,8));


}