#include <stdio.h>
#include <stdlib.h>

void minimax (float v [], int n, float *a, float *b) {
	int j;
	*a = *b = v [0];
for (j = 1; j < n; j++)	{
	if (v[j] < *a) *a = v[j];
	if (v[j] > *b) *b = v[j];
	}
}

int main () {
  float v [] = {0, -3, -10.5, 15.5, 20, 37};
  float x, y;
	int tam =6;
	minimax (v, tam, &x, &y);
	printf("menor: %.1f e maior: %.1f\n", x, y);
	system("pause");
	return 0;
}