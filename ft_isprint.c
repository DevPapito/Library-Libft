/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:06:20 by pezio             #+#    #+#             */
/*   Updated: 2026/05/26 20:22:21 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isspecial_protocols(int c)
{
	if (!(c < 32))
		return (0);
	return (1);
}

static	int	ft_isdel_keyboard(int c)
{
	if (c != 127)
		return (0);
	return (1);
}

int	ft_isprint(int c)
{
	if (ft_isspecial_protocols(c) || ft_isdel_keyboard(c))
		return (0);
	return (1);
}
