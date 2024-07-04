#include <stdio.h>

 char   *ft_strcapitalize(char *str)
 {
    int i;

    i = 0;

    while(str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
        {
            if (i = 0)
            {
                str[i] += 32;

            }
            else
            {
                str[i] -=32;
            }
        }
        i++;
    }return str;
    
 }
 int main()
 {
    printf("%s\n",ft_strcapitalize( "salut" ));
 }