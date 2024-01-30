#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * infinite_while - enters an infinite loop
 * Return: always 0
 */
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

/**
 * main - creates 5 zombie processes
 * Return: 0 on success
 */
int main(void)
{
    int i;
    pid_t pid;

    /* Create 5 child processes */
    for (i = 0; i < 5; i++)
    {
        pid = fork();
        if (pid == 0)
        {
            printf("Zombie process created, PID: %d\n", getpid());
            exit(EXIT_SUCCESS);
        }
    }

    /* Wait for all child processes to terminate */
    while (wait(NULL) > 0)
        ;

    /* Call the infinite_while function */
    infinite_while();

    return (0);
}

