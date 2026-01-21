# 📚 Documentation des Exercices C

Ce répertoire contient une collection d'exercices en langage C, organisés en trois sections : **Matrices**, **Section1** et **Section 2**. Chaque fichier démontre des concepts fondamentaux de programmation en C.

---

## 📂 Structure du Répertoire

```
C/
├── Matrices/
│   └── test.c
├── Section1/
│   ├── cours_1.c
│   ├── exercice_2.c
│   ├── Exercice_3.c
│   ├── Exercice_4.c
│   ├── Exercice_5.c
│   ├── Exercice_6.c
│   └── Exercice_7.c
└── Section 2/
    ├── Exercice_1.c
    ├── Exercice_2.c
    ├── Exercice_3.c
    └── Exercice_4.c
```

---

## 📋 Détail des Fichiers

### 📁 Dossier Matrices

#### [Matrices/test.c](Matrices/test.c)

**Description:** Programme pour l'addition de deux matrices.

**Objectif:**

- Demander à l'utilisateur de saisir les dimensions (nombre de lignes et de colonnes) des matrices
- Permettre à l'utilisateur d'entrer les éléments des deux matrices
- Calculer et afficher la somme des deux matrices

**Concepts clés:**

- Tableaux bidimensionnels (matrices)
- Boucles imbriquées
- Opérations sur les matrices

**Résultat d'exécution:**

```
Exemple d'entrée:
- Dimensions: 2x2
- Matrice 1: [1, 2; 3, 4]
- Matrice 2: [5, 6; 7, 8]

Résultat (somme):
6 8
10 12
```

---

### 📁 Dossier Section1

#### [Section1/cours_1.c](Section1/cours_1.c)

**Description:** Exemple introductif de déclaration et d'initialisation de variables.

**Objectif:**

- Déclarer et initialiser des variables entières
- Démontrer les opérations arithmétiques basiques

**Concepts clés:**

- Déclaration de variables
- Types de données (int)
- Opérations arithmétiques simples

**Résultat d'exécution:**

```
Aucune sortie visible - le programme initialise simplement les variables:
- a = 5
- b = a + 1 = 6
- c = a + b = 11
```

---

#### [Section1/exercice_2.c](Section1/exercice_2.c)

**Description:** Calcul de la somme et du produit de deux nombres saisis par l'utilisateur.

**Objectif:**

- Lire deux entiers saisis par l'utilisateur
- Calculer leur somme et leur produit
- Afficher les résultats

**Concepts clés:**

- Entrée/sortie (scanf, printf)
- Opérations arithmétiques

**Résultat d'exécution:**

```
Entrée: 5, 3
Sortie: 8 15
(5+3 = 8, 5×3 = 15)
```

---

#### [Section1/Exercice_3.c](Section1/Exercice_3.c)

**Description:** Programme avec une opération sur des variables.

**Objectif:**

- Lire deux entiers x et y
- Effectuer x = y + 1
- Ajouter x à z et afficher le résultat

**Concepts clés:**

- Assignation de variables
- Opérations sur les variables

**Résultat d'exécution:**

```
Entrée: x=4, y=7
Sortie: x=8 z=32774
(Note: z affiche une valeur non initialisée du fait d'un bug - z=z+x sans initialisation)
```

---

#### [Section1/Exercice_4.c](Section1/Exercice_4.c)

**Description:** Calcul des carrés de deux nombres.

**Objectif:**

- Lire deux entiers a et b
- Calculer leur carré respectif
- Afficher les résultats

**Concepts clés:**

- Entrée/sortie
- Calcul de puissances (carré)

**Résultat d'exécution:**

```
Entrée: a=6, b=8
Sortie: 36 64
(6² = 36, 8² = 64)
```

---

#### [Section1/Exercice_5.c](Section1/Exercice_5.c)

**Description:** Calcul de la moyenne de trois nombres hardcodés.

**Objectif:**

- Calculer la moyenne arithmétique de trois valeurs prédéfinies (x=10, y=15, z=20)
- Afficher la moyenne de deux façons différentes

**Concepts clés:**

- Calcul de moyenne
- Opérations arithmétiques

**Résultat d'exécution:**

```
22
22
(Moyenne de 10, 15 et 20 = 45/2 = 22)
```

---

#### [Section1/Exercice_6.c](Section1/Exercice_6.c)

**Description:** Affichage d'une valeur, son double et son triple.

**Objectif:**

- Définir une valeur (1000)
- Calculer son double et son triple
- Afficher tous les trois résultats

**Concepts clés:**

- Multiplication
- Formatage de sortie

**Résultat d'exécution:**

```
1000
 2000
 3000
(1000 × 1, 1000 × 2, 1000 × 3)
```

---

#### [Section1/Exercice_7.c](Section1/Exercice_7.c)

**Description:** Programme qui demande le prénom de l'utilisateur et le salue.

**Objectif:**

- Lire une chaîne de caractères (prénom) saisis par l'utilisateur
- Afficher un message de salutation personnalisé

**Concepts clés:**

- Tableaux de caractères (chaînes de caractères)
- Entrée/sortie avec chaînes
- Fonction scanf avec "%s"

**Résultat d'exécution:**

```
Entrée: Alice
Sortie:
Entrez votre prénom:
Bonjour à tous Alice
```

---

### 📁 Dossier Section 2

#### [Section 2/Exercice_1.c](Section%202/Exercice_1.c)

**Description:** Calcul du carré, du cube et de l'inverse d'un nombre.

**Objectif:**

- Lire un entier saisi par l'utilisateur
- Calculer son carré, son cube et son inverse
- Afficher tous les résultats

**Concepts clés:**

- Calculs de puissances
- Division d'entiers

**Résultat d'exécution:**

```
Entrée: 5
Sortie:
Le carré est:25
 Le cube est:125
 L'inverse est:0
(5² = 25, 5³ = 125, 1/5 = 0 en division entière)
```

---

#### [Section 2/Exercice_2.c](Section%202/Exercice_2.c)

**Description:** Calcul de la moyenne de trois notes.

**Objectif:**

- Lire trois notes entières
- Calculer leur moyenne arithmétique
- Afficher la moyenne

**Concepts clés:**

- Entrée multiple
- Calcul de moyenne
- Division entière

**Résultat d'exécution:**

```
Entrée: 15, 18, 16
Sortie:
Entrez les trois notes:
La moyenne est: 16
((15 + 18 + 16) / 3 = 49 / 3 = 16)
```

---

#### [Section 2/Exercice_3.c](Section%202/Exercice_3.c)

**Description:** Échange de deux variables avec une variable temporaire.

**Objectif:**

- Lire deux entiers x et y
- Échanger leurs valeurs
- Afficher les nouvelles valeurs

**Concepts clés:**

- Manipulation de variables
- Échange de valeurs (swap)
- Utilisation de variable temporaire

**Résultat d'exécution:**

```
Entrée: x=10, y=20
Sortie:
Entrez deux entiers:
Après échange: x = 20, y = 10
```

---

#### [Section 2/Exercice_4.c](Section%202/Exercice_4.c)

**Description:** Affichage inversé de deux nombres saisis.

**Objectif:**

- Lire deux entiers a et b
- Afficher b en première position et a en deuxième position

**Concepts clés:**

- Manipulation de l'ordre d'affichage
- Inversement d'ordre

**Résultat d'exécution:**

```
Entrée: a=7, b=9
Sortie:
Donner a et b
a=9 et b=7
(Affichage inversé)
```

---

## 🚀 Guide de Compilation et d'Exécution

### Compiler un fichier

```bash
gcc -o nomExecutable nomFichier.c
```

### Exécuter un fichier

```bash
./nomExecutable
```

### Exemple complet

```bash
cd Section1
gcc -o exercice_2 exercice_2.c
./exercice_2
```

---

## 📝 Résumé des Concepts

| Concept                          | Fichiers                                                 |
| -------------------------------- | -------------------------------------------------------- |
| **Déclaration de variables**     | cours_1.c, tous les exercices                            |
| **Entrée/Sortie (scanf/printf)** | exercice_2.c, Exercice_3.c, Exercice_4.c, tous Section 2 |
| **Opérations arithmétiques**     | Tous                                                     |
| **Tableaux de caractères**       | Exercice_7.c                                             |
| **Tableaux bidimensionnels**     | Matrices/test.c                                          |
| **Boucles**                      | Matrices/test.c                                          |

---

## 📌 Notes Importantes

- Certains programmes contiennent des bugs (ex: Exercice_3.c utilise une variable non initialisée `z`)
- Les résultats affichés utilisent la division entière en C (pas de nombres décimaux)
- Assurez-vous que GCC est installé sur votre système pour compiler les fichiers
- Les programmes interactifs nécessitent une saisie utilisateur via le clavier

---

## 👤 Auteur

Tous les fichiers sont commentés et documentés avec "Uriel" comme auteur/commentateur.

---

**Généré le:** 21 janvier 2026
