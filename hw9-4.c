#include <stdio.h>

int main() {
	int r, g, b;
	scanf("%d", &r);
	scanf("%d", &g);
	scanf("%d", &b);

	printf("#%02X%02X%02X\n", r, g, b);

	return 0;
}
