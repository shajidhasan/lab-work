#include <math.h>
#include <stdio.h>

#define g 9.81

int main() {
    float velocity, time, angle, dx, dy;

    printf("Enter velocity: ");
    scanf("%f", &velocity);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter angle(degrees): ");
    scanf("%f", &angle);

    angle = angle * M_PI / 180.0;

    dx = velocity * cos(angle) * time;
    dy = velocity * sin(angle) * time - 0.5 * g * time * time;

    printf("Distanced travelled horizontally: %.3f\n", dx);
    printf("Distanced travelled vertically: %.3f\n", dy);

    return 0;
}
