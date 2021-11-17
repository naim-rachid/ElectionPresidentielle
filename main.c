#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Menu de voter sur un président donné
int menuVote(char listePresidents[][255], int nbrPresidents){
	
//	size_t nbrPresidents = sizeof(listePresidents) / sizeof(listePresidents[0]);
	printf("%d", nbrPresidents);
	int c;
	printf("\n------------------------------------------------------------------------------------------------");
	printf("\n---------------------- Bienvenu dans une app d'Election et de Vote ---------------------------\n");
	printf("------------------------------------------------------------------------------------------------\n");
	printf("----------------------- Veuillez choisir un president parmi les suivant : ----------------------\n");
	for (int i = 0; i < nbrPresidents; i++) {
		printf("-------- 1-President %d : %s\n", i+1, listePresidents[i]);
	}
	printf("------------------------------------------------------------------------------------------------\n");
	printf("-------- 0-/ Exit ------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------\n");
	printf("Quelle est votre vote : ");
	scanf("%d", &c);
	printf("choix saisis est = %d \n", c);
	printf("------------------------------------------------------------------------------------------------\n");
	
	return c;
}

int main(int argc, char *argv[]) {
	
	// Traitement sur les présidents
	int nbrPresidents;
	
	printf("Combien de presidents qui vont partager dans cette election en tenir compte que le minimum est 5 candidats : ");
	do {
		scanf("%d", &nbrPresidents);
		printf("\"Veuillez entrer un nombre superieure ou egale a 5\" ! ");
	} while (nbrPresidents < 5);
	printf("\nnbrPresidents = %d\n", nbrPresidents);
	
	char listePresidents[nbrPresidents][255];	
	
	for (int i = 0; i < nbrPresidents; i++) { // 0  || 1  || 2
			printf("--- Entrez le nom de president %d : ", i+1);
			scanf("%s", listePresidents[i]);
			puts(listePresidents[i]);
		
	}
	// Affichage de la liste des présidents
	printf("------ la liste des presidents : ------\n");
	for (int i = 0; i < nbrPresidents; i++) { // 0  || 1  || 2
		printf("[%d, %s]  |  ", i+1, listePresidents[i]);
	}
	printf("\n---------------------------------------------\n");
	
	// Traitement sur les élécteurs
	int nbrElecteurs;
	
	printf("Combien de electeurs qui vont partager dans la processus de vote en tenir compte que le minimum est 10 electeurs : ");
	do {
		scanf("%d", &nbrElecteurs);
		printf("\"Veuillez entrer un nombre superieure ou egale a 10\" ! ");
	} while (nbrElecteurs < 10);
	printf("nbrElecteurs = %d\n", nbrElecteurs);
	
	char listeElecteurs[nbrElecteurs][255];	
	
	for (int i = 0; i < nbrElecteurs; i++) { // 0  || 1  || 2
			printf("--- Entrez le CIN de l'electeur %d : ", i+1);
			scanf("%s", listeElecteurs[i]);
			puts(listeElecteurs[i]);
	}
	// Affichage de la liste des présidents
	printf("------ la liste des electeurs : ------\n");
	for (int i = 0; i < nbrElecteurs; i++) { // 0  || 1  || 2
		printf("[%d, %s]  |  ", i+1, listeElecteurs[i]);
	}
	printf("\n---------------------------------------------\n");
	
	
	printf("\n_____________ Premier Tour _____________\n");
	int choix;
	do {
		choix = menuVote(listePresidents, nbrPresidents);
	} while (choix != 0);
	
	
	
	
	
	
	
	return 0;
}