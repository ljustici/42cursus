/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljustici <ljustici@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:26:47 by ljustici          #+#    #+#             */
/*   Updated: 2022/04/21 19:52:32 by ljustici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *dest;
	
	dest = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return ((*void)dest);
}
