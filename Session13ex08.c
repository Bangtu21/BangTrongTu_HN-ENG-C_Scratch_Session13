#include<stdio.h>
int uocChungLonNhat(int a, int b){
	while(b!=0){
		int temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}
int main(){
	int number1, number2;
	printf("Hay nhap so nguyen thu nhat: ");
	scanf("%d", &number1);
	printf("Hay nhap so nguyen thu hai: ");
	scanf("%d", &number2);
	int result=uocChungLonNhat(number1, number2);
	printf("Uoc chung lon nhat cua %d va %d la %d", number1, number2, result);
	
	return 0;
	
}
