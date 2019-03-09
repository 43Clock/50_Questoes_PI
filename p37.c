#include <stdio.h>

int minInd (int v[], int n) {
	int i, r = v[0], p = 0;
	for (i = 0;i<n;i++) {
		if (v[i]<r) {
			r = v[i];
			p = i;
		}
	}
	return p;
}