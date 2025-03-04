#include "libft.h"
#include "wrappers.h"

#include <stdio.h>
#include <limits.h>

int     main(void)
{
    int tmp = INT_MAX;
    printf("%d\n", ft_printf("%p\n", tmp));
}