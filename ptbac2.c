#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,delta,x1,x2,x;
    printf("Nhap vao cac he so phuong trinh bac hai (a,b,c): ");
    scanf("%f%f%f", &a,&b,&c);
    if (a == 0 ) {
        if (b == 0 && c == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        }
        else if (b == 0 && c != 0) {
            printf("Phuong trinh vo nghiem\n");
        }
        else {
            x=-c/b;
            printf("Nghiem cua phuong trinh = %f\n",x);
        }
    }
    else {
        delta = b*b -a*c*4;
        if (delta <0) {
            printf("Pt vo nghiem\n");
        }
        else if (delta == 0) {
            x1 =-b/(2*a);
            printf("Phuong trinh co nghiem kep x = %f\n",x1);
        }
        else {
            x1 = (-b+ sqrt(delta))/2*a;
            x1 = (-b- sqrt(delta))/2*a;
            printf("Phuong trinh co 2 nghiem x1,x2 lan luot la %f %f\n",x1,x2);
        }
    }
    return 0;
}