/*Uriel */
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties
#include <stdlib.h> // Uriel: Inclut la bibliothèque stdlib pour les fonctions utilitaires

int main(void) // Uriel: Déclare la fonction principale
{
    int a, b,c,d; // Uriel: Déclare quatre variables entières a, b, c, d
    printf("Donner a"); // Uriel: Affiche le message "Donner a" pour demander l'entrée
    scanf("%d", &a); // Uriel: Lit un entier au clavier et le stocke dans la variable a
    printf("Donner b"); // Uriel: Affiche le message "Donner b" pour demander l'entrée
    scanf("%d", &b); // Uriel: Lit un entier au clavier et le stocke dans la variable b
    c=a+b; // Uriel: Calcule la somme de a et b et la stocke dans c
    d=a*b; // Uriel: Calcule le produit de a et b et le stocke dans d
    printf("%d %d\n", c,d); // Uriel: Affiche les valeurs de c et d séparées par un espace, puis passe à la ligne
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}