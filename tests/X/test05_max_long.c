#include "libft.h"
#include <stdio.h>
#include <limits.h>

#define TESTED_INT LONG_MAX

int     main(void)
{
    printf("%d\n", ft_printf("%X\n", TESTED_INT));
}