// PROBLEM  

Function Description

Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer

Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory 
so that a  contains their sum and  b  contains their absoluted difference.

// PROGRAM 

#include <stdio.h>
#include<cmath>

void update(int *a,int *b) {
    int sum=*a + *b;
    int diff=abs(*a - *b);
    
    *a=sum;
    *b=diff;
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
