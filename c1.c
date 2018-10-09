# include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(){

pid_t  pid,ppid;

pid = fork();

printf("\n child process..in Main  id \t = %d", getpid());
printf("\n I am father my...in main  id \t = %d ",getppid());

if (pid < 0)  {

fprintf(stderr, "\n fork failed");

return 1;
}

else  if (pid == 0) {

printf("\nI am process.. in child, \t = %d", getpid());
printf("\ndo you know my father. I love him \t= %d",getppid());

execlp("/bin/ls", "ls",NULL);

}
else {

printf("\n I am parent waiting...in parent, for my dear child %d\t %d \t", getpid(), getppid());
wait (NULL);
printf("\n my child finished..I am going to heaven %d\t", getppid());
}

return 0;
}



     


	

