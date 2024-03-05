#ifndef AREAOFTRIANGLE_H_
#define AREAOFTRIANGLE_H_

int AreaOfTriangle(int h, int b)
{
    int area;
    int height = h;
    int base = b;
    
    printf("Height: %d\n", height);
    printf("Base: %d\n", base);
    
    area = (height * base) / 2;

    return area;
}

#endif // AREAOFTRIANGLE_H_