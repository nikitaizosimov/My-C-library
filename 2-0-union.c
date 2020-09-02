
#include <unistd.h>

int    main(int argc,char **argv)
{
    char ascii[256] = {0};
    
        if (argc == 3)
        {
            while (*argv[1])
            {
                    if (ascii[(int)*argv[1]] == 0)
                    {
                        write(1, argv[1], 1);
                        ascii[(int)*argv[1]] = 1;
                    }
                argv[1]++;
            }
            while (*argv[2])
            {
                    if (ascii[(int)*argv[2]] == 0)
                    {
                        write(1, argv[2], 1);
                        ascii[(int)*argv[2]] = 1;
                    }
                argv[2]++;
            }
        }
    write(1, "\n", 1);
    return (0);
}

