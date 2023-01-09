extern int x;
int func();
int g()
{
	x = func();
	return x;
}