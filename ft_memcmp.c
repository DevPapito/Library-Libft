
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pezio <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:03:12 by pezio             #+#    #+#             */
/*   Updated: 2026/05/28 20:00:07 by pezio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *string1;
	const char *string2;

	string1 = (const char *)s1;
	string2 = (const char *)s2;
	return (ft_strncmp(string1, string2, n));
}
