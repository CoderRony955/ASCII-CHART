#include <stdio.h>

/**
 * @brief      Prints the ASCII values of characters
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
    char a = '0';
    int inta = (int)a;
    while (a > 2)
    {
        printf("Ascii value of %c is: %d\n", a, inta);
        a++;
        inta = (int)a;
    }

    return 0;
}
