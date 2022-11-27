#include <stdio.h>

void triangle(int height,char symbol)
{
	int i,j;
    for(i=1; i<=height; i++) {
        for(j=1; j<=height-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("%c", symbol);
        }
        if(i!=height) {
            puts("");
        }
    }
}

int main()
{
    int Height;
    char Symbol;
    printf("Height = ");
    scanf("%d", &Height);
    fflush(stdin);
    printf("Symbol = ");
    scanf("%c", &Symbol);
	triangle(Height,Symbol);

    return 0;
}
