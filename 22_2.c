#include<stdio.h>
void input() {
	int n;
	do {
		printf("nhap so nguyen duong:");
		scanf("%d", &n);
	} while(n<=0);
}
 void average() {
 	int a,b;
 	double TBC;
 	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d", &b);
  	TBC=(double)(a+b)/2; 
  	printf("trung binh cong cua %d va %d la: %lf", a,b,TBC);
}
void MAX(){
	int a,b,c;
	printf("nhap a:");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d", &b);
	printf("nhap c:");
	scanf("%d", &c);
	int max =a; 
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c; 
	}
	printf("Max cua no la: %d", max);
}

int main() {
	int choose; 
	do {
		printf("\n++++++++++menu++++++++\n");
		printf("s1 input\n");
		printf("s2 average\n");
		printf("s3 MAX\n");
		scanf("%d", &choose);
	switch(choose) {
		case 1:
		input();
		break;
		case 2:
		average();
		break;
		case 3:
		MAX();
		break;
		default: printf("baiiiii may cung");
		}
	} while(choose>0 && choose <= 3);
	return 0;
}

		

 
