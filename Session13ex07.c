#include<stdio.h>
int nhapMaTran(int row, int col, int arr[row][col]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("Nhap phan tu tai hang %d va cot %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
}
void inMaTran(int row, int col, int arr[row][col]){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("[%d]", arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int row, col;
	printf("Nhap so hang: ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &col);
	int arr[row][col];
	nhapMaTran(row, col, arr);
	inMaTran(row, col, arr);
	
	return 0;
}
