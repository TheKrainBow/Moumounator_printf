#include "libft.h"
#include <stdio.h>

#define TESTED_STRING "Some basic string"

int     main(void)
{
    printf("%d\n", ft_printf("%s\n", TESTED_STRING));
}