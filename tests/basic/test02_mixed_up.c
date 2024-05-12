#include "libft.h"
#include <stdio.h>

int     main(void)
{
    printf("%d\n", ft_printf("This is some serious testing...\n%c %d %i %p %% %s %u %x %X\nDid you survived it?", 42, 42, 42, 42, "42", 42, 42, 42));
}