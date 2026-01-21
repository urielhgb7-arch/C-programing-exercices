/*Uriel*/
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{
    int mat1, mat2, mat3, moyenne; // Uriel: Déclare quatre variables entières pour stocker les notes et la moyenne
    printf("Entrez les trois notes:\n"); // Uriel: Affiche le message "Entrez les trois notes:"
    scanf("%d %d %d", &mat1, &mat2, &mat3); // Uriel: Lit trois entiers au clavier et les stocke dans mat1, mat2, mat3
    moyenne = (mat1 + mat2 + mat3) / 3; // Uriel: Calcule la moyenne des trois notes et la stocke dans moyenne
    printf("La moyenne est: %d\n", moyenne); // Uriel: Affiche la valeur de la moyenne
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}