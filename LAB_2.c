#include<stdio.h>
#include<math.h>

void giaiPTBac2() {
	float a,b,c;
	float delta = b*b-4*a*c;
	float x1,x2;
	printf("Nhap he so bac 2, a = ");
    scanf("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf("%f", &c);
    if(a == 0) {
    	if(b == 0) {
    		printf("Phuong trinh vo nghiem : ");
    	}
		else {
			printf("Phuong trinh co mot nghiem x: %f", (-c/b));
		}
}   
	if(delta > 0) {
		x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
		printf("Phuong trinh co nghiem: x1 = %f va x2 = %f", x1,x2);
	}
	 else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }

}

void money(){
	float tien_gui, lai;
	int so_thang;
	printf("So tien gui vao la :");
	scanf("%f", &tien_gui);
	printf("Tien lai nhan duoc:\n");
	scanf("%f", &lai);
	printf("So thang gui tien:");
	scanf("%d", &so_thang);
	printf("So tien nhan duoc: %f", tien_gui + (tien_gui* lai *so_thang));	
}
	
	
	int main(){
	int choose;
	do{ 
	printf("\n++++++++++menu--------\n");
	printf("s1. giaiPTBac2\n "); 
	printf("s2. money\n ");
	scanf("%d", &choose);
	switch(choose) {
			case 1:
			giaiPTBac2();
			break;
			
	    case 2:
		     money(); 
			break;
		default:
		    printf("nhap s1-s2\n");
	    }	
   } while (choose !=0);
   return 0;
}
	
