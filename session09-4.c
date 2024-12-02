#include <stdio.h>

int main(){
	int type=0,arr[100],n,i=0,index,num,check=0;
	while(type!=6){
		i=0;
		printf("\n   MENU\n\n   1. Nhap vao mang\n   2. Hien thi mang\n   3. Them phan tu\n   4. Sua phan tu\n   5. Xoa phan tu\n   6. Thoat\n\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
			    printf("vui long nhap vao so phan tu trong mang: ");
				scanf("%d",&n);
				while(i<n){
					printf("vui long nhap gia tri co vi tri %d: ",i);
					scanf("%d",&arr[i]);
					i++;
					check=1;
				}
			    break;
			case 2:
				if(check){
					while(i<n){
						printf("%d ",arr[i]);
						i++;
					}
				}
			    break;
			case 3:
			    if(check){
			    	printf("vui long nhap vi tri muon chen: ");
					scanf("%d",&index);
					if(index<n&&index>=0){
						while(n-i>index){
							arr[n-i]=arr[n-i-1];
							i++;
						}
					}else{
						printf("vi tri khong ton tai");
						break;
					}
					printf("vui long nhap gia tri muon chen: ");
					scanf("%d",&num);
					arr[index]=num;
					n++;
				}
			    break;
			case 4:
			    if(check){
					printf("vui long nhap vi tri muon thay doi: ");
					scanf("%d",&index);
					if(index<n&&index>=0){
						printf("vui long nhap gia tri muon thay doi: ");
						scanf("%d",&num);
						arr[index]=num;
					}else{
						printf("vi tri khong ton tai");
						break;
					}
				}
				break;
			case 5:
				if(check){
					printf("vui long nhap vi tri muon xoa: ");
					scanf("%d",&index);
					i=index;
					if(index<n&&index>=0){
						while(i<n-1){
							arr[i]=arr[i+1];
							i++;
						}
					}else{
						printf("vi tri khong ton tai");
						break;
					}
					n--;
				}
				break;
		}
	}
	return 0;
}
