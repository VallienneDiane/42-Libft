# LIBFT

## PARTIE 1

Recoder un ensemble de fonctions de la libc telles que décrites dans leur man respectif sur votre système. Vos fonctions devront avoir exactement le même prototype et le même comportement que les originales. Leur nom devra être préfixé par “ft_”.

isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat • toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi • calloc • strdup

## PARTIE 2

Vous devez coder un certain nombre de fonctions absentes de la libc ou présentes dans une forme différente. Certaines de ces fonctions peuvent avoir de l’intéret pour faciliter l’écriture des fonctions de la première partie.

| Function name | ft_substr |
| :-----------: | :-------: |
| Description   | Alloue avec malloc et retourne une chaine de caractères issue de la chaine ’s’. |
| :-----------: | :------------------------------------------------------------------------------ |

| Function name | ft_strjoin |
| :-----------: | :--------: |
| Description   | Alloue avec malloc Alloue et retourne une nouvelle chaine, résultat de la concaténation de s1 et s2 |
| :-----------: | :-------------------------------------------------------------------------------------------------- |

| Function name | ft_strtrim |
| :-----------: | :--------: |
| Description   | Alloue avec malloc et retourne une copie de la chaine ’s1’, sans les caractères spécifiés dans ’set’ au début et à la fin de la chaine de caractères. |
| :-----------: | :---------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_split |
| :-----------: | :------: |
| Description   | Alloue (avec malloc(3)) et retourne un tableau de chaines de caracteres obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme délimiteur. Le tableau doit être terminé par NULL |
| :-----------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_itoa |
| :-----------: | :-----: |
| Description   | Alloue (avec malloc(3)) et retourne une chaine de caractères représentant l’integer reçu en argument. Les nombres négatifs doivent être gérés. |
| :-----------: | :--------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_strmapi |
| :-----------: | :--------: |
| Description   | Applique la fonction ’f’ à chaque caractère de la chaine de caractères passée en argument pour créer une nouvelle chaine de caractères (avec malloc(3)) résultant des applications successives de ’f’ |
| :-----------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_striteri|
| :-----------: | :--------: |
| Description   | Applique la fonction f à chaque caractère de la chaîne de caractères transmise comme argument, et en passant son index comme premier argument. Chaque caractère est transmis par adresse à f pour être modifié si nécessaire. |
| :-----------: | :---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_striteri |
| :-----------: | :---------: |
| Description   | Alloue avec malloc et retourne une chaine de caractères issue de la chaine ’s’. |
| :-----------: | :------------------------------------------------------------------------------ |

| Function name | ft_putendl_fd |
| :-----------: | :-----------: |
| Description   | Écrit La chaine de caractères ’s’ sur le file descriptor donné, suivie d’un retour à la ligne. |
| :-----------: | :--------------------------------------------------------------------------------------------- |

| Function name | ft_putchar_fd / ft_putstr_fd / ft_putnbr_fd |
| :-----------: | :-----------------------------------------: |
| Description   | Écrit le caractere 'c' / la chaine de caractères ’s’ / l'integer n / sur le file descriptor donné |
| :-----------: | :------------------------------------------------------------------------------------------------ |

## PARTIE BONUS

Avoir des fonctions de manipulation de mémoire brute et de chaînes de caractères est très pratique, mais vous vous rendrez vite compte qu’avoir des fonctions de manipulation de liste est encore plus pratique.
Vous utiliserez la structure suivante pour représenter les maillons de votre liste. Cette structure est à ajouter à votre fichier libft.h.
make bonus vous permettra d’ajouter les fonctions demandées dans votre librairie libft.a

```
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
} 					t_list
```

La description des champs de la structure t_list est la suivante :
• content : La donnée contenue dans le maillon. Le void * permet de stocker une
donnée de n’importe quel type.
• next : L’adresse du maillon suivant de la liste ou NULL si le maillon est le dernier.

| Function name | ft_lstnew|
| :-----------: | :------: |
| Description   | Alloue (avec malloc(3)) et renvoie un nouvel élément. la variable content est initialisée à l’aide de la valeur du paramètre content. La variable ’next’ est initialisée à NULL. |
| :-----------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_lstadd_front |
| :-----------: | :-------------: |
| Description   | Ajoute l’élément ’new’ au début de la liste. |
| :-----------: | :------------------------------------------- |

| Function name | ft_lstsize|
| :-----------: | :-------: |
| Description   | Compte le nombre d’éléments de la liste. |
| :-----------: | :--------------------------------------- |

| Function name | ft_lstlast |
| :-----------: | :--------: |
| Description   | Renvoie le dernier élément de la liste.|
| :-----------: | :------------------------------------- |

| Function name | ft_lstadd_back |
| :-----------: | :------------: |
| Description   | Ajoute l’élément new à la fin de la liste. |
| :-----------: | :------------------------------------------------------------------------------------------------ |

| Function name | ft_lstdelone |
| :-----------: | :-------: |
| Description   | Libère la mémoire de l’élément passé en argument en utilisant la fonction del puis avec free(3). La mémoire de next ne doit pas être free. |
| :-----------: | :----------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_lstclear |
| :-----------: | :---------: |
| Description   | Supprime et libère la mémoire de l’élément passé en paramètre, et de tous les élements qui suivent, à l’aide de del et de free(3) Enfin, le pointeur initial doit être mis à NULL. |
| :-----------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |

| Function name | ft_lstiter|
| :-----------: | :-------: |
| Description   | Itère sur la list lst et applique la fonction f au contenu chaque élément. |
| :-----------: | :------------------------------------------------------------------------- |

| Function name | ft_lstmap|
| :-----------: | :-------: |
| Description   | Itère sur la liste lst et applique la fonction f au contenu de chaque élément. Crée une nouvelle liste résultant des applications successives de f. la fonction del est la pour detruire le contenu d'un element si necessaire |
| :-----------: | :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |