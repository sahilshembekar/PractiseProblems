//  https://www.hackerrank.com/challenges/c-tutorial-pointer/problem


#include <stdio.h>
#include <math.h>
void update(int *val1,int *val2) {
    // Complete this function    
    int temp {*val1};
    *val1 = *val1 + *val2;
    *val2 = abs(temp - *val2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}