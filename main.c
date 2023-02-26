/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saltinba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:15:44 by saltinba          #+#    #+#             */
/*   Updated: 2022/12/21 15:15:45 by saltinba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
// char f1(unsigned int i, char c)
// {
//     char newString;
// 	newString = ft_toupper(c);
// 	return (newString);
// }

// void f2(unsigned int i, char *c)
// {
//     *c = ft_toupper(*c);
// }

void delete_content(void *content)
{
	free(content);
}

void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void *toupper_content(void *content)
{
    char *str = ft_strdup((char *)content);
    char *new_str = malloc(sizeof(char) * ft_strlen(str));
    for (int i = 0; str[i] != '\0'; i++)
        new_str[i] = ft_toupper(str[i]);
    return (new_str);
}

int main(void)
{
    char    p1[] = "Hello World!";
    char    p2[] = "42Ecole";
    char    p3[] = "bb";
    char    p4[] = "aa";
    char    p5[] = " ";
    char    p6[] = "     -1263127asdhj213";
    char    p7[] = "ba";
    char    p8[] = "baabbcaabcb";
    int *p9;
    int i;
    char    c = ' ';
    int fd = 1;
    int sayi = -12478;

    char dst[20] = "HelloWorld";
    char src[] = "42Ecole";
    ////////////////////////////////////// PART 1 //////////////////////////////////////
    // printf("%d", ft_isalpha('a'));
    // printf("%d", ft_isdigit('1'));
    // printf("%d", ft_isalnum('-'));
    // printf("%d", ft_isascii('1'));
    // printf("%d", ft_isprint('1'));
    // printf("%zu", ft_strlen("Merhaba"));
    // printf("%s", ft_memset(p1,'a',2));
    // printf("%s", ft_bzero(p1, 2));
    // printf("%s", ft_memcpy(p1, p2, 4));
    // printf("%s", ft_memmove(p1, p2, 5));
    // printf("%zu", ft_strlcpy(p1, p2, 2));
    // printf("%zu", ft_strlcat("HelloWorld", "42Ecole",11));
    // printf("%zu", ft_strlcat(dst, src, 19));
    // printf("%d", ft_tolower('A'));
    // printf("%d", ft_toupper('a'));
    // printf("%s", ft_strchr(p1, ' '));
    // printf("%s", ft_strrchr(p1, ' '));
    // printf("%d", ft_strncmp(p3, p4, 15));
    // printf("%s", ft_memchr(p1, 'a', 3));
    // printf("%d", ft_memcmp(p1, p2, 4));
    // printf("%s", ft_strnstr(p1, p5, 13));
    // printf("%d", ft_atoi(p6));
    // p9 = ft_calloc(4, sizeof(int));
    //  if (p9 == NULL)
    // {
    //     printf("Bellekten yer alinamadi!\n");
    //     return 1;
    // }
    //  for (i = 0; i < 4; i++)
    //     printf("p9[%d] = %d\n", i, p9[i]);
    // printf("%s", ft_strdup(p1));
    ////////////////////////////////////// PART 2 //////////////////////////////////////
    // printf("%s", ft_substr(p1,6,6));
    // printf("%s", ft_strjoin(p1, p2));
    // printf("%s", ft_strtrim(p8, p7));
    // char **result = ft_split(p1, c);
    // for (int i = 0; result[i] != NULL; i++)
    //     printf("%s\n", result[i]);
    // printf("%s", ft_itoa(sayi));
    // printf("%s", ft_strmapi(p8, *f1));
    // ft_putchar_fd(c,fd);
    // ft_putstr_fd(p1,fd);
    // ft_putendl_fd(p1,fd);
    // ft_putnbr_fd(sayi,fd);
    ////////////////////////////////////// BONUS //////////////////////////////////////
    // //////// FT_LSTNEW //////////
    // t_list *sonuc = ft_lstnew(p1);
    // printf("%s\n", sonuc->content);
    // printf("%p\n", sonuc->next);
    ////////// FT_LSTADD_FRONT //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));
    // t_list *liste = nesne1;

    // nesne1->content = (void *)"nesne1";
    // nesne1->next = nesne2;
    // nesne2->content = (void *)"nesne2";
    // nesne2->next = NULL;
    // nesne3->content = (void *)"nesne3";
    // nesne3->next = NULL;
    
    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    // printf("\n");

    // ft_lstadd_front(&nesne1, nesne3);
    // liste = nesne3;

    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    ////////// FT_LSTSIZE //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));

    // nesne1->content = (void *)"nesne1";
    // nesne1->next = nesne2;
    // nesne2->content = (void *)"nesne2";
    // nesne2->next = nesne3;
    // nesne3->content = (void *)"nesne3";
    // nesne3->next = NULL;
    // printf("%d", ft_lstsize(nesne1));
    /// FT_LSTLAST /////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));

    // nesne1->content = (void *)"nesne1";
    // nesne1->next = nesne2;
    // nesne2->content = (void *)"nesne2";
    // nesne2->next = nesne3;
    // nesne3->content = (void *)"nesne3";
    // nesne3->next = NULL;

    // t_list *last = ft_lstlast(nesne1);
    // printf("%s", (char *)last->content);
    ////////// FT_LSTADD_BACK //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));
    // t_list *liste = nesne1;
    // nesne1->content = (void *)"nesne1";
    // nesne1->next = nesne2;
    // nesne2->content = (void *)"nesne2";
    // nesne2->next = NULL;
    // nesne3->content = (void *)"nesne3";
    // nesne3->next = NULL;

    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    // printf("\n");

    // ft_lstadd_back(&nesne1, nesne3);

    // liste = nesne1;

    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    // printf("\n");
    ////////// FT_LSTDELONE //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));

    // nesne1->content = (void *)ft_strdup("nesne1");
    // nesne1->next = nesne2;
    // nesne2->content = (void *)ft_strdup("nesne2");
    // nesne2->next = nesne3;
    // nesne3->content = (void *)ft_strdup("nesne3");
    // nesne3->next = NULL;

    // t_list *liste = nesne1;

    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    // printf("\n");

    // ft_lstdelone(nesne2, delete_content);

    // liste = nesne1;
    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }

    // ft_lstdelone(nesne1, delete_content);
    // ft_lstdelone(nesne3, delete_content);
    ////////// FT_LSTCLEAR //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));

    // nesne1->content = (void *)ft_strdup("nesne1");
    // nesne1->next = nesne2;
    // nesne2->content = (void *)ft_strdup("nesne2");
    // nesne2->next = nesne3;
    // nesne3->content = (void *)ft_strdup("nesne3");
    // nesne3->next = NULL;

    // t_list *liste = nesne1;

    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    // printf("\n");

    // t_list **list = &nesne1;
    // ft_lstclear(list, delete_content);

    // liste = nesne1;
    // printf("Liste: ");
    // while (liste)
    // {
    //     printf("%s ", (char *)liste->content);
    //     liste = liste->next;
    // }
    ////////// FT_LSTITER //////////
    // t_list *nesne1 = malloc(sizeof(t_list));
    // t_list *nesne2 = malloc(sizeof(t_list));
    // t_list *nesne3 = malloc(sizeof(t_list));

    // nesne1->content = (void *)"nesne1";
    // nesne1->next = nesne2;
    // nesne2->content = (void *)"nesne2";
    // nesne2->next = nesne3;
    // nesne3->content = (void *)"nesne3";
    // nesne3->next = NULL;
    // ft_lstiter(nesne1, print_content);
    ////////// FT_LSTMAP //////////
    t_list *nesne1 = malloc(sizeof(t_list));
    t_list *nesne2 = malloc(sizeof(t_list));
    t_list *nesne3 = malloc(sizeof(t_list));

    nesne1->content = (void *)ft_strdup("Hello");
    nesne1->next = nesne2;
    nesne2->content = (void *)ft_strdup("World!");
    nesne2->next = nesne3;
    nesne3->content = (void *)ft_strdup("42Ecole");
    nesne3->next = NULL;
    t_list *liste = nesne1;
    printf("Liste: ");
    while (liste)
    {
        printf("%s ", liste->content);
        liste = liste->next;
    }
    printf("\n");

    liste = ft_lstmap(nesne1, toupper_content, delete_content);

    printf("Liste: ");
    while (liste)
    {
        printf("%s ",liste->content);
        liste = liste->next;
    }
}

