#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    do {
        x = get_int("Height: ");
    } while (!(x >= 1 && x <= 8));

    // Each output row corresponds to a loop
    for (int i = 1; i <= x; i++)
    {
        // First loop prints x-i spaces for each row while,
        // the Second loop prints i # for each row.
        for (int j = x; j > i; j--) printf(" ");
        for (int k = 0; k < i; k++) printf("#");
        printf("\n");
    }
}
