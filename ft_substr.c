/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:11:52 by hbrulin           #+#    #+#             */
/*   Updated: 2019/11/12 15:31:55 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*s2;

	if (!s)
		return (NULL);
	i = 0;
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = (char *)malloc(sizeof(*s2) * len + 1);
	if (s2 == NULL)
		return (NULL);
	while (len)
	{
		s2[i] = s[start];
		start++;
		i++;
		len--;
	}
	s2[i] = '\0';
	return (s2);
}
