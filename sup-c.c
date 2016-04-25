#include <stdio.h>
#include <stdlib.h>

void hello_yocto(void);
int foo_bar(void);

int main(int argc, char **argv)
{
    printf("\nIn %s calling function: hello_yocto\n", __FUNCTION__);
    hello_yocto();
    foo_bar();
    printf("Exiting...\n\n");
    return 0;
}

void hello_yocto(void)
{
    printf("\nHello Yocto\n");
    printf("devtool test on poky 2.0.1\n");
}

int foo_bar(void)
{
    return 0;
}
