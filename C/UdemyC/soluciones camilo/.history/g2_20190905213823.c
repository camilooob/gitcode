#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the moutain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    int max_height, idx_height;
    // game loop
    while (1)
    {
        max_height = 0;
        idx_height = 0;
        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain.
            scanf("%d", &mountainH);
            if (mountainH > max_height)
            {
                max_height = mountainH;
                idx_height = i;
            }
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        printf("%d\n", idx_height); // The index of the mountain to fire on.
    }
    return 0;
}
