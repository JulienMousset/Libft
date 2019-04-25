/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_CHAINED.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:08:52 by jmousset          #+#    #+#             */
/*   Updated: 2019/04/25 11:50:18 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAINED_H
# define FT_CHAINED_H

//STRUCTURE
typedef struct s_list t_list;

struct s_list {
	char *str;
	t_list *next;
};

//PROTOTYPES
t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);

//FONCTIONS
t_list	*add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)//Securise malloc
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

#endif

//MAIN
int		main(void)
{
	t_list *list;//On cree un pointeur du type de notre structure

	list = NULL;

	list = add_link(list, "toto\n");//On ajoute des maillons a la liste
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);

	return (0);
}

//VARIANTES
int add_link(t_list **list, char *str)
{
	*list = malloc();
}

int		main(void)
{
	t_list *list;

	list = NULL;

	add_link(&list, "titi\n");

	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);
	
	return (0);
}
