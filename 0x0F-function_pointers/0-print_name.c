/**
 * print_name - prints
 * @name: param a
 * @f: pointer ro function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
