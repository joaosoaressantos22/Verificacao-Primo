#ifndef _PRIMO_H_
#define _PRIMO_H_

typedef struct tPrimo tPrimo;

/**
 * Função que cria um numero primo.
 */
tPrimo* criaPrimo();

tPrimo* verificaPrimo(tPrimo* p);

void imprimePrimo(tPrimo* p);

#endif