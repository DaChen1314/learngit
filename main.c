#include <stdlib.h>
int* f(void)
{
int* x = malloc(10 * sizeof(int));
return x;
}
int main(void)
{
int* x = f();
free(x);
printf(Hello Git!);
return 0;
}

