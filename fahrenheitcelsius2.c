/* fahrenheitcelsius.c
*/

#include <stdio.h>
int main(void)

{
int fahr;
double answer;

for (fahr = -50; fahr <= 120; fahr = fahr +5)
{
    answer =(5.0/9.0)*(fahr-32);
    printf( "f - %3d c - %6.1f\n", fahr, answer);
}
return 0;
}