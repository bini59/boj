#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
	int size;

	scanf("%d", &size);
	size += 2;
	int* count = malloc(sizeof(int) * (size+4));

	count[0] = 1;
	count[1] = 1;
	count[2] = 1;
	count[3] = 1;
	
	int x = 0;
	if (size == 3) {
		printf("%d", 0);
		x = 1;
	}

	for (int i = 4; i < size; i++)
	{
		int compare[3] = { 100, 100, 100 };
		if (i % 2 == 0) {
			compare[0] = count[i / 2] + 1;

		}
		if (i % 3 == 0) {
			compare[1] = count[i / 3] + 1;
		}
		compare[2] = count[i - 1] + 1;

		if (compare[0] <= compare[1]) {
			if (compare[0] <= compare[2]) {
				count[i] = compare[0];
			}
		}
		if (compare[1] <= compare[0]) {
			if (compare[1] <= compare[2]) {
				count[i] = compare[1];
			}
		}
		if (compare[2] <= compare[1]) {
			if (compare[2] <= compare[0]) {
				count[i] = compare[2];
			}
		}


		if (i == size - 2) {
			printf("%d", count[i]);
			x = 1;
			break;
		}
	}


	free(count);

	if (x == 0) {
		printf("%d", 1);
	}

	return 0;
}