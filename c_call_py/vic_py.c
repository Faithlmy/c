#include <python.h>
int main(int argc, char *argv[])
{
	Py_Initialize();
	PyRun_SimpleString("print("faith")");
	Py_Finalize();
	return 0;
}
