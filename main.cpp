#include <Python.h>
#include <object.h>
#include <stdio.h>

int main()
{
	Py_Initialize();
	
	PyObject *module = PyImport_ImportModule("__builtin__");
	PyObject *func = PyObject_GetAttrString(module,"dir");
	PyObject *doc = PyObject_GetAttrString(func,"__doc__");

	printf("%s",PyString_AsString(doc));

	Py_Finalize();
	getchar();
	return 0;
}