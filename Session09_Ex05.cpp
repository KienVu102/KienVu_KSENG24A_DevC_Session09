#include <stdio.h>
#include <stdlib.h>

int main(){
	int choice, min, max, count, sum, n, a = 100, numbers[a], j;
	do{
		printf("\nMenu \n");
		printf("1. Nhap so phan tu va cac phan tu\n");
		printf("2. In ra cac phan tu\n");
		printf("3. In ra cac phan tu chan va le\n");
		printf("4. In ra gia tri lon nhat va nho nhat\n");
		printf("5. Kiem tra xem phan tu xuat hien bao nhieu lan\n");
		printf("6. Them mot phan tu vao vi tri co dinh\n");
		printf("7. In ra phan tu so nguyen so va tinh tong\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so phan tu cua mang: ");
				scanf("%d", &n);
				a = n;
				for(int i = 0; i < n; i++){
					printf("Nhap phan tu numbers[%d]: ", i);
					scanf("%d", &numbers[i]);
				}
				break;
			case 2:
				for(int i = 0; i < n; i++){
					printf("Phan tu numbers[%d] la: %d\n", i, numbers[i]);
				}
				break;
			case 3:
				for(int i = 0; i < n; i++){
					if(numbers[i] % 2 == 0){
						printf("So chan trong mang la: %d\n", numbers[i]);
					}
					else{
						printf("So le trong mang la: %d\n", numbers[i]);
					}
				}
				break;
			case 4:
				max = numbers[0], min = numbers[0];
				for(int i = 0; i <n; i++){
					if(max < numbers[i]){
						max = numbers[i];
					}
					if(min > numbers[i]){
						min = numbers[i];
					}
				}
				printf("So lon nhat va nho nhat trong mang la: %d va %d", max, min);
				break;
			case 5:
				printf("Nhap phan tu muon kiem tra: ");
				scanf("%d", &j);
				for(int i = 0; i < n; i++){
					if( j == numbers[i]){
						count++;
					}
				}
				printf("Phan tu %d xuat hien %d lan", j, count+1);
				break;
			case 6:
				printf("Nhap vi tri muon them phan tu: ");
				scanf("%d", &j);
				for( int i = n; i >= j; i--){
					numbers[i] = numbers[i-1];
				}
				printf("Nhap phan tu muon them: ");
				scanf("%d", &numbers[j]);
				break;
			case 7:
				for(int i = 0; i < n; i++){
					count = 0;
					for (int k = 1 ; k <= numbers[i]; k++){
						if(numbers[i] % k ==0){
							count++;
						}
					}
					if(count == 2){
						printf("%d\n", numbers[i]);
						sum += numbers[i];
					}
				}
				printf("Tong cac so nguyen to la: %d", sum);
				break;
			case 8:
				exit(0);
		}
	}
	while(choice != 8); 
	return 0;
}

