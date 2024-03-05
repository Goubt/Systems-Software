#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "areaOfRectangle.h"
#include "areaOfCircle.h"
#include "areaOfTriangle.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: ./myprog Shape dimensions...\n");
        return 1;
    }

    if (strcmp(argv[1], "Rectangle") == 0 && argc == 4) {
        int side1 = atoi(argv[2]);
        int side2 = atoi(argv[3]);
        printf("The area of the rectangle is: %d\n", AreaOfRectangle(side1, side2));
    } else if (strcmp(argv[1], "Circle") == 0 && argc == 3) {
        int radius = atoi(argv[2]);
        printf("The area of the circle is: %f\n", AreaOfCircle(radius));
    } else if (strcmp(argv[1], "Triangle") == 0 && argc == 4) {
        int base = atoi(argv[2]);
        int height = atoi(argv[3]);
        printf("The area of the triangle is: %f\n", AreaOfTriangle(height, base));
    } else {
        printf("Invalid shape or number of arguments.\n");
    }

    return 0;
}
