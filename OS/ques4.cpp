#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct stat statbuf;
    int fd;
    if (argc != 2)
    {
        printf("\nWrong no. of arguments\n");
        exit(0);
    }

    fd = open(argv[1], 0, 0744);
    if (fd == -1)
    {
        printf("Fie not opened\n");
        exit(0);
    }
    fstat(fd, &statbuf);
    close(fd);
    printf("Owner uid = %d\n", statbuf.st_uid);
    printf("Group id = %d\n", statbuf.st_gid);
    printf("Access Permission = %d\n", statbuf.st_mode);
    printf("Size = %lld\n", statbuf.st_size);
    printf("Number of Links = %d\n", statbuf.st_nlink);
    printf("Last access time = %s\n", ctime(&statbuf.st_atime));
    printf("Last modified time = %s\n", ctime(&statbuf.st_mtime));

    return (0);
}