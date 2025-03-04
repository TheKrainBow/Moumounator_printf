#include "libft.h"
#include "wrappers.h"

#include <stdio.h>
#include <limits.h>

#define TESTED_INT INT_MAX

int     main(void)
{
    printf("%d\n", ft_printf("%d\n", TESTED_INT));;
}