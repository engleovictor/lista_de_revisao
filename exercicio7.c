// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#include <stdlib.h>
#define endl printf("\n")

void sort_list(int *ptr, int n);

int main() {
    int n;
    printf("Escolha um valor de n: ");
    scanf("%d",&n);
    int *ptr = (int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d", &ptr[i]);
    }
    sort_list(ptr,n);
    for(int i=0;i<n;i++) {
        printf("%d ", ptr[i]);
    }
    endl;
    return 0;
}

void sort_list(int *ptr, int n) {
    int aux;
    for(int i=n-1;i>0;i--) {
        for(int j=0;j<i;j++) {
            if(ptr[j] > ptr[j+1]) {
                aux = ptr[j+1];
                ptr[j+1] = ptr[j];
                ptr[j] = aux;
            }
        }
    }
}