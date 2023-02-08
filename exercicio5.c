// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#define endl printf("\n")

int fibonacci_rec(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",fibonacci_rec(n));
    endl;
    return 0;
}

int fibonacci_rec(int n) {
    if(n<3) return 1;
    else return fibonacci_rec(n-2) + fibonacci_rec(n-1);
}