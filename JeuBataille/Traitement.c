#include "Traitement.h"
#include <stdio.h>



void InitialisationPartie() 
{
	//On cr�e un tableau qui contiendra les 54 cartes de base du jeu
	//On cr�e un tableau pour le joueur 1 et le joueur 2 qui pourra contenir toutes les cartes du jeu
	int jeuCartes[53] = { 0 };
	int jeuCartesJoueur1[53] = { 0 };
	int jeuCartesJoueur2[53] = { 0 };


	//On r�parti les 54 cartes al�atoirement dans le tas
	TirageDesCartes(jeuCartes);



}



void CreationJeuDeCarte(Carte *paquetCarte)
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

	

	//On cr�e les cartes

	for (int i = 0; i < 52; i++)
	{
		paquetCarte[i].valeur = i / 4;
		strcpy(paquetCarte[i].nomValeur, nomValeur[(i/4)]);
		strcpy(paquetCarte[i].nomCouleur, nomCouleur[(i % 4)]);
		printf(" %s de %s\n", paquetCarte[i].nomValeur, paquetCarte[i].nomCouleur);
		
	}
	
	

}

void FinPartie()
{
	//On test si un joueur � son tas vide une fois que son paquet de carte est vide
}

void TirageDesCartes(int JeuCartes[]) 
{
	//On tire les 54 cartes al�atoirement

}
//Distribution des cartes pr�sentes dans le paquet de carte aux deux joueurs
void DistributionDesCartes(Carte *paquetCarte, Carte *JeuCartesJoueur1, Carte *JeuCartesJoueurs2)
{
	Carte carteTire;
	int nombreCarteDistribue = 0;
	int indexJoueur1 = 0;
	int indexJoueur2 = 0;
	int compteur = 0;
	while(nombreCarteDistribue < 52)
	{
		int r = (rand() % 52);
		carteTire = paquetCarte[r];
		
		
		

		if (carteTire.valeur != -1)
		{
			//On choisi une carte al�atoire dans le paquet de carte
			

			//On l'affecte au joueur 1 si le nombre de carte distribu� est paire
			if (nombreCarteDistribue < 26)
			{
				JeuCartesJoueur1[indexJoueur1] = carteTire;
				paquetCarte[r].valeur = -1;
				printf("Joueur 1 %s de %s\n", JeuCartesJoueur1[indexJoueur1].nomValeur, JeuCartesJoueur1[indexJoueur1].nomCouleur);
				indexJoueur1++;
				nombreCarteDistribue++;
			}
			//On l'affecte au joueur si le nombre de cartes distribu� est impaire
			else
			{
				JeuCartesJoueurs2[indexJoueur2] = carteTire;
				paquetCarte[r].valeur = -1;
				printf("Joueur 2 %s de %s\n", JeuCartesJoueurs2[indexJoueur2].nomValeur, JeuCartesJoueurs2[indexJoueur2].nomCouleur);
				indexJoueur2++;
				nombreCarteDistribue++;
			}
			
			

		}
		compteur++;
		printf("Nombre de cartes distribue est %d ", nombreCarteDistribue);
		printf("On a realise la boucle %d fois\n", compteur);
		
	}
	

	

	
	
	
	


	
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




