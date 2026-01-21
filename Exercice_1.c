/*Uriel */
#include <stdio.h> // Uriel: Inclut la bibliothèque stdio pour les entrées/sorties

int main(void) // Uriel: Déclare la fonction principale
{
    float a, car, cub; // Uriel: Déclare trois variables flottantes a, car, cub, inv
    float inv; // Uriel: Déclare une variable flottante inv pour stocker l'inverse
    printf("Donner un entier:\n"); // Uriel: Affiche le message "Donner un entier:" pour demander l'entrée
    scanf("%f", &a); // Uriel: Lit un entier au clavier et le stocke dans la variable a
    car=a*a; // Uriel: Calcule le carré de a et le stocke dans car
    cub=a*a*a; // Uriel: Calcule le cube de a et le stocke dans cub
    if(a==0) // Uriel: Vérifie si a est égal à zéro pour éviter la division par zéro
    {
        printf("L'inverse n'existe pas pour a=0\n"); // Uriel: Affiche un message d'erreur si a est zéro
        return 1; // Uriel: Retourne 1 pour indiquer une erreur
    }
    else{
        inv=1/a; // Uriel: Calcule l'inverse de a (1 divisé par a) et le stocke dans inv
    }
    printf("Le carré est:%f\n Le cube est:%f\n L'inverse est:%f\n", car,cub,inv); // Uriel: Affiche les valeurs de car, cub et inv
    return 0; // Uriel: Retourne 0 pour indiquer que le programme s'est terminé avec succès
}
