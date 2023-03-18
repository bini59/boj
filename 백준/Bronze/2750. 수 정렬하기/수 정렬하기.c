#include <stdio.h>

int change(int* p, int i) {
	if (*p > *(p + 1)) {
		int a = *p;

		*p = *(p+1);
		*(p + 1) = a;

		return 0;
	}
}
int main(){
	int size;
	scanf("%d", &size);
	int a[1000];
	int l;
	for (l = 0; l != size; l++) {
		int num;
		scanf("%d", &num);
		a[l] = num;
	}

	int i;
	int j;
	for (i = size; i != 0; i--) {
		for (j = 0; j != i - 1; j++) {
			change(a+j, j);
		}
	}
	
	int k;
	for (k = 0; k != size; k++) {
		printf("%d \n", *(a + k));
	}
	return 0;

}