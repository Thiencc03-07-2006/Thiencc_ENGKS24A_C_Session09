#include <stdio.h>

int main(){
	int arr[100],n,i=0,index,num;
	printf("vui long nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	while(i<n){
		printf("vui long nhap gia tri co vi tri %d: ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	printf("vui long nhap vi tri muon thay doi: ");
	scanf("%d",&index);
	if(index<n&&index>=0){
		printf("vui long nhap gia tri muon thay doi: ");
		scanf("%d",&num);
		arr[index]=num;
	}else{
		printf("vi tri khong ton tai");
		return 0;
	}
	i=0;
	while(i<n){
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
