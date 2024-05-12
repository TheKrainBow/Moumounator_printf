#include "libft.h"
#include <stdio.h>

#define TESTED_INT -42

int     main(void)
{
    printf("%d\n", ft_printf("%i\n", TESTED_INT));
}