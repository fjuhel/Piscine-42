/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuhel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 19:06:41 by fjuhel            #+#    #+#             */
/*   Updated: 2016/07/09 19:06:44 by fjuhel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

int   brutforce_cols(int line)
{
  int n;
  int supp;
  int change_etage;
  int i;
  int etage;

  etage = 1;
  i = 1;
  supp = 0;
  n = 1;
  while (i < line)
  {
    change_etage = (etage * 3) + (etage * (etage - 1)) / 2;
    n += 2;
    if (i == change_etage)
    {
      etage++;
      if (etage % 2 == 0 && etage != 2)
        supp += 2;
      n = n + 4 + supp;
    }
    i++;
  }
  return (n);
}

void  print_blanc(int n)
{
  while (n > 0)
  {
    ft_putchar(' ');
    n--;
  }
}

void  print_line(int size, int etage, int line, int dec)
{
  int lines;
  int n;
  int porte;
  int fb;
  int co;

  lines = (size * 3) + (size * (size - 1)) / 2;
  fb = lines - line;
  print_blanc(dec - brutforce_cols(line) / 2);
  n = brutforce_cols(line);
  ft_putchar('/');
  while (n > 0)
  {
    if (size % 2 == 0)
      co = 1;
    else
      co = 0;
    if ((line > lines - size + co) && ((n + fb - co > dec - (size / 2)) && (n + fb + co <= 1 + dec + (size / 2))))
    {
      if (size >= 5 && fb + co == size / 2 && n == dec - size / 2 - fb + 2 + co)
        ft_putchar('$');
      else
        ft_putchar('|');
    }
    else
      ft_putchar('*');
    n--;
  }
  ft_putchar('\\');
  ft_putchar('\n');
}

void  sastantua(int size)
{
  int lines;
  int line;
  int etage;
  int dec;
  int change_etage;

  change_etage = 3;
  etage = 1;
  line = 1;
  lines = (size * 3) + (size * (size - 1)) / 2;
  dec = brutforce_cols(lines) / 2;
  while (line <= lines)
  {
    print_line(size, etage, line, dec);
    if (line == change_etage)
    {
      etage++;
      change_etage = (etage * 3) + (etage * (etage - 1)) / 2;
    }
    line++;
  }
}

int   main(void)
{
  int i;

  for (i = 5; i < 11; i++)
  {
    sastantua(i);
  }
  return (0);
}
