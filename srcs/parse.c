/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:38:03 by daviles-          #+#    #+#             */
/*   Updated: 2023/10/12 01:58:40 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_chkduplicate(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = i + 1;
		while (str[j] != NULL)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (ft_printerror("\n"));
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_chknbr(char *str)
{
	int		i;
	long	aux;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
	{
		i++;
		if (str[i] == '\0' || (str[i] < '0' || str[i] > '9'))
			return (ft_printerror("\n"));
	}
	while (str[i] != '\0' )
	{
		if (str[i] < '0' || str[i] > '9')
			return (ft_printerror("\n"));
		i++;
	}
	aux = ft_atol(str);
	if (aux > INT_MAX || aux < INT_MIN)
		return (ft_printerror("\n"));
	return (1);
}

int	ft_chkstr(char **nbrs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*nbrs)
		ft_printerror("\n");
	while (nbrs[i] != NULL)
	{
		ft_chknbr(nbrs[i]);
		i++;
	}
	ft_chkduplicate(nbrs);
	return (1);
}
