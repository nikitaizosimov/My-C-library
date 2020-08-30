#include <unistd.h>

int letter_count(char c)
{
    int repeat;
    if (c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else if (c >= 'A' && c <= 'Z')
    {
        repeat = c - 'A' + 1;
    } else {
        repeat = 1;
    }
    return (repeat);
}
int     main(int argc,char **argv)
{
    if (argc == 2)
    {
        while (*argv[1])
        {
            int i = letter_count(*argv[1]);
            while (i--) {
                write(1, argv[1], 1);
            }
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

