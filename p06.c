#include <stdio.h>

int qDig (unsigned int n) {
	int i = 1,r;
	r = 0;
	if (n == 0) return 1;
	while (n/i > 0) {
		i = i*10;
		r++;
	}
	return r;
}
