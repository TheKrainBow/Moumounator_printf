#include "libft.h"
#include <stdio.h>
#include <limits.h>

int     main(void)
{
    int tmp = INT_MIN;
    printf("%d\n", ft_printf("%p\n", tmp));
}