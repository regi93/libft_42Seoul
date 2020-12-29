/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:59:41 by juyou             #+#    #+#             */
/*   Updated: 2020/12/28 23:11:29 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_calloc(int count, int size)
{
	int *ptr;
	
	ptr = (int *)malloc(size * count);
	ft_bzero(ptr, count);
	return (ptr);
}