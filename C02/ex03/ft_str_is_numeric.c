/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:37:33 by lboulatr          #+#    #+#             */
/*   Updated: 2022/07/08 14:26:39 by lboulatr         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int			i;
	int			x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			x = 1;
		else
			return (0);
		i++;
	}
	return (x);
}