
#include <stdio.h>

int main(){
		int i,j;
		int array[5001];
		for(i=0; i<=5000; i=i+1){
				array[i] = 1;
		}
		for(i=2; i<=5000; i=i+1){
				if (array[i] == 1){
						printf(" %d", i);
						for(j=2; i*j <= 5000; j=j+1) {
								array[i*j] = 0;
						}
				}
		}
		return 0;
}
