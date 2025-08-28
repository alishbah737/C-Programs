
#include <stdio.h>
int main () {
    float radius = 10.0;
    float volume;
    //use 4.0f/3.0f instead of 4/3  to avoid integar division
    volume = (4.0f/3.0f) * 3.14159f * radius * radius * radius;
    printf("The volume of  a sphere with radius %.2f meters is %.2f cubic meters.\n", radius,volume);
    return 0;
}