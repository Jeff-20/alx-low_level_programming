#include <unistd.h>

int _print(char c)
{
return(write (1, &c, 1));
}

int main(char c)
{
c = "hello";
_print(c)
return (0)
}    
