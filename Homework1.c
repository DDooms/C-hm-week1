#include <stdio.h>
#include <math.h>

//Ex. 1
double BMI(double mass, double heigth){
    return mass/(heigth*heigth);
}

double BMIimproved(double mass, double heigth){
    return 1.3*(mass/(pow(heigth, 2.5)));
}

//Ex.2
double cylinderVol(double radius, double heigth){
    double area = (1/cosh((radius-heigth)/radius)*pow(radius, 2) - (radius-heigth)*sqrt(2*radius*heigth - pow(heigth, 2)));
    return area*heigth;
}

double cylinderVol2(double radius, double length, double heigth){
    double area = (1/cosh((radius-heigth)/radius)*pow(radius, 2) - (radius-heigth)*sqrt(2*radius*heigth - pow(heigth, 2)));
    return area*length;
}

int main(){
    double r, h, l;
    scanf("%lf %lf %lf", &r, &h, &l);
    printf("Body mass index is: %f\n", BMI(78, 1.8));
    printf("Improved body mass index is: %f\n", BMIimproved(78, 1.8));
    printf("Volume of a cylinder: %lf\n", cylinderVol(r, h));
    printf("Volume of a horizontal cylinder: %lf\n", cylinderVol2(r, l, h));
}