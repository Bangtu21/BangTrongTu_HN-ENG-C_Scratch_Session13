#include<stdio.h>
void addAllItem(int arr[], int size){
	for (int i=0; i<size; i++){
		printf("Phan tu thu arr[%d]: ", i);
		scanf("%d",&arr[i]);
	}
}

void showItem(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("Phan tu thu arr[%d] co gia tri %d\n",i, arr[i]);
	}
}

void addElement(int arr[], int size){
	int index, newElement;
	printf("Nhap vi tri ban muon them phan tu: ");
	scanf("%d", &index);
	printf("Nhap phan tu moi: ");
	scanf("%d", &newElement);
	for(int i=size;i>index; i--){
		arr[i]=arr[i-1];
	}
	size++;
	arr[index]=newElement;
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

void sua(int arr[], int size){
	int index, fixElement;
	printf("Nhap vi tri ban muon sua: ");
	scanf("%d", &index);
	printf("Nhap phan tu ban muon: ");
	scanf("%d", &fixElement);
	for(int i=0; i<size; i++){
		if(i==index){
			arr[i]=fixElement;
		}
	}
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

void deleteElement(int arr[], int size){
	int index;
	printf("Nhap vi tri ban muon xoa: ");
	scanf("%d", &index);
	if(index<0 || index>=size){
		printf("Vi tri khong hop le");
	}else{
		for(int i=index; i<size-1; i++){
			arr[i]=arr[i+1];
		}
		size--;
		for(int i=0; i<size; i++){
			printf("%d", arr[i]);
		}
	}
	printf("\n");
}

void giamDan(int arr[], int size){
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

void tangDan(int arr[], int size){
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
}

void linearSearch(int arr[], int size, int a){
	int search=0;
	for(int i=0; i<size; i++){
		if(arr[i]==a){
			printf("Phan tu %d tim thay tai %d\n",a, i );
		}
	}
	if(!search){
		printf("Phan tu %d khong ton tai trong mang\n", a);
	}
}

void binarySearch(int arr[], int size, int a){
	int trai=0, phai=size-1;
	while(trai<=phai){
		int mid=(trai+phai)/2;
		if(arr[mid]==a){
			printf("Phan tu %d tim thay tai %d", a, mid);
			return;
		}
		if(arr[mid]<a){
			trai=mid+1;
		}else{
			phai=mid-1;
		}
	}
	printf("Phan tu %d khong ton tai trong mang\n", a);
}

int main(){
	int arr[100];
	int size;
	int choose, choice, a;
	do{
		printf("1. Them so luong phan tu va nhap gia tri \n");
		printf("2. In ra cac gia tri phan tu dang quan ly \n");
		printf("3. Them mot phan tu vao vi tri chi dinh \n");
		printf("4. Sua mot phan tu o vi tri chi dinh \n");
		printf("5. Xoa mot phan tu o vi tri chi dinh \n");
		printf("6. Sap xep cac phan tu\n");
		printf("7. Tim kiem phan tu nhap vao\n");
		printf("8. Thoat\n");
		printf("\nLua chon cua ban la: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				printf("Moi ban nhap so luong phan tu: ");
				scanf("%d", &size);
				addAllItem(arr, size);
				break;
			case 2:
				showItem(arr, size);
				break;
			case 3:
				addElement(arr, size);
				break;
			case 4:
				sua(arr, size);
				break;
			case 5:
				deleteElement(arr, size);
				break;
			case 6:
				printf("1. Giam dan\n");
				printf("2. Tang dan\n");
				printf("Lua chon cua ban: ");
				scanf("%d", &choice);
				if(choice==1){
					giamDan(arr, size);
				}
				if(choice==2){
					tangDan(arr, size);
				}
				break;
			case 7:
				printf("1. Tim kiem Tuyen Tinh\n");
				printf("2. Tim kiem Nhi Phan\n");
				printf("Lua chon cua ban la: ");
				scanf("%d", &choice);
				printf("Nhap Phan tu ban muon tim: ");
				scanf("%d", &a);
				if(choice==1){
					linearSearch(arr, size, a);
				}
				if(choice==2){
					binarySearch(arr, size, a);
				}
				break;
		default:{
			
			break;
		}
	}
	}while(choose!=8);
	return 0;
}
