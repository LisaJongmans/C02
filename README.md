# C02

-norminette
-compile
-functies
-namen + spelling
-main rm

ex09 tijdelijk [IETS MIS MET de str[i - 1] in lijn 40/ de if statement]

#include <stdio.h>
#include <string.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

char  *ft_strcapitalize(char *str)
{
  int i;

  i = 0;
  ft_strupcase(str);
  while (str[i] != '\0')
  {
    while (str[i] >= 65 && str[i] <= 90)
    {
      if ((str[i - 1] >= 65 && str[i - 1] <= 90) || (str[i - 1] >= 97 && str[i -1] <= 122) || (str[i - 1] >= 48 && str[i - 1] <= 57))
      {
        str[i] + 32;
      }
    i++;
    }
    i++;
  }
  return (str);
}

int        main(void)
{
  char str[] = "Hi^36ae[Z}>dw i am s4Rf van";
  
  ft_strcapitalize(str);
  return (0);
}
