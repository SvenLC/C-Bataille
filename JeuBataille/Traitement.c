#include "Traitement.h"



void InitialisationPartie() 
{
	//On cr�e un tableau qui contiendra les 54 cartes de base du jeu
	//On cr�e un tableau pour le joueur 1 et le joueur 2 qui pourra contenir toutes les cartes du jeu
	int JeuCartes[53] = { 0 };
	int JeuCartesJoueur1[53] = { 0 };
	int JeuCartesJoueur2[53] = { 0 };


	//On r�parti les 54 cartes al�atoirement dans le tas
	TirageDesCartes(JeuCartes);



}

void TirageDesCartes(int JeuCartes[]) 
{
	//On tire les 54 cartes al�atoirement

}

void DistributionDesCartes(int JeuCartesJoueur1[], int JeuCartesJoueurs2[])
{
	//On r�parati les 54 cartes dans le jeu des joueurs 1 et 2
}


