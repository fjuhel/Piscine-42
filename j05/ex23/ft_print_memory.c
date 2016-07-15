/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:08:05 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/11 14:08:06 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void		ft_putnbr_hex(int octet)
{
	char const *base = "0123456789abcdef";
	write(1, base + (octet % 16), 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *str;
	str = addr;

	char *stock_add = addr;
	
	ft_putnbr_base((void*)&addr, "0123456789ABCDEF");
	ft_putchar('\n');


	printf("variable A is at address: %p\n", (void*)&addr);
	
	return (addr);
}

int main()
{
	int n = 123456;
	int *p;

	p = &n;
	ft_print_memory(p, 12);
	return 0;
}

void			ft_print_memory(const void *addr, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		print_number((const unsigned char *)addr, size, i);
		print_characters((const unsigned char *)addr, size, i);
		write(1, "\n", 1);
		i += 16;
	}
}