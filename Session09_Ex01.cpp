#include <stdio.h>

int main(){
	int arr[100];
	int n;
	printf("Nhap so cac gia tri: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap so luong phan tu ban muon: ");
	    scanf("%d", &arr[i]);
	}
	
	int index;
	printf("Moi ban nhap vi tri ban muon chen: ");
	scanf("%d", &index);
	for(int i=n; i>index; i--){
		arr[i]=arr[i-1];
	}
	arr[index]=3;
    for(int i=0; i<n+1; i++){
    	printf("%d \n", arr[i]);
	}

	return 0;
}
