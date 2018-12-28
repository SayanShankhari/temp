#include <stdio.h>
#include <stdlib.h>

int *X, n;

void update() {
	int i;
	n = 10;
	X = (int *)malloc(n * sizeof(int));
	for(i = 0; i < n; i++) {
		X[i] = i;
	}
}

int main() {
	int i;
	update();
	printf("%d\n", n);
	for(i = 0; i < n; i++) {
		printf("%d ", X[i]);
	}
	printf("\n");
	return 0;
}
