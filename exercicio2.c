// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#include <math.h>
#define endl printf("\n")

void print_dec(int k, int n);

int main() {
    int k;
    scanf("%d",&k);
    k = ceil((float) k/2)*2;
    int n = k - 2;
    print_dec(k,n);
    endl;
    return 0;
}

void print_dec(int k, int n) {
    printf("%d ", k - n);
    if(n>2) print_dec(k,n-2);
}