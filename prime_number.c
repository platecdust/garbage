#include <stdio.h>
#include <math.h>

void main() {
	int a, i, d;
	scanf("%d", &a);
<<<<<<< HEAD
	if(a%2 == 0) {
		printf("%d は偶数\n", a);
	} else {
		d = 0;
		for(i = 3; i <= sqrt(2); i++) {
			if(a % i == 0) {
				d = i;
			}
		}
		if(d == 0) {
=======
	if (a % 2 == 0) {
		printf("%d は偶数\n", a);
	} else {
		d = 0;
		for (i = 3; i <= sqrt(a); i ++) {
			if (a % i == 0) {
				d = i;
			}
		}
		if (d == 0) {
>>>>>>> 2018.11.22
			printf("%d は素数である\n", a);
		} else {
			printf("%d は %d で割り切れる\n", a, d);
		}
<<<<<<< HEAD
	} 
=======
	}
>>>>>>> 2018.11.22
}
