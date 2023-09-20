/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:19:11 by daviles-          #+#    #+#             */
/*   Updated: 2023/09/20 00:58:21 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	stack_a = chkargs_initstack(argc, argv);
	if (stack_a->size_start < 6)
		sort_small(&stack_a, &stack_b);
	else
		main_sort(&stack_a, &stack_b);
	if (is_sorted(stack_a))
		ft_printf("SORTED\n");
	else
		print_stack(stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
