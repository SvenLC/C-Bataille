#include <stdio.h>
#include <stdlib.h>
#include "Traitement.h"



//M�thode du d�roulement d'une partie
void JeuBataille()

{
	Carte paquetCarte[52];
	Carte carteJoueur1[52];
	Carte carteJoueur2[52];


	
	CreationJeuDeCarte(paquetCarte);
	DistributionDesCartes(paquetCarte, carteJoueur1, carteJoueur2);
	

}