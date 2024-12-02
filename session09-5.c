#include <stdio.h>

int main(){
	int type=0,arr[100],n,i,index,num,check=0,sum,max,min,count,j;
	while(type!=8){
		i=0;
		sum=0;
		printf("\n   MENU\n\n   1. Nhap so phan tu can nhap va gia tri cac phan tu\n   2. In ra gia tri cac phan tu dang quan ly\n   3. In ra gia tri cac phan tu chan va tinh tong\n   4. In ra gia tri lon nhat va nho nhat trong mang\n   5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n   6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n   7. Them mot phan tu vao vi tri chi dinh\n   8. Thoat\n\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
			    printf("vui long nhap vao so phan tu trong mang: ");
				scanf("%d",&n);
				while(i<n){
					printf("vui long nhap gia tri co vi tri %d: ",i);
					scanf("%d",&arr[i]);
					i++;
				}
				check=1;
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
			    	printf("so chan: ");
					while(i<n){
						if(arr[i]%2==0){
							printf("%d ",arr[i]);
							sum+=arr[i];
						}
						i++;
					}
					printf("\ntong so chan: %d",sum);
				}
			    break;
			case 4:
			    if(check){
			    	max=arr[0];
					min=arr[0];
					while(i<n){
						if(max<arr[i]){
							max=arr[i];
						}
						if(min>arr[i]){
							min=arr[i];
						}
						i++;
					}
					printf("so lon nhat %d,so nho nhat %d",max,min);
				}
				break;
			case 5:
				if(check){
					printf("so nguyen to: ");
					while(i<n){
						count=0;
						if(arr[i]>1){
							j=2;
							while(j<=arr[i]){
								if(arr[i]%j==0){
									count++;
								}
								j++;
								if(count>1){
									break;
								}
							}
						}
						if(count==1){
							printf("%d ",arr[i]);
							sum+=arr[i];
						}
						i++;
					}
					printf("\ntong so nguyen to: %d",sum);
				}
				printf("\ntong so nguyen to: %d",sum);
				break;
			case 6:
				if(check){
					printf("vui long nhap vao so muon kiem tra: ");
					scanf("%d",&num);
					count=0;
					while(i<n){
						if(arr[i]==num){
							count++;
						}
						i++;
					}
					printf("co %d so %d",count,num);
				}
			    break;
			case 7:
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
		}
		printf("\n----------------------------------------------------------------");
	}
	return 0;
}
