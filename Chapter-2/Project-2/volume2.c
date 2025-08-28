
#include<stdio.h>
int main () {
    float radius, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f" , &radius);
    volume = (4.0f/3.0f) * 3.14159f * radius * radius * radius;
    printf("The volume of a sphere with radius %.2f meters is %.2f cubic meters.\n", radius, volume);
    return 0;
}

