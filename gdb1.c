/* Source code for CSE30 HW1 GDB exercise 5.1.
 * Taken and modified from Geoff Kuenning's HMC CS105 Debugging assignment.*/
#include <stdio.h>
#include <stdlib.h>

int loop_while(int a, int b)
{
    int i = 0;
    int result = a;
    while (i < 256) {
        result += a;
        a -= b;
        i += b;
    }
    return result;
} 

int main(int argc, char *argv[])
{
    printf("%d\n", loop_while(atoi(argv[1]), 16));
    return 0;
}
