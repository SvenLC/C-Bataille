#ifndef TRAITEMENT
#define TRAITEMENT

#endif

typedef struct
{
	char nomCouleur[100];
	int valeur;
	char nomValeur[100];
	




}Carte;

void CreationJeuDeCarte(Carte *paquetCarte);
void DistributionDesCartes(Carte *paquetCarte, Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2);
int DeroulementTour(Carte *JeuCartesJoueur1, Carte *JeuCartesJoueur2);
Carte tirerCarte(Carte *JeuCartes);
int comparerCarte(Carte carteJoueur1, Carte carteJoueur2);
void ajouterCarte(Carte *JeuCartes, Carte *Tas);




typedef struct
{
	
	int nombreCarte;

}Jeu;


