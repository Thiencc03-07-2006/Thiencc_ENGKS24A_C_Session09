#include <stdio.h>

int main(){
	int type=0,arr[100][100],n,i,index,num,check=0,calculate,max,min,count,m,j,sum[100];
	while(type!=8){
		i=0;
		calculate=0;
		printf("\n   MENU\n\n   1. Nhap kich co va gia tri cac phan tu cua mang\n   2. In gia tri cac phan tu cua mang theo ma tran\n   3. In gia tri cac phan tu la le va tinh tong\n   4. In ra cac phan tu nam tren duong bien va tinh tich\n   5. In ra cac phan tu nam tren duong cheo chinh\n   6. In ra cac phan tu nam tren duong cheo phu\n   7. In ra dong co tong gia tri cac phan tu la lon nhat\n   8. Thoat\n\nLua chon cua ban: ");
		scanf("%d",&type);
		switch(type){
			case 1:
			    printf("nhap so hang: ");
				scanf("%d",&n);
				printf("nhap so cot: ");
				scanf("%d",&m);
				while(i<n){
					j=0;
					while(j<m){
						printf("nhap gia tri vi tri hang %d cot %d: ",i,j);
						scanf("%d", &arr[i][j]);
						j++;
					}
					i++;
				}
				check=1;
			    break;
			case 2:
				if(check){
					printf("\nMa tran\n");
					while(i<n){
						j=0;
						while(j<m){
							printf("%d ",arr[i][j]);
							j++;
						}
						printf("\n");
						i++;
					}
				}
			    break;
			case 3:
			    if(check){
			    	printf("so le: ");
					while(i<n){
						j=0;
						while(j<m){
							if(arr[i][j]%2!=0){
								printf("%d ",arr[i][j]);
								calculate+=arr[i][j];
							}
							j++;
						}
						i++;
					}
					printf("tong so le: %d",calculate);
				}
			    break;
			case 4:
			    if(check){
			    	calculate=1;
			    	printf("\nMa tran\n");
					while(i<n){
						j=0;
						while(j<m){
							if((i==0||i==n-1)||(j==0||j==m-1)){
								printf("%d ",arr[i][j]);
								calculate*=arr[i][j];
							}else{
								printf("  ");
							}
							j++;
						}
					printf("\n");
					i++;
					}
					printf("tich duong bien: %d",calculate);
				}
				break;
			case 5:
				if(check){
					if(n==m){
						printf("\nMa tran\n");
						while(i<n){
							j=0;
							while(j<n){
								if(i==j){
									printf("%d ",arr[i][j]);
								}else{
									printf("  ");
								}
								j++;
							}
							printf("\n");
							i++;
						}
					}else{
						printf("so hang khong bang so cot");
					}
				}
				break;
			case 6:
				if(check){
					if(n==m){
						printf("\nMa tran\n");
						while(i<n){
							j=0;
							while(j<n){
								if(i==m-j-1){
									printf("%d ",arr[i][j]);
								}else{
									printf("  ");
								}
								j++;
							}
							printf("\n");
							i++;
						}
					}else{
						printf("so hang khong bang so cot");
					}
				}
			    break;
			case 7:
				if(check){
					while(i<n){
						sum[i]=0;
						i++;
					}
					i=0;
					while(i<n){
						j=0;
						while(j<m){
							sum[i]+=arr[i][j];
							j++;
						}
						i++;
					}
					max=0;
					i=0;
					while(i<n){
						if(sum[i]>sum[max]){
							max=i;
						}
						i++;
					}
					j=0;
					while(j<m){
						printf("%d ",arr[max][j]);
						j++;
					}
					printf("\ntong: %d",sum[max]);
				}
			    break;
		}
		printf("\n------------------------------------------------------------------------");
	}
	return 0;
}
