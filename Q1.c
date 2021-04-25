/* Name: Kartikey Gupta
   Roll_Number: 2019427 */

#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>
#include <dirent.h> 
#include <stdlib.h>


int x=10;


int main(int argc, char const *argv[])
{
	char s[200];
	getcwd(s,200);
	pid_t pid;
	pid=fork();
	if(pid<0){
		fprintf(stderr, "%s\n", "Fork Failed");
	}
	else if(pid==0){
		while(x>-90){
			x--;
		printf("%d\n", x);

		}
	}
	else{
		pid_t pid1=waitpid(-1,NULL,0);

		while(x<100){
			x++;
			printf("%d\n", x);

		}

		
	}
	return 0;
}