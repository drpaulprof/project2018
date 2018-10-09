# include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(){
int child, father;
pid_t  pid,ppid;

pid = fork();

child = getpid();
father =getppid();

if (pid < 0)  {

fprintf(stderr, "\n fork failed");

return 1;
}

else  if (pid == 0) {

execlp("/bin/ls", "ls",NULL);

}
else {

printf("\n I am parent waiting...in parent, for my dear child %d\t %d \t", child, father);
wait (NULL);
printf("\n my child finished..I am going to heaven %d\t", father);
}

return 0;
}



     


	

