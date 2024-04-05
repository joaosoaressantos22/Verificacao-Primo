#include "primo.h"

int main(){
    tPrimo* primo;
    primo = criaPrimo();
    primo = verificaPrimo(primo);
    imprimePrimo(primo);
}