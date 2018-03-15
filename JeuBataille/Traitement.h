#ifndef TRAITEMENT
#define TRAITEMENT

#endif

void InitialisationPartie();
void CreationJeuDeCarte();
void TirageDesCartes(int JeuCartes[]);
void DistributionDesCartes(int JeuCartesJoueur1[], int JeuCartesJoueurs2[]);

typedef struct
{ 
	char nomCouleur[100];
	int valeur;
	char nomValeur[100];
	
	

	
}Carte;

typedef struct
{
	Carte main[53];
	Carte tas[53];

}Jeu;


