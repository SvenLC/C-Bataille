#include <stdlib.h>
#include <stdio.h>
#include "Traitement.h"
#include "Affichage.h"



void Menu()
{
	int choix;
	

	do
	{
	

	system("cls");
	printf("+-----------------------------------------------------------------+\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|               Bienvenu dans le jeu de la bataille !             |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("+-----------------------------------------------------------------+\n");
	printf("|                                                                 |\n");
	printf("| Veuillez saisir votre choix :                                   |\n");
	printf("|                                                                 |\n");
	printf("+-----------------------------------------------------------------+\n");
	printf("|                                                                 |\n");
	printf("| 1 - Jouer                                                       |\n");
	printf("| 0 - Quitter                                                     |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("|                                                                 |\n");
	printf("+-----------------------------------------------------------------+\n");
	scanf("%d", &choix);
	switch (choix)
	{

	case 1:
		AffichageJeu();
		break;

	default:
		break;
	}

	} while (choix != 0);
	
	
}

void AffichageJeu()
{
	Carte paquetCarte[52];
	Carte carteJoueur1[52];
	Carte carteJoueur2[52];
	Carte Tas[52];
	int victoire = 0;
	int nbCarteJoueur1 = 0; 
	int nbCarteJoueur2 = 0;
	int nbCarteTas = 0;

	


	CreationJeuDeCarte(paquetCarte);
	DistributionDesCartes(paquetCarte, carteJoueur1, carteJoueur2);

	while (victoire == 0) {
		
		system("cls");
		nbCarteJoueur1 = compterNombreCartes(carteJoueur1);
		nbCarteJoueur2 = compterNombreCartes(carteJoueur2);
		nbCarteTas = compterNombreCartes(Tas);
		printf("+-----------------------------------------------------------------+\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("|               Bienvenu dans le jeu de la bataille !             |\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("+-----------------------------------------------------------------+\n");
		printf("|                                                                 |\n");
		printf("|                        Partie en cours                          |\n");
		printf("|                                                                 |\n");
		printf("+-----------------------------------------------------------------+\n");
		printf("|                                                                 |\n");
		printf("| Joueur 1                                  Joueur 2              |\n");
		printf("| Nombre de cartes : %02d                     Nombre de cartes : %02d |\n", nbCarteJoueur1 - 1, nbCarteJoueur2 - 1);
		printf("| Carte joue                                Carte joue            |\n");
		printf("| %6s %7s                            %6s %7s        |\n", carteJoueur1[0].nomValeur, carteJoueur1[0].nomCouleur, carteJoueur2[0].nomValeur, carteJoueur2[0].nomCouleur);
		printf("|                                                                 |\n");
		printf("| Nombre de cartes dans le Tas : %2d                               |\n", nbCarteTas + 2);
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		victoire = DeroulementTour(carteJoueur1, carteJoueur2, Tas);
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("|                                                                 |\n");
		printf("+-----------------------------------------------------------------+\n");
		system("pause");

		if (victoire == 1)
		{
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|               Bienvenu dans le jeu de la bataille !             |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                         Victoire !                              |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                 Le joueur 1 remporte la partie !                |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			system("pause");


		}
		
		if (victoire == 2)
		{
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|               Bienvenu dans le jeu de la bataille !             |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                         Victoire !                              |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                 Le joueur 2 remporte la partie !                |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("|                                                                 |\n");
			printf("+-----------------------------------------------------------------+\n");
			system("pause");

		}

	}
	

}

