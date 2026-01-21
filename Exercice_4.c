/*Uriel*/
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void){ // Uriel: Déclare la fonction principale
    int a,b; // Uriel: Déclare deux variables entières a et b
    printf("Donner a et b\n"); // Uriel: Affiche le message "Donner a et b"
    scanf("%d %d", &a, &b); // Uriel: Lit deux entiers au clavier et les stocke dans a et b
    printf("a=%d et b=%d\n", b, a); // Uriel: Affiche les valeurs de b et a (inversées)
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}