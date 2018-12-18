#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t apid;
	pid_t parent_pid;

	apid = getpid();
	parent_pid = getppid();
	printf("child: %u\n", apid);
	printf("parent: %u\n", parent_pid);
	return (0);
}
