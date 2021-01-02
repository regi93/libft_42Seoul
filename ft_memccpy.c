/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:24:02 by juyou             #+#    #+#             */
/*   Updated: 2020/12/30 18:52:20 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned char *udst;
	unsigned char *usrc;
	unsigned int idx;

	idx = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (idx < n)
	{
		*udst = *usrc;
		if (*usrc == (unsigned char)c)
			return (++udst);
		idx++;
		udst++;
		usrc++;
	}
	return (NULL);
}
