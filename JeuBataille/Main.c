#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Affichage.h"
#include "Traitement.h"
#include "JeuBataille.h"

int main()
{
	//Initialisation de la fonction srand, pour la générateur de nombre pseudo-aléatoire
	srand((unsigned)time(NULL));


	//Lancement d'un partie
	

	JeuBataille();
	system("pause");

	return 0;
}