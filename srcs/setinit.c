/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setinit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:58:07 by daviles-          #+#    #+#             */
/*   Updated: 2023/10/12 02:06:37 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*init_stacka(char **nbrs)
{
	int		i;
	t_stack	*stack;
	t_stack	*node;

	stack = NULL;
	node = NULL;
	i = 0;
	while (nbrs[i] != NULL)
	{
		node = node_new(nbrs[i]);
		node->index = set_index(nbrs[i], nbrs);
		node_addback(&stack, node);
		i++;
	}
	stack->size_start = i;
	return (stack);
}

int	set_index(char *nbr, char **nbrs)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (nbrs[i] != NULL)
	{
		if (ft_atoi(nbr) >= ft_atoi(nbrs[i]))
			index++;
		i++;
	}
	return (index);
}

char	*argv_tostr(char **argv)
{
	char	*str;
	char	*aux;
	int		i;

	str = (char *)malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 1;
	while (argv[i])
	{
		aux = ft_strjoin(str, argv[i]);
		if (!aux)
			return (free(str), NULL);
		free(str);
		str = aux;
		aux = ft_strjoin(str, " ");
		if (!aux)
			return (free(str), NULL);
		free(str);
		str = aux;
		i++;
	}
	return (str);
}

t_stack	*chkargs_initstack(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**nbrs;
	char	*str;

	stack_a = NULL;
	nbrs = NULL;
	if (argc == 1)
		exit(0);
	else if (argc == 2)
	{
		nbrs = ft_split(argv[1], ' ');
		ft_chkstr(nbrs);
		stack_a = init_stacka(nbrs);
		ft_freematrix(&nbrs);
	}
	else
	{
		str = argv_tostr(argv);
		nbrs = ft_split(str, ' ');
		free(str);
		ft_chkstr(nbrs);
		stack_a = init_stacka(nbrs);
		ft_freematrix(&nbrs);
	}
	return (stack_a);
}
