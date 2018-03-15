#include "Traitement.h"



void InitialisationPartie() 
{
	//On crée un tableau qui contiendra les 54 cartes de base du jeu
	//On crée un tableau pour le joueur 1 et le joueur 2 qui pourra contenir toutes les cartes du jeu
	int JeuCartes[53] = { 0 };
	int JeuCartesJoueur1[53] = { 0 };
	int JeuCartesJoueur2[53] = { 0 };


	//On réparti les 54 cartes aléatoirement dans le tas
	TirageDesCartes(JeuCartes);



}

void TirageDesCartes(int JeuCartes[]) 
{
	//On tire les 54 cartes aléatoirement

}

void DistributionDesCartes(int JeuCartesJoueur1[], int JeuCartesJoueurs2[])
{
	//On réparati les 54 cartes dans le jeu des joueurs 1 et 2
}


