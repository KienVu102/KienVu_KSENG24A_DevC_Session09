#include <stdio.h>

int main(){
	int arr[5]={1,2,7,4,5};
	int n;
	for( int i = 0; i<5; i++){
		printf("%d ", arr[i]);
	}
	printf("\nHay nhap vi tri muon chen: ");
	scanf("%d", &n);
	printf("Hay nhap so muon sua: ");
	scanf("%d", &arr[n]);
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	return 0;

}
