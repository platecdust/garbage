//繰り返し処理を使わずに3つの整数を昇順に並び替えようとした糞プログラム

#include <stdio.h>

void main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (b < c) {
		if (a < b) {
			printf("%d %d %d", a, b, c);
		} else {
			if (a < c) {
				printf("%d %d %d", b, a, c);
			} else {
				printf("%d %d %d", b, c, a);
			}
		}
	} else {
		if (a < c) {
			printf("%d %d %d", a, c, b);
		} else {
			if (a < b) {
				printf("%d %d %d", c, a, b);
			} else {
				printf("%d %d %d", c, b, a);
			}
		}
	}
}
