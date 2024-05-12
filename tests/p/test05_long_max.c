#include "libft.h"
#include <stdio.h>
#include <limits.h>

int     main(void)
{
    long tmp = LONG_MAX;
    printf("%d\n", ft_printf("%p\n", tmp));
}