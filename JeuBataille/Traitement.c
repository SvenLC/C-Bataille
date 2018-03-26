#include "Traitement.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>






//Création d'une liste de cartes de 52 cartes. Prend en entrée en liste de carte de taille 52
//Et assigne la valeur, le nom de la valeur et la couleur de chaques éléments carte.
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
		//printf("%d | %s de %s\n", paquetCarte[i].valeur, paquetCarte[i].nomValeur, paquetCarte[i].nomCouleur);
		
	}
	
	

}

void FinPartie()
{
	//On test si un joueur à son tas vide une fois que son paquet de carte est vide
}


//Distribution de manière aléatoire des cartes présentes dans le paquet de carte aux deux joueurs
//Prend en entrée trois listes de 52 cartes , les cartes de la première liste sont réparti 
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
				//printf("Joueur 1 %d | %s de %s\n", JeuCartesJoueur1[indexJoueur1].valeur, JeuCartesJoueur1[indexJoueur1].nomValeur, JeuCartesJoueur1[indexJoueur1].nomCouleur);
				indexJoueur1++;
				nombreCarteDistribue++;
			}
			//On distribue les 26 dernières cartes tirées au joueur 2
			else
			{
				JeuCartesJoueur2[indexJoueur2] = carteTire;
				paquetCarte[r].valeur = -1;
				//printf("Joueur 2 %s de %s\n", JeuCartesJoueur2[indexJoueur2].nomValeur, JeuCartesJoueur2[indexJoueur2].nomCouleur);
				indexJoueur2++;
				nombreCarteDistribue++;
			}
			
			

		}
		compteur++;
		//printf("Nombre de cartes distribue est %d ", nombreCarteDistribue);
		//printf("On a realise la boucle %d fois\n", compteur);
		
		
	}

	//for (int i = 0; i < 26; i++)
	//{
	//	printf("%d %s %s\n", i, JeuCartesJoueur1[i].nomValeur, JeuCartesJoueur1[i].nomCouleur);
	//}

	//for (int i = 0; i < 26; i++)
	//{
	//	printf("%d %s %s\n", i, JeuCartesJoueur2[i].nomValeur, JeuCartesJoueur2[i].nomCouleur);
	//}
	//

	

	
	
	
	


	//printf("Joueur 1 %d | %s de %s\n", JeuCartesJoueur1[0].valeur, JeuCartesJoueur1[0].nomValeur, JeuCartesJoueur1[0].nomCouleur);
}

void DeroulementTour(Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2)
{
	int nombreCartesJoueur1 = 0;
	Carte carteJoueur1;
	Carte carteJoueur2;
	Carte Tas[52];
	int finTour = -1;
	int carteJoue = 0;

	while (finTour == -1)
	{
		carteJoueur1 = tirerCarte(JeuCartesJoueur1);
		carteJoueur2 = tirerCarte(JeuCartesJoueur2);
		Tas[carteJoue] = carteJoueur1;
		Tas[carteJoue + 1] = carteJoueur2;

		if (comparerCarte(carteJoueur1, carteJoueur2) == 1)
		{
			carteJoue += 2;
			ajouterCarte(JeuCartesJoueur1, Tas);
			finTour = 0;
			printf("Joueur 1 gagne le pli !\n");

		}

		if (comparerCarte(carteJoueur1, carteJoueur2) == 2)
		{
			carteJoue += 2;
			ajouterCarte(JeuCartesJoueur2, Tas);
			finTour = 0;
			printf("Joueur 2 gagne le pli !\n");

		}

		if (comparerCarte(carteJoueur1, carteJoueur2) == 0)
		{
			printf("Bataille !\n");
			carteJoueur1 = tirerCarte(JeuCartesJoueur1);
			carteJoueur2 = tirerCarte(JeuCartesJoueur2);
			Tas[carteJoue] = carteJoueur1;
			Tas[carteJoue + 1] = carteJoueur2;
			

		}



	}

	/*
	for (int i = 0; i < 26; i++)
	{
		if (JeuCartesJoueur1[i].valeur >= 0 && JeuCartesJoueur1[i].valeur <= 12)
		{
			printf("%d %s %s\n", i, JeuCartesJoueur1[i].nomValeur, JeuCartesJoueur1[i].nomCouleur);
		}
	}
	carteJoueur1 = tirerCarte(JeuCartesJoueur1);
	carteJoueur2 = tirerCarte(JeuCartesJoueur2);
	printf("%d %s %s\n", 0, JeuCartesJoueur1[0].nomValeur, JeuCartesJoueur1[0].nomCouleur);*/

	


	
	
	


	
	//printf("%s", prendrePremiereCarte(JeuCartesJoueur1));
	//Carte carteJoueur1 = JeuCartesJoueur1
	



	nombreCartesJoueur1 = compterNombreCartes(JeuCartesJoueur1);

	//printf("%d", nombreCartesJoueur1);

}

int comparerCarte(Carte carteJoueur1, Carte carteJoueur2)
{
	int resultat = -1;

	if (carteJoueur1.valeur > carteJoueur2.valeur)
	{
		resultat = 1;
	}

	if (carteJoueur1.valeur < carteJoueur2.valeur)
	{
		resultat = 2;
	}

	else
	{
		resultat = 0;
	}

	return resultat;

}

int compterNombreCartes(Carte *JeuCartes)
{
	int nombreCartes = 0;

	for (int i = 0; i < 52; i++)
	{
		if (JeuCartes[i].valeur >= 0 && JeuCartes[i].valeur <= 12)
		{
			nombreCartes++;
		}

	}

	return nombreCartes;
}

//Prend la première carte disponible du jeu de carte, la supprime et la retourne.
Carte tirerCarte(Carte *JeuCartes)
{
	Carte premiereCarte = JeuCartes[0];
	
	for (int i = 0; i < 52; i++)
	{
		JeuCartes[i] = JeuCartes[i + 1];
	}

	return premiereCarte;
}

//On ajoute les cartes du tas aux cartes du joueur
void ajouterCarte(Carte *JeuCartes, Carte *Tas)
{
	int i = 0;
	int y = 0;
	
	i = compterNombreCartes(JeuCartes) - 1;

	while (Tas[y].valeur >= 0 && Tas[y].valeur <= 12)
	{
		JeuCartes[i] = Tas[y];
		i++;
		y++;
	}
}






