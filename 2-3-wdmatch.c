
#include <unistd.h>

int        main(int argc,char **argv)
{
    if (argc == 3)
    {
        int l = 0;
        int i = 0;
        while (argv[1][l])
        {
            l++;
        }
        while (*argv[2] && i < l)
        {
            if (*argv[2] == argv[1][i])
            {
                i++;
            }
            argv[2]++;
        }
        if (i == l)
        {
            write(1, argv[1], l);
        }
        
    }
    write(1, "\n", 1);
    return (0);
}
