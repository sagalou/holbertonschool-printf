## _printf

## 📝 Description
_printf est une fonction personnalisée en langage C qui reproduit le comportement de la fonction standard printf.

## 🛠️ Utilisation
Compilation
Utilise la commande suivante pour compiler tous les fichiers .c :

Bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf

Prototype

int _printf(const char *format, ...);


## 🚀 Fonctionnalités

La fonction gère les spécificateurs suivants :

| Format | Description |
| :--- | :--- |
| **`%c`** | Affiche un seul caractère. |
| **`%s`** | Affiche une chaîne de caractères. |
| **`%%`** | Affiche le signe pourcentage. |

## 💡 Exemple C

#include "main.h"

/**
 * main - Programme de test pour _printf avec Hello World
 * * Return: Toujours 0
 */
int main(void)
{
    /* Utilisation de %s pour une chaîne */
    _printf("Message: %s\n", "Hello World");

    /* Utilisation de %c pour un caractère */
    _printf("Première lettre: %c\n", 'H');

    /* Utilisation de %% pour le signe pourcentage */
    _printf("Succès du test à 100%%\n");

    return (0);
}

## 📁 Structure du projet_printf.c 
- Fonction principale et gestion de la boucle.main.h : 
- Prototype de la fonction et bibliothèques nécessaires.man_3_printf : 
- Page de manuel du projet.
---

## Flowchart
```
_printf(format, ...)
        │
        ▼
   format == NULL ? ──── YES ──→ return -1
        │ NO
        ▼
   loop: read format char by char
        │
   ┌────┴────┐
   │ char != %│──→ write char to stdout, count++
   └────┬────┘
        │ char == %
        ▼
   read next char
        │
   ┌────┴──────────────────┐
   │ %c → print_char()     │
   │ %s → print_string()   │
   │ %% → print_percent()  │
   │ other → write % + char│
   └───────────────────────┘
        │
        ▼
   return count
```

---