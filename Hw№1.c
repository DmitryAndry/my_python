#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
    int count_digits(char *s);
    int i=0;
{
    int count = 0;
    for(i=0; s[i] != 0 ; i++)
        if(s[i] >= '0' && s[i] <= '9')
            count++;
    return count;
};
}
