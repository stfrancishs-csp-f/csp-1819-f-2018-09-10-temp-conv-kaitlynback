/* fahrenheitcelsius.c
*/

#include <stdio.h>
int main(void)

{
int fahr;

for (fahr = -100; fahr <= 300; fahr = fahr +20)
{
    printf( "f - %3d c - %6.lf\n", fahr, (5.0/9.0)*(fahr-32));
}
}