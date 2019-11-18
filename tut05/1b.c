#include <stdio.h>

int main(){
		int n, i, factorial = 1;
		scanf("%d", &n);

		for (i = 1; i <= n; i = i + 1){
				factorial = factorial * i;
		}
		
		printf("n! = %d\n", factorial);

		return 0;
}
