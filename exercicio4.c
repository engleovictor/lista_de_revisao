// gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0
// Pop!_OS 22.04 LTS x86_64 (LINUX)

#include <stdio.h>
#include <stdlib.h>

float return_media(float *ptr,int n);

int main() {
    FILE *fptr = fopen("notas.txt","r");
    float *ptr_m = (float *) malloc(1*sizeof(float));
    float *ptr_f = (float *) malloc(1*sizeof(float));

    char sex;
    float nota;

    int i_m = 0, i_f = 0;

    while(!feof(fptr)) {
        fscanf(fptr,"%c %f", &sex, &nota);
        if(sex == 'M') {
            i_m++;
            ptr_m = realloc(ptr_m,i_m);
            ptr_m[i_m-1] = nota;
        }

        if(sex == 'F') {
            i_f++;
            ptr_f = realloc(ptr_f,i_f);
            ptr_f[i_f-1] = nota;
        }
    }

    float m_media = return_media(ptr_m,i_m), f_media = return_media(ptr_f,i_f);

    if(m_media > f_media) printf("M %.1f\n",m_media); 
    else if (m_media == f_media) printf("M/F %.1f\n",m_media);
    else printf("F %.1f\n", f_media);
    return 0;
}

float return_media(float *ptr,int n) {
    float soma = 0;
    for(int i=0;i<n;i++) {
        soma += ptr[i];
    }
    return soma/n;
}
