#include <stdio.h>
#include <stdlib.h>

void int_to_str(int n, char str[], int nS) {
	nS = 0;
	while(n) {
		A[9 - nA++] = n % 10;
		n /= 10;
	}
	printf("%d\n", nA);
	for(i = 0; i < 10; printf("%d ", A[i++]));
	printf("\n");
	for(i = 0; i < nA; i++) {
		A[i] = A[10 - nA + i];
	}
	for(i = 0; i < 10; printf("%d ", A[i++]));
	printf("\n");	
}

int main() {
	int A[10], nA=0, i, n;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(i = 0; i < 10; i++)
		A[i] = 0;
	
	return 0;
}
