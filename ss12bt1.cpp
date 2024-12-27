#include<stdio.h>
int tinhtong(int a,int b){
	return a+b;
	
}
int main(){
	int x,y;
	printf("nhap vao so x: ");
	scanf("%d",&x);
	printf("nhap vao so y: ");
	scanf("%d",&y);
	int result=tinhtong(x,y);
	printf("tong cua %d va %d la: %d\n",x,y,result);
	return 0;
}
