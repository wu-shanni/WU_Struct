#include <stdio.h>
#include <stdlib.h>

struct Cocktail {       //nel struct non ci sono metodi
    char *name;
    float prezzo;
    short alcol;
};



int main(void) {
    struct Cocktail mojito;
    mojito.name = "Mojito";
    mojito.prezzo = 3.50f;
    mojito.alcol = 10;

    stampa(mojito);

    return 0;
}
