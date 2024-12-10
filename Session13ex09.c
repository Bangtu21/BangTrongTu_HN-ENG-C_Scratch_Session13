#include<stdio.h>
void nhapMang(int n, int m, int arr[n][m]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("Ban hay nhap phan tu o cot %d va hang %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
}
void inMang(int n, int m, int arr[n][m]){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("[%d]", arr[i][j]);	
		}
		printf("\n");
	}
}
void goc(int n, int m, int arr[n][m]){
	printf("Cac phan tu o goc la:\n");
	printf("[%d]", arr[0][0]);
	printf("[%d]", arr[n-1][0]);
	printf("[%d]", arr[0][m-1]);
	printf("[%d]", arr[n-1][m-1]);
}
void bien(int n, int m, int arr[n][m]){
	for(int i=0; i<m; i++){
		printf("[%d]", arr[0][i]);
	}
	for(int i=1; i<n; i++){
		printf("[%d]", arr[i][m-1]);
	}
	for(int i=1; i>=0; i--){
		printf("[%d]", arr[n-1][i]);
	}
	for(int i=1; i<m-1; i++){
		printf("[%d]", arr[i][0]);
	}
}
void cheoChinhCheoPhu(int n, int m, int arr[n][m]){
	printf("Duong cheo chinh:\n");
	for(int i=0; i<n; i++){
		printf("[%d]", arr[i][i]);
	}
	printf("\n");
	printf("Duong cheo phu:\n");
	for(int i=0; i<n; i++){
		printf("[%d]", arr[i][n-1-i]);
		}
}
void soNguyenTo(int n, int m, int arr[n][m]){
   	for(int i=0; i<n; i++){
   		for(int j=0; j<m; j++){
   			int nguyenTo=1;
   			if(arr[i][j]<=1){
   				nguyenTo=0;
			}else{
			   	for(int f=2; f*f<=arr[i][j]; f++){
			   		if(arr[i][j]%f==0){
			   			nguyenTo=0;
			   			break;
					}
				}
			}
			if(nguyenTo){
				printf("So nguyen to trong mang la [%d]\n", arr[i][j]);
			}
		}
	}
}
int main(){
	int n, m;
	printf("Hay nhap so hang: ");
	scanf("%d", &n);
	printf("Hay nhap so cot: ");
	scanf("%d", &m);
	int choice;
	int arr[n][m];
	do{
		printf("\nMenu\n");
		printf("1. Nhap gia tri cac phan tu vao mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. In ra cac phan tu o goc trong ma tran\n");
		printf("4. Ia ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu cua ma tran\n");
		printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		printf("\nLua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				nhapMang(n, m, arr);
				break;
				
			case 2: 
				inMang(n, m, arr);
				break;
				
			case 3:
				goc(n, m, arr);
				break;
				
			case 4:
				bien(n, m, arr);
				break;
				
			case 5: 
				cheoChinhCheoPhu(n, m, arr);
				break;
				
			case 6:
				soNguyenTo(n, m, arr);
				break;
				
			default:{
				break;
			}
		}
	}while(choice!=7);
	return 0;
}
