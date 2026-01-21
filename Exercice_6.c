/*Uriel */
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{ 
    int val,dble, triple; // Uriel: Déclare trois variables entières val, dble, triple
    val=1000; // Uriel: Assigne la valeur 1000 à val
    dble=val*2; // Uriel: Calcule le double de val et le stocke dans dble
    triple=val*3; // Uriel: Calcule le triple de val et le stocke dans triple
    printf("%d\n %d\n %d\n", val, dble, triple); // Uriel: Affiche les valeurs de val, dble et triple sur des lignes séparées
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}