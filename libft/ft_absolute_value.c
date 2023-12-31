/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absolute_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:42:51 by daviles-          #+#    #+#             */
/*   Updated: 2023/09/20 18:47:00 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

long	ft_absolute_value(long nbr)
{
	if (nbr < 0)
		return (nbr * (-1));
	else
		return (nbr);
}
