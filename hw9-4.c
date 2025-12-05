#include <stdio.h>

int main() {
	int r, g, b;
	printf("Enter RGB values (0-255): ");
	scanf("%d %d %d", &r, &g, &b);

	printf("#%02X%02X%02X\n", r, g, b);

	return 0;
}
