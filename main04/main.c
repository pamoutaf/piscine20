ex00
#include <stdio.h>
#include <string.h>
int        main(void)
{
    char str[50] = "aoieaeia%+/.9";
    printf("Result    : %d\n", ft_strlen(str));
    printf("Should be : %lu", strlen(str));
}

ex01
#include <stdio.h>
#include <string.h>
int        main(void)
{
    ft_putstr("12342589832");
    return (0);
}

ex02
#include <stdio.h>
#include <string.h>
int main(void)
{
    ft_putnbr(-2147483648);
}

ex03
/* Spaces = space, form-feed ('\f'),
              newline  ('\n'),  carriage   return
              ('\r'),  horizontal tab ('\t'), and
              vertical tab ('\v')
              */
#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("Result    : %d", ft_atoi(" ---+--+1234ab567"));
    printf("Should be : -1234");
}

ex04
#include <stdio.h>
#include <string.h>
int        main(void)
{
    ft_putnbr_base(-420, "01");
    write(1, "\n", 1);
    ft_putnbr_base(420, "01");
    write(1, "\n", 1);
    ft_putnbr_base(420, "0123456789abcdef");
    write(1, "\n", 1);
    ft_putnbr_base(-420, "0123456789abcdef");
    write(1, "\n", 1);
    ft_putnbr_base(420, "poneyvif");
    write(1, "\n", 1);
    ft_putnbr_base(0000070, "01");
    return (0);
}
ex05
#include <stdio.h>

int    main(void)
{
    printf("%d\n", ft_atoi_base("+--A8214F3", "0123456789ABCDEF"));
    return (0);
}