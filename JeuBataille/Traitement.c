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

void FinPartie()
{
	//On test si un joueur � son tas vide une fois que son paquet de carte est vide
}

void TirageDesCartes(int JeuCartes[]) 
{
	//On tire les 54 cartes al�atoirement

}

void DistributionDesCartes(int JeuCartesJoueur1[], int JeuCartesJoueurs2[])
{
	//On r�parati les 54 cartes dans le jeu des joueurs 1 et 2
}

void DeroulementTour()
{
	//On prend la derni�re carte du jeu des joueurs et on les compare
	
	//TODO Comparer la derni�re carte de la liste

	//Si les cartes n'ont pas la m�me valeur, le joueur qui a la plus grande valeur remporte le pli
	//On met les cartes du pli dans le tas du joueur qui � remport� le pli

	//Si les cartes ont la m�me valeur
	//On prend la derni�re carte du jeu des joueurs et on la met face cach� dans le pli
	//On prend la derni�re carte du jeu des joueur et on la compare
	//On boucle jusqu'a ce qu'un joueur remporte le pli

}

void RecuperationDuTas()
{
	//Lorsque le jeu d'un joueur est vide on prend le tas et on le met dans le jeu du joueur
}




