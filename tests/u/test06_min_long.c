#include "libft.h"
#include <stdio.h>
#include <limits.h>

#define TESTED_INT LONG_MIN

int     main(void)
{
    printf("%d\n", ft_printf("%u\n", TESTED_INT));;
}