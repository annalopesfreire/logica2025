#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main() {
    double a, b, c;
    
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        // Semiperímetro
        double p = (a + b + c) / 2.0;
        
        // Área do triângulo (Heron)
        double area_triangle = sqrt(p * (p - a) * (p - b) * (p - c));
        
        // Raio do círculo inscrito
        double r_in = area_triangle / p;
        
        // Raio do círculo circunscrito
        double r_out = (a * b * c) / (4.0 * area_triangle);
        
        // Área das rosas (círculo inscrito)
        double area_roses = PI * r_in * r_in;
        
        // Área dos girassóis (entre o círculo circunscrito e o triângulo)
        double area_sunflowers = PI * r_out * r_out - area_triangle;
        
        // Área das violetas (parte entre o triângulo e o círculo inscrito)
        double area_violets = area_triangle - area_roses;
        
        printf("%.4lf %.4lf %.4lf\n", area_sunflowers, area_violets, area_roses);
    }
    
    return 0;
}
