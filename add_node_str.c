/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 09:55:41 by hbrulin           #+#    #+#             */
/*   Updated: 2020/02/25 09:56:01 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		add_node_str(t_list **list, char *content)
{
	t_list	*temp;

	temp = NULL;
	if (!(temp = malloc(sizeof(t_list))))
		return (1);
	if (!(temp->content = ft_strdup(content)))
		return (1);
	temp->next = 0;
	ft_lstadd_back(list, temp);
	return (0);
}
