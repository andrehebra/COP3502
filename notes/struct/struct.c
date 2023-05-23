#include <stdio.h>

struct point {
    int x, y;
};

struct point get() {
    struct point p;
    scanf("%d %d", &p.x, &p.y);
    return p;
};

int main() {

    struct point p1, p2;
    p1 = get();
    p2 = get();
    
    printf("%d %d %d %d", p1.x, p1.y, p2.x, p2.y);

    return 0;
}