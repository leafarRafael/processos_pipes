

#include "/home/rafael/teste/lib/lib_get_print/includes/get_next_line.h"
#include "/home/rafael/teste/lib/lib_get_print/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    int fd;
    char texto[50];
    char *teste;

    fd = open("pipe.txt", O_WRONLY | O_APPEND);
    while (1)
    {
        scanf("%s", teste);
        write(fd, teste, ft_strlen(teste));
        write(fd, "\n", 1);
        if (ft_strncmp(teste, "EXIT", 4) == 0)
            break ;

    }
}
