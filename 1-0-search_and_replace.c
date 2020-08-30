
#include <unistd.h>

int     main(int argc,char **argv)
{
    if (argc != 4)
    {
        write(1, "\n", 1);
        return (0);
    }
    
    if (argv[2][1] != '\0' || argv[3][1] != '\0') {
        write(1, "\n", 1);
        return 0;
    }
    while (*argv[1]) {
        if (*argv[1] == argv[2][0])
            *argv[1] = argv[3][0];
        write(1, argv[1], 1);
        argv[1]++;
    }
    
    write(1, "\n", 1);
    return (0);
}
