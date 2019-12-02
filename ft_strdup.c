/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:41:58 by hbrulin           #+#    #+#             */
/*   Updated: 2019/12/02 14:48:22 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s_len;
	char	*dst;

	s_len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * s_len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s1);
	dst[s_len] = '\0';
	return (dst);
}
