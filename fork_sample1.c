/*

Forks are used to create a new process,which is called Child Process
Child Process uses same Program Counter,CPU Registers and same files used in parent proess.

Negative Value: creation of a child process was unsuccessful.
Zero: Returned to the newly created child process.
Positive value: Returned to parent or caller. The value contains process ID of newly created child process.

*/


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
//printf("PID of fork_sample1.c is %d\n",getpid()); 
//printf("PPID of fork_sample1.c is %d\n",getppid()); 

fork(); // creates 2^1 process = 2
printf("After Fork Call\n");
printf("PID of fork_sample1.c is %d\n",getpid()); 
printf("PPID of fork_sample1.c is %d\n\n",getppid()); 

//printf("Hello WOrld\n"); //Hello World printed twice in console.

return 0;
}

/*

Output:
After Fork Call
PID of fork_sample1.c is 4633
PPID of fork_sample1.c is 4398

After Fork Call
PID of fork_sample1.c is 4634
PPID of fork_sample1.c is 4633


*/
