#include <stdio.h>
#include <stdlib.h>
#include "Traitement.h"
#include "Affichage.h"



//Méthode du déroulement d'une partie
void JeuBataille()

{
	Carte paquetCarte[52];
	Carte carteJoueur1[52];
	Carte carteJoueur2[52];
	Carte tas[52];
	


	Menu();
	affichageJeu(carteJoueur1, carteJoueur2);
	
	//DistributionDesCartes(paquetCarte, carteJoueur1, carteJoueur2);
	//while (DeroulementTour(carteJoueur1, carteJoueur2) == 0 );
	system("pause");
	

}