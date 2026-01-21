/*Uriel */
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{ 
    int x, y, tmp; // Uriel: Déclare trois variables entières x, y, tmp
    printf("Entrez deux entiers:\n"); // Uriel: Affiche le message "Entrez deux entiers:"
    scanf("%d %d", &x, &y); // Uriel: Lit deux entiers au clavier et les stocke dans x et y
    tmp = x; // Uriel: Stocke la valeur de x dans tmp
    x = y; // Uriel: Assigne la valeur de y à x
    y = tmp; // Uriel: Assigne la valeur de tmp (ancienne valeur de x) à y
    printf("Après échange: x = %d, y = %d\n", x, y); // Uriel: Affiche les valeurs de x et y après l'échange
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}