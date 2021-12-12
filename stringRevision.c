#include <stdio.h>
#include <string.h>

int main()
{
    char a[7] = "Dhruv ", b[6] = " ", c[7];
/*    strcat(a, b);  ///a = a + b;
    printf("%s\n", a); */
/*    strcpy(a, b);  ///a = b;
    printf("%s", a);  */
    strcat(" ", a);
    printf("%s", a);
    return 0;
}
