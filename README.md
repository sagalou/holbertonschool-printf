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