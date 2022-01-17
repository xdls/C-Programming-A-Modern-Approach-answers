#include <stdio.h>

int main(void)
{
    int i,j;
    i=0;
    j=1;

    printf("%d",(i>j)?(i>j):(i>=j)-1);
}