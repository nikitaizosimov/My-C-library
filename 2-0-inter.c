
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char ascii[256] = {0};
        while (*argv[2])
        {
            if (ascii[(int)(*argv[2])] == 0)
            {
                ascii[(int)(*argv[2])] = 1;
            }
            argv[2]++;
        }
        while (*argv[1])
        {
            if (ascii[(int)(*argv[1])] == 1) {
                write(1, argv[1], 1);
                ascii[(int)(*argv[1])] = 0;
            }
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
