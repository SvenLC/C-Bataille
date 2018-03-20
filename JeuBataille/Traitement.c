#include "Traitement.h"
#include <stdio.h>






//Création d'une liste de cartes de 52 cartes. Prend en entrée en liste de carte de taille 52
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

	

	//On crée les cartes

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
	//On test si un joueur à son tas vide une fois que son paquet de carte est vide
}


//Distribution de manière aléatoire des cartes présentes dans le paquet de carte aux deux joueurs
//Prend en entrée trois listes de 52 cartes maximum, les cartes de la première liste sont réparti 
//dans les deux autres listes
void DistributionDesCartes(Carte *paquetCarte, Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2)
{
	Carte carteTire;
	int nombreCarteDistribue = 0;
	int indexJoueur1 = 0;
	int indexJoueur2 = 0;
	int compteur = 0;
	while(nombreCarteDistribue < 52)
	{
		//On choisi une carte aléatoire dans le paquet de carte
		int r = (rand() % 52);
		carteTire = paquetCarte[r];
		
		
		

		if (carteTire.valeur != -1)
		{
			
			

			//On distribue les 26 premières cartes tirées au joueur 1
			if (nombreCarteDistribue < 26)
			{
				JeuCartesJoueur1[indexJoueur1] = carteTire;
				paquetCarte[r].valeur = -1;
				printf("Joueur 1 %s de %s\n", JeuCartesJoueur1[indexJoueur1].nomValeur, JeuCartesJoueur1[indexJoueur1].nomCouleur);
				indexJoueur1++;
				nombreCarteDistribue++;
			}
			//On distribue les 26 dernières cartes tirées au joueur 2
			else
			{
				JeuCartesJoueur2[indexJoueur2] = carteTire;
				paquetCarte[r].valeur = -1;
				printf("Joueur 2 %s de %s\n", JeuCartesJoueur2[indexJoueur2].nomValeur, JeuCartesJoueur2[indexJoueur2].nomCouleur);
				indexJoueur2++;
				nombreCarteDistribue++;
			}
			
			

		}
		compteur++;
		printf("Nombre de cartes distribue est %d ", nombreCarteDistribue);
		printf("On a realise la boucle %d fois\n", compteur);
		
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d %s %s\n", i, JeuCartesJoueur1[i].nomValeur, JeuCartesJoueur1[i].nomCouleur);
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d %s %s\n", i, JeuCartesJoueur2[i].nomValeur, JeuCartesJoueur2[i].nomCouleur);
	}
	

	

	
	
	
	


	
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




