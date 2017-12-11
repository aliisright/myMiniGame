//
//  main.c
//  testOC
//
//  Created by Ali Hasan on 10/12/2017.
//  Copyright © 2017 Ali's. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int difficulte(int niveauDifficulte) {

    int minNombre = 1, maxNombre = 100;

    switch(niveauDifficulte) {
        case 1 :
            minNombre = 1, maxNombre = 100;
        break;
        case 2 :
            minNombre = 1, maxNombre = 1000;
        break;
        case 3 :
            minNombre = 1, maxNombre = 10000;
        break;
        default: minNombre = 1, maxNombre = 100;
        break;
    }

    int nombreMystere = (rand() % (maxNombre - minNombre + 1)) + minNombre;
    return nombreMystere;
}

int main(int argc, char *argv[]) {

    printf("===================================\nBienvenue au jeu Plus ou Moins!\n===================================\n");

    srand(time(NULL));
    int nombre;
    int jouerEncore = 1;

    int entreeDifficulte = 1;
    int nombreMystere;

    while(jouerEncore == 1){
        int nombreDeCoups = 0;

        printf("\nNiveaux de difficulte:\n\n1. Facile(0-100)\n2. Moyenne(0-1000)\n3. Difficile(0-10000)\n\nVeuillez choisir le niveau(1, 2 ou 3)? ");
        scanf("%d", &entreeDifficulte);
        nombreMystere = difficulte(entreeDifficulte);

        while(nombre != nombreMystere) {
                printf("\nQuel est le nombre ? ");
                scanf("%d", &nombre);
                nombreDeCoups++;
            if (nombre < nombreMystere) {
                printf("C'est plus!\n");


            } else if(nombre > nombreMystere) {
                printf("C'est moins!\n");

            } else {
                printf("Vous avez trouve le nombre mystere en %d coups! le nombre est bien %d\n\n\n", nombreDeCoups, nombre);
                printf("\nSi vous voulez jouer encore une partie, ecrivez 1: ");
                scanf("%d", &jouerEncore);
            }
        }

    }



return 0;


}
