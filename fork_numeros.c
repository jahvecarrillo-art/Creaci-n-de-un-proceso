#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid;
    pid=fork();
    if (pid<0)
    {
        printf("error en el proceso\n");
        return 1;
    }
    else if (pid==0)
    {
        for (int i=10000; i>=1; i--)
        {
              printf("\033[1;32m");
            printf("Hijo: %d\n", i);
        }
    }
    else
    {
        for (int i=1; i<=10000; i++)
        {
              printf("\033[1;34m");
            printf("Padre: %d\n", i);
        }
    }
    return 0;
}