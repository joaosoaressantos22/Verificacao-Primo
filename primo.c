#include "primo.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct tPrimo
{
    unsigned long int num[sizeof(unsigned long int)];
    unsigned long int test;
    unsigned long int qntPrimo;
};

tPrimo* criaPrimo(){
    tPrimo *p = (tPrimo*)malloc(sizeof(tPrimo));
    p->num[0] = 2; p->test = 3; p->qntPrimo = 1;//Primeiro primo é 0 2
    return p;
}

tPrimo* verificaPrimo(tPrimo* p){
    FILE *salPrimo = fopen("primo.txt", "w");
    char buffer[16] = {0}; 
    fputs("2\n", salPrimo);
    for (int i = 2; i < 10000000000; i++){
        //printf("%d\n", i);
        //printf("%ld\n", p->test);
        if (p->test%i == 0){
            //printf("%d\n", i);
            //printf("%ld", p->test);
            //printf("Entrei i = %i", i);
            p->test++; i = 1;
        }
        else if (i == (p->test - 1)){
            sprintf(buffer, "%ld\n", p->test);
            fputs(buffer, salPrimo);  
            p->qntPrimo++; p->test++;
            i = 1;
        }
    }
    fclose(salPrimo);
    return p;
}
void imprimePrimo(tPrimo* p){
    //for (unsigned long int i = 0; i < 190; i++) printf("primo[%ld] = %ld\n", i, p->num[i]);
}
