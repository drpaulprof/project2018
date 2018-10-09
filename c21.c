# include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(){
int child, father;
pid_t  pid,ppid;

pid = fork();
printf("My pid %d\t",getpid());
if (pid < 0)  {

fprintf(stderr, "\n fork failed");

return 1;
}

else  if (pid == 0) {
execlp("/home/drpaulprof/c1", "c1",NULL);
printf("\nI am process.. in child, \t = %d", getpid());
}
else {
execlp("/bin/ls", "ls",NULL);
wait (NULL);
printf("\n my child finished..I am going to heaven %d\t", getpid());
}

return 0;
}



     


	

