#include <stdio.h>

int main(){
	int numbers[5] = {1,2,4,5,6}, n;
	for ( int i=0; i<5; i++){
		printf("%d ", numbers[i]);
	}
	printf("\nNhap vi tri muon xoa: ");
	scanf("%d", &n);
	for(int i = n; i < 5; i++){
		numbers[i] = numbers[i+1];
	}
	for(int i = 0; i < 5; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
