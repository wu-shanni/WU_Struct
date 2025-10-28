#include <stdio.h>
#include <stdlib.h>

struct Cocktail {       //nel struct non ci sono metodi
    char *name;         //puntatore a una stringa
    float prezzo;
    short alcol;        //short -> intero corto
} Cocktail;         //ripetuto alla fine vuol dire che non devi er forza scrivere struct Cocktail

void stampa(struct Cocktail c) {
    printf("Nome: %s \nPrezzo: %.2f euro \nAlcol: %d \n", c.name, c.prezzo, c.alcol);
}

int main(void) {
    struct Cocktail mojito;         //variabile mojito
    mojito.name = "Mojito";         //assegno il nome
    mojito.prezzo = 3.50f;          //prezzo in float
    mojito.alcol = 10;

    stampa(mojito);

    return 0;
}
