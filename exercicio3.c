// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("./numeros.txt","r");
    int *ptr = (int *) malloc(1*sizeof(int));
    int i = 1;
    while(!feof(fptr)) {
        ptr = realloc(ptr,i);
        fscanf(fptr,"%d",&ptr[i-1]);
        i++;
    }

    int soma = 0;
    int prod = 1;

    for(int j=0;j<i-1;j++) {
        if(ptr[j]%2==0) {
            prod *= ptr[j];
        } else {
            soma += ptr[j];
        }
    }

    fclose(fptr);
    
    printf("PROD: %d\nSOMA: %d\n",prod,soma);
    return 0;
}