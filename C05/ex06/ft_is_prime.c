/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alellouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:35:11 by alellouc          #+#    #+#             */
/*   Updated: 2021/02/25 13:43:13 by alellouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		div;

	div = 3;
	if (nb <= 1 || (nb % 2) == 0)
		return (nb == 2);
	while ((div * div) <= nb)
	{
		if ((nb % div) == 0)
			return (0);
		div += 2;
	}
	return (1);
}