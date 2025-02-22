#include "libft.h"
#include "wrappers.h"

#include <stdio.h>
#include <limits.h>

#define TESTED_INT INT_MIN

int     main(void)
{
    printf("%d\n", ft_printf("%c\n", TESTED_INT));
}