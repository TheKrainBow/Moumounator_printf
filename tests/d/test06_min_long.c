#include "libft.h"
#include <stdio.h>
#include <limits.h>

#define TESTED_INT LONG_MIN

int     main(void)
{
    printf("%d\n", ft_printf("%d\n", TESTED_INT));;
}