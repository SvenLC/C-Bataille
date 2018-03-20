#include <stdio.h>
#include <stdlib.h>
#include "Traitement.h"



//Méthode du déroulement d'une partie
void JeuBataille()

{
	Carte paquetCarte[52];
	Carte carteJoueur1[52];
	Carte carteJoueur2[52];


	InitialisationPartie();
	CreationJeuDeCarte(paquetCarte);
	TirageDesCartes(paquetCarte, carteJoueur1, carteJoueur2);
	DistributionDesCartes(paquetCarte, carteJoueur1, carteJoueur2);
	

}