#include <stdio.h>

void    ft_ft(int *nbr)
{
    printf("type integer : ");
    scanf("%p", nbr);
    printf("your integer is : %p", nbr);
}


int main(void)
{
    ft_ft('42');
    return 0;
}
