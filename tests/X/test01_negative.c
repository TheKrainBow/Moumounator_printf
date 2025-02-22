#include "libft.h"
#include "wrappers.h"

#include <stdio.h>

#define TESTED_INT -42

int     main(void)
{
    printf("%d\n", ft_printf("%X\n", TESTED_INT));
}