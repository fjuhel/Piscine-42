/* strcpy example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[8];
  char str3[12];
  //strcpy (str2,str1);
  strcpy (str3,"copy successful");
  //ft_strcpy (str2,str1);
  //ft_strcpy (str3,"copy successful");
  //ft_strcpy (str2,str1);
  //ft_strcpy (str3,"copy successful");
  
  
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}


/* strncpy example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]= "To be or not to be";
  char str2[40];
  char str3[40];

  /* copy to sized buffer (overflow safe): */
  strncpy ( str2, str1, sizeof(str2) );
  //ft_strncpy( str2, str1, sizeof(str2) );
  /* partial copy (only 5 chars): */
  strncpy ( str3, str2, 5 );
  //ft_strncpy ( str3, str2, 5 );
  str3[5] = '\0';   /* null character manually added */

  puts (str1);
  puts (str2);
  puts (str3);

  return 0;
}


/* strstr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a simple string";
  char * pch1;
  char * pch2;
  pch1 = strstr (str,"");
  pch2 = ft_strstr(str,"");
  printf("%s  |  %s", pch1, pch2);
  return 0;
}
//test strcmp

#include <stdio.h>
#include <string.h>

int main ()
{
  char s1[] = "pomme";
  char s2[] = "pokme";
  char s3[] = "pomoe";

  printf("%d ?= %d\n", strcmp(s1, s2), ft_strcmp(s1,s2));
  printf("%d ?= %d\n", strcmp(s1, s3), ft_strcmp(s1,s3));
  return 0;
}


//test strupcase

#include <stdio.h>
#include <string.h>

int main ()
{
  char s1[] = "pomme";
  char s2[] = "pokme";
  char s3[] = "pomoe";
  int k = 0;

  printf("%d ?= %d\n", strncmp(s1, s2, k), ft_strncmp(s1,s2, k));
  printf("%d ?= %d\n", strncmp(s1, s3, k), ft_strncmp(s1,s3, k));
  return 0;
}

// test strlozcase
#include <stdio.h>
int main()
{
  char s1[] = "BaObAb";
  char s2[] = "BI()&$@BLO[22";

  printf("%s  ->  %s\n", s1, ft_strlowcase(s1));
  printf("%s  ->  %s\n", s2, ft_strlowcase(s2));
  return (0);
}


//strcapitalize


#include <stdio.h>
int main()
{
  char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  char s2[] = "bI()&$@BLO[22";

  printf("%s  ->", s1);
  printf("%s\n",ft_strcapitalize(s1));
  printf("%s  ->", s2);
  printf("%s\n",ft_strcapitalize(s2));
  return (0);
}

//strisalpha

#include <stdio.h>
int main()
{
  char str1[] = "abyzABYZ";
  char str2[] = "abyz@[`{ABYZ";
  char str3[] = "";

  printf("%d\n", ft_str_is_alpha(str1));
  printf("%d\n", ft_str_is_alpha(str2));
  printf("%d\n", ft_str_is_alpha(str3));
  return 0;
}

//str is numeric

#include <stdio.h>
int main()
{
  char str1[] = "0123456789";
  char str2[] = "01234/:56789";
  char str3[] = "";

  printf("%d\n", ft_str_is_numeric(str1));
  printf("%d\n", ft_str_is_numeric(str2));
  printf("%d\n", ft_str_is_numeric(str3));
  return 0;
}

// str lower case
#include <stdio.h>
int main()
{
  char str1[] = "abcdefghijklmnopqrstuvxyz";
  char str2[] = "abcdefghijklmn`{opqrstuvxyz";
  char str3[] = "";

  printf("%d\n", ft_str_is_lowercase(str1));
  printf("%d\n", ft_str_is_lowercase(str2));
  printf("%d\n", ft_str_is_lowercase(str3));
  return 0;
}


/// str is uppercase
#include <stdio.h>
int main()
{
  char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char str2[] = "ABCDEFGHIJKL@[MNOPQRSTUVWXYZ";
  char str3[] = "";

  printf("%d\n", ft_str_is_uppercase(str1));
  printf("%d\n", ft_str_is_uppercase(str2));
  printf("%d\n", ft_str_is_uppercase(str3));
  return 0;
}

// is printable
#include <stdio.h>
int main()
{
  char str1[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyz0123456789";
  char str2[] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvxyz0123456789";
  char str3[] = "";
  char str4[] = "\0";

  printf("%d\n", ft_str_is_printable(str1));
  printf("%d\n", ft_str_is_printable(str2));
  printf("%d\n", ft_str_is_printable(str3));
  printf("%d\n", ft_str_is_printable(str4));
  return 0;
}
// strcat 

/* strcat example */
#include <stdio.h>
#include <string.h>

void t1()
{
  char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
}

void t2()
{
  char str[80];
  strcpy (str,"these ");
  ft_strcat (str,"strings ");
  ft_strcat (str,"are ");
  ft_strcat (str,"concatenated.");
  puts (str);
}

int main()
{
  t2();
  return 0;
}

//strncat

/* strncat example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  
  strncat (str1, str2, 6);
  //ft_strncat (str1, str2, 6);
  puts (str1);
  return 0;
}

/* strncat example */

#include <string.h>

int main ()
{
  char str1[20];
  char str2[20];
  strcpy (str1,"To be ");
  strcpy (str2,"or not to be");
  
  printf("%lu\n", strlcat (str1, str2, 8));
  //printf("%d\n", ft_strlcat (str1, str2, 8));

  puts (str1);
  return 0;
}

