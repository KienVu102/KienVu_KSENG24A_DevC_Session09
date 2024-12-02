#include <stdio.h>
#include <stdlib.h>
int main(){
	int numbers[10], count, n, choice;
	do{
		printf("Menu\n");
		printf("1. Nhap vao mang\n");
		printf("2. Hien thi mang\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
			for(int i = 0; i < 10; i++){
				printf("Nhap cac phan tu numbers[%d]: ", i);
				scanf("%d", &numbers[i]);
			}
			break;
		case 2:
			for(int i = 0; i < 10; i++){
				printf("Phan tu numbers[%d] la: %d\n", i, numbers[i]);
			}
			break;
		case 3:
			printf("Nhap vi tri muon chen phan tu: ");
			scanf("%d", &n);
			for(int i = 10; i >=n; i++){
				numbers[i] = numbers[i-1];
			}
			printf("Nhap phan tu: ");
			scanf("%d", &numbers[n]);
			break;
		case 4:
			printf("Nhap vi tri muon sua: ");
			scanf("%d", &n);
			if(n < 0 || n > 10){
				printf("Vi tri sua khong hop le ");
			}
			printf("Nhap phan tu: ");
			scanf("%d", &numbers[n]);
			break;
		case 5:
			printf("Nhap vi tri muon xoa phan tu: ");
			scanf("%d", &n);
			if(n < 0 || n > 10){
				printf("Vi tri xoa khong hop le ");
			}
			for(int i = n; i < 10; i++){
				numbers[i] = numbers[i+1];
			}
			break;
		case 6:
			exit(0);
			break;
		}
	}
	while(choice!=6);
	
}
