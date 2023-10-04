#include <ctype.h>  // isalpha() isdigit()
#include <stdio.h>  // printf()

#include "libft.h"

int main(void)
{
   char c = '0';

   /* Tests for ft_isalpha */
   // printf("isalpha(%c) => %i\n", c, isalpha(c)); 
   // printf("ft_isalpha(%c) => %i\n", c, ft_isalpha(c));

   /* Tests for ft_isdigit */
   // printf("isdigit(%c) => %i\n", c, isdigit(c));
   // printf("ft_isdigit(%c) => %i\n", c, ft_isdigit(c));

   /* Tests for ft_isalnum */
   printf("isalnum(%c) => %i\n", c, isalnum(c));
   printf("ft_isalnum(%c) => %i\n", c, ft_isalnum(c));
}
