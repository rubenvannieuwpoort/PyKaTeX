#define PY_SSIZE_T_CLEAN
#include <Python.h>

#include "katex.h"

// wrapper for Python
static PyObject* py_hello(PyObject* self, PyObject* args) {
    hello();
    Py_RETURN_NONE;
}

static PyMethodDef Methods[] = {
    {"hello", py_hello, METH_NOARGS, "Print hello"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "pykatex",
    NULL,
    -1,
    Methods
};

PyMODINIT_FUNC PyInit_pykatex(void) {
    return PyModule_Create(&module);
}
