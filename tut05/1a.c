#include <stdio.h>

int main() {
		int x, y, m;
		scanf("%d", &x);
		scanf("%d", &y);
		if ( x < y ) {
				m = y;	
		} else { // x >= y
				m = x;
		}
		printf("Das Maximum von %d und %d ist %d.\n", x, y, m);
		return 0;
}
