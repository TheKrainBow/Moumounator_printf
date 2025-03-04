#include "libft.h"
#include "wrappers.h"

#include <stdio.h>
#include <limits.h>

#define TESTED_INT LONG_MIN

int     main(void)
{
    printf("%d\n", ft_printf("%X\n", TESTED_INT));
}