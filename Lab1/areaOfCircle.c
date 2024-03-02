#include "areaOfCircle.h"

float AreaOfCircle(int r) {
    float area;
    float pi = 3.14159f;
    printf("Radius: %d\n", r);
    area = r * r * pi;
    return area;
}
