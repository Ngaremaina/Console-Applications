#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd, count;
    fd=open("sanfoundry.txt",O_WRONLY|O_CREAT);

    count=write(fd,"Linux System Proramming",5);
    if (count!=5)
        perror("write");
    return 0;
}
