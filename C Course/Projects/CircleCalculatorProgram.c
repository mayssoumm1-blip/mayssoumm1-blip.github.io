# include <stdio.h>
# include <math.h>
//  project 1: calcul d'aire, surface et volume

int main()
{   
    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double Pi = 3.14159;

    printf("Enter the radius in meters: ");
    scanf("%lf", &radius);

    area = Pi * pow(radius, 2);
    printf("Area: %.2lf m²\n", area);

    surfacearea = 4 * Pi * pow(radius, 2);
    printf("SurfaceArea: %.2lf m²\n", surfacearea);

    volume = 4/3 * Pi * pow(radius, 3);
    printf("Volume: %.2lf m²\n", volume);

    return 0;
}