# Fork System Call in Linux

## Forks are used to create a new process,which is called Child Process
## Child Process uses same Program Counter,CPU Registers and same files used in parent proess.

## Negative Value: creation of a child process was unsuccessful.
## Zero: Returned to the newly created child process.
## Positive value: Returned to parent or caller. The value contains process ID of newly created child process.

## It creates 2^n processes, n= no.of fork system call

## Author : Phaneendhra
