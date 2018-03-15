#include "Traitement.h"
#include <stdio.h>



void InitialisationPartie() 
{
	//On crée un tableau qui contiendra les 54 cartes de base du jeu
	//On crée un tableau pour le joueur 1 et le joueur 2 qui pourra contenir toutes les cartes du jeu
	int jeuCartes[53] = { 0 };
	int jeuCartesJoueur1[53] = { 0 };
	int jeuCartesJoueur2[53] = { 0 };


	//On réparti les 54 cartes aléatoirement dans le tas
	TirageDesCartes(jeuCartes);



}

void CreationJeuDeCarte()
{
	char * nomValeur[] =
	{
		
		"Deux",
		"Trois",
		"Quatre",
		"Cinq",
		"Six",
		"Sept",
		"Huit",
		"Neuf",
		"Dix",
		"Valet",
		"Dame",
		"Roi",
		"As"

	};

	char * nomCouleur[] =
	{
		"Coeur",
		"Carreau",
		"Pique",
		"Trefle"
	};

	Carte Jeu[52];

	//On crée les cartes

	for (int i = 0; i <= 51; i++)
	{
		Jeu[i].valeur = i / 4;
		strcpy(Jeu[i].nomValeur, nomValeur[i/4]);
		strcpy(Jeu[i].nomCouleur, nomCouleur[i % 4]);
		printf("%s de %s\n",Jeu[i].nomValeur, Jeu[i].nomCouleur);

	}
	
	

}

void FinPartie()
{
	//On test si un joueur à son tas vide une fois que son paquet de carte est vide
}

void TirageDesCartes(int JeuCartes[]) 
{
	//On tire les 54 cartes aléatoirement

}

void DistributionDesCartes(int JeuCartesJoueur1[], int JeuCartesJoueurs2[])
{
	//On réparati les 54 cartes dans le jeu des joueurs 1 et 2
}

void DeroulementTour()
{
	//On prend la dernière carte du jeu des joueurs et on les compare
	
	//TODO Comparer la dernière carte de la liste

	//Si les cartes n'ont pas la même valeur, le joueur qui a la plus grande valeur remporte le pli
	//On met les cartes du pli dans le tas du joueur qui à remporté le pli

	//Si les cartes ont la même valeur
	//On prend la dernière carte du jeu des joueurs et on la met face caché dans le pli
	//On prend la dernière carte du jeu des joueur et on la compare
	//On boucle jusqu'a ce qu'un joueur remporte le pli

}

void RecuperationDuTas()
{
	//Lorsque le jeu d'un joueur est vide on prend le tas et on le met dans le jeu du joueur
}




