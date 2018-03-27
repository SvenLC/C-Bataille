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
	}
	
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
				indexJoueur1++;
				nombreCarteDistribue++;
			}
			//On distribue les 26 dernières cartes tirées au joueur 2
			else
			{
				JeuCartesJoueur2[indexJoueur2] = carteTire;
				paquetCarte[r].valeur = -1;
				indexJoueur2++;
				nombreCarteDistribue++;
			}

		}
		compteur++;
	}
	
}

int DeroulementTour(Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2)
{
	int victoire = 0;
	int nombreCartesJoueur1 = 0;
	int nombreCartesJoueur2 = 0;
	int nombreCartesTas = 0;
	Carte carteJoueur1;
	Carte carteJoueur2;
	Carte Tas[52];
	int finTour = -1;
	int carteJoue = 0;
	int resultat = -1;
	int finJeu = -1;
	nombreCartesJoueur1 = compterNombreCartes(JeuCartesJoueur1);
	nombreCartesJoueur2 = compterNombreCartes(JeuCartesJoueur2);
	
	if (compterNombreCartes(JeuCartesJoueur1) == 0 )
	{
		printf("Joueur 2 gagne la partie !");
		victoire = 1;

	}

	if (compterNombreCartes(JeuCartesJoueur2) == 0)
	{
		printf("Joueur 1 gagne la partie !");
		victoire = 1;
	}

	while (finTour == -1 && victoire == 0)
	{
		carteJoueur1 = tirerCarte(JeuCartesJoueur1);
		carteJoueur2 = tirerCarte(JeuCartesJoueur2);

		int r = (rand() % 2);

		if (r == 0)
		{
		
		Tas[carteJoue] = carteJoueur1;
		Tas[carteJoue + 1] = carteJoueur2;
		carteJoue += 2;

		}

		if (r == 1)
		{
			Tas[carteJoue] = carteJoueur2;
			Tas[carteJoue + 1] = carteJoueur1;
			carteJoue += 2;

		}
		resultat = comparerCarte(carteJoueur1, carteJoueur2);

		if ( resultat == 1)
		{
			ajouterCarte(JeuCartesJoueur1, Tas);
			finTour = 0;
			printf("Joueur 1 gagne le pli ! ");
			printf("%d | %d\n", nombreCartesJoueur1, nombreCartesJoueur2);
		}

		if (resultat == 2)
		{
			ajouterCarte(JeuCartesJoueur2, Tas);
			finTour = 0;
			printf("Joueur 2 gagne le pli ! ");
			printf("%d | %d\n", nombreCartesJoueur1, nombreCartesJoueur2);
		}

		if (resultat == 0)
		{
			printf("Bataille !\n");
			carteJoueur1 = tirerCarte(JeuCartesJoueur1);
			carteJoueur2 = tirerCarte(JeuCartesJoueur2);
			Tas[carteJoue] = carteJoueur1;
			Tas[carteJoue + 1] = carteJoueur2;
			nombreCartesTas = compterNombreCartes(Tas);
			carteJoue += 2;
		}
	}
	nombreCartesJoueur1 = compterNombreCartes(JeuCartesJoueur1);
	nombreCartesJoueur2 = compterNombreCartes(JeuCartesJoueur2);
	return victoire;
}

int comparerCarte(Carte carteJoueur1, Carte carteJoueur2)
{
	int resultat = -1;

	if (carteJoueur1.valeur > carteJoueur2.valeur)
	{
		resultat = 1;
	}

	else if (carteJoueur1.valeur < carteJoueur2.valeur)
	{
		resultat = 2;
	}

	else if (carteJoueur1.valeur == carteJoueur2.valeur)
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
	
	i = compterNombreCartes(JeuCartes);

	while (Tas[y].valeur >= 0 && Tas[y].valeur <= 12)
	{
		JeuCartes[i] = Tas[y];
		i++;
		y++;
	}
}






