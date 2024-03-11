
#include "/home/rafael/teste/lib/lib_get_print/includes/get_next_line.h"
#include "/home/rafael/teste/lib/lib_get_print/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    int fd;
    int buf;
    char *buffer;
    buf = 1;

    fd = open("pipe.txt", O_RDONLY);
    buffer = NULL;
    while (buffer == NULL)
    {
        buffer = get_next_line(fd);
        if (buffer)
        {
            printf("%s", buffer);
            if (ft_strncmp(buffer, "gato", 4) == 0)
                break ;
        }
        free(buffer);
        buffer = NULL;
    }
}
