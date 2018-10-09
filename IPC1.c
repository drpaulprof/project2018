# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int main() {

int pid; char buffer[250];
strcpy (buffer, "Hi I am testing..");
//buffer = "hello OS" ;
printf("Hi I am in main before fork()..%s\n",buffer);

int fd[2]; // two channels
printf("Two cahnnels, %d,%d ...\n",fd[0],fd[1]);

pid = fork();

if (pid == 0) {
seelp(2);
close(fd[1]);
read(fd[0], &buffer, sizeof(buffer));
printf("I am in thread %d \n",getpid());
printf("\n fd[0]...%d and buffer contains %d",fd[0], buffer);
close(fd[0]);
exit(0);

}

else  {
close(fd[0]);
write(fd[1], &buffer, sizeof(buffer));
printf("\n....I am parent  fd[1]...%d..and buffer contains %d\n",fd[1], buffer);
close(fd[1]);
exit(0);
}
}


