/* #include "libft.h"

static int	ft_wordlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	ft_wordnum(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			word++;
		while (s[i] != c && s[i])
			i++;
	}
	return (word);
}

static char	**ft_free(char **tab, int j)
{
	while (j-- > 0)
		free(tab[j]);
	free(tab);
	return (NULL);
}

static char	**ft_tab_maker(const char *s, char **tab, char c)
{
	int	len;
	int	j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_wordlen(s, c);
			tab[j] = ft_substr(s, 0, len);
			if (!tab[j])
				return (ft_free(tab, j));
			s += len;
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (0);
	tab = (char **)malloc((ft_wordnum(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (0);
	return (ft_tab_maker(s, tab, c));
} */

/* int	main(void)
{
	int		i = 0;
	char	**tab;
	tab = ft_split(NULL, ' ');
	while (i < 0)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
} */
/* gccw ft_split.c ft_substr.c ft_strdup.c ft_strlen.c ft_memcpy.c */

#include "libft.h"
#include <stdio.h>

static int  ft_wordquantity(char const *s, char c)
{
   int i;
   int wq;

   i = 0;
   wq = 0;
   while (s[i])
   {
       while (s[i] == c)
           i++;
       if (s[i] != c && s[i])
           wq++;
       while (s[i] != c && s[i])
           i++;
   }
   return (wq);
}

char    **ft_split(char const *s, char c)
{
   char    **aux;
   int     i;
   int     j;
   int     start;

   aux = (char **)malloc((ft_wordquantity(s, c) + 1) * sizeof(char *));
   if (!aux)
       return (NULL);
   i = 0;
   j = 0;
   while (s[i])
   {
       if (s[i] != c)
       {
           start = i;
           while (s[i] && s[i] != c)
               i++;
           aux[j] = ft_substr(s, start, i - start);
           j++;
           continue ;
       }
       i++;
   }
   aux[j] = NULL;
   return (aux);
}

/*int main(void)
{
   char const s[] = " hola mundo";
   char c = ' ';
   char **result = ft_split(s, c);
   int substr = 0;

   while (result[substr])
   {
       printf("Substr n.%d: %s\n", substr, result[substr]);
       substr++;
   }
   printf("%s", ft_split(s, c));
   return (0);
}*/ 