#include "libft.h"
#include "wrappers.h"

#include <stdio.h>
#include <limits.h>

int     main(void)
{
    long tmp = LONG_MIN;
    printf("%d\n", ft_printf("%p\n", tmp));;
}