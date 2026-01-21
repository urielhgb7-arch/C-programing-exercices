/*Uriel*/
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{
    int x, y, z,m; // Uriel: Déclare quatre variables entières x, y, z, m
    x=10; // Uriel: Assigne la valeur 10 à x
    y=15; // Uriel: Assigne la valeur 15 à y
    z=20; // Uriel: Assigne la valeur 20 à z
    m=(x+y+z)/2; // Uriel: Calcule la moyenne de x, y et z et la stocke dans m
    printf("%d\n", m); // Uriel: Affiche la valeur de m
    printf("%d\n",(x+y+z)/2); // Uriel: Affiche directement la moyenne de x, y et z
    
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}