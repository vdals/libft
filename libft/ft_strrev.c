/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnydia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:41:25 by jnydia            #+#    #+#             */
/*   Updated: 2019/09/13 14:44:25 by jnydia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	sstr;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = -1;
	while (++j < --i)
	{
		sstr = str[j];
		str[j] = str[i];
		str[i] = sstr;
	}
	return (str);
}