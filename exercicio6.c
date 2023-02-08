// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#define endl printf("\n")

int fibonacci(int n);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    endl;
    return 0;
}

int fibonacci(int n) {
    int x1=0,x2=1,xaux;
    if(n < 3) {
        return n;
    }
    for(int i=0;i<n;i++) {
        xaux = x2;
        x2 += x1;
        x1 = xaux;
    }

    return x1;
}