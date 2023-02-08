// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#include <math.h>
#define endl printf("\n")

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<ceil((float) n/2);i++) {
        printf("%d ", 2*i);
    }
    endl;
    return 0;
}