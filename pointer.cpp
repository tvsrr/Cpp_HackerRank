/*
Function Description

Complete the update function.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. 
Modify the values in memory so that  contains their sum and  contains their absoluted difference.

Input Format

Input will contain two integers,  and , separated by a newline.
    
*/

#include <stdio.h>
#include <cmath>

using namespace std; 

void update(int *a,int *b) {
    // Complete this function    
    int temp;
    temp = *a; 
    *a = *a + *b; 
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
