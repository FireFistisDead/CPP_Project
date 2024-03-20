#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    int c;
    *a = *a + *b;
    c = abs(*a - *b);
    *b = abs(*b - c);
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}