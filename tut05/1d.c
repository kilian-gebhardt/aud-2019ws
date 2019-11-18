#include <stdio.h>

int main(){
		int i,j, flag;
		for(i=2; i<=5000; i=i+1){
				flag = 1; // flag == 1 iff i is prime
				for(j=2; j<i; j=j+1){
						if (i % j == 0) {
								// i not prime
								flag = 0;
								break;
						}
				}
				if (flag == 1){
						printf(" %d", i);
				}
		}
		return 0;
}
