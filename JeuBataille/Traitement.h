#ifndef TRAITEMENT
#define TRAITEMENT

#endif

void InitialisationPartie();
void CreationJeuDeCarte(Carte *paquetCarte);
void DistributionDesCartes(Carte *paquetCarte, Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2);

typedef struct
{ 
	char nomCouleur[100];
	int valeur;
	char nomValeur[100];
	
	

	
}Carte;

typedef struct
{
	Carte main[52];
	Carte tas[52];

}Jeu;


