/**
* print_name - a function that prints a name
* @f: function pointer
* @name: pointer to the name to be printed
* Return: returns nothing
*/

void print_name(char *name, void (*f)(char *name))
{

f(name);
}
