#include <stdio.h>
#include <stdlib.h>

void hello_yocto(void);

int main(int argc, char **argv)
{
    printf("\nIn %s calling function: hello_yocto\n", __FUNCTION__);
    hello_yocto();
    return 0;
}

void hello_yocto(void)
{
    printf("\nHello Yocto\n");
    printf("devtool test on poky 2.0.1\n\n");
}
