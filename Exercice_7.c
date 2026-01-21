/*Uriel */
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{ 
    char prenom[20]; // Uriel: Déclare un tableau de 20 caractères 
    printf("Entrez votre prénom:\n"); // Uriel: Affiche le message pour demander le prénom
    scanf("%19s", prenom); // Uriel: Lit une chaîne de caractères (prénom) au clavier et la stocke dans le tableau prenom
    printf("Bonjour à tous %s\n", prenom); // Uriel: Affiche "Bonjour à tous" suivi du contenu de prenom
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}