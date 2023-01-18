#include <stdio.h>
int main()
/*dowhile loop exicuted at least once*/
{
    int i;
    i = 0;
    do
    {

        printf("%d", i);
        i = i + 1;
        printf("\n");
    } while (i < 10);
    return 0;
}