#include <Python.h>

int main() {
    // Inicializa o interpretador Python
    Py_Initialize();

    // Importa o módulo Python
    PyObject* pName = PyUnicode_DecodeFSDefault("funcao_python");
    PyObject* pModule = PyImport_Import(pName);
    Py_XDECREF(pName);

    // Verifica se o módulo foi importado com sucesso
    if (pModule != NULL) {
        // Obtém a referência para a função Python
        PyObject* pFunc = PyObject_GetAttrString(pModule, "minha_funcao");

        // Verifica se a função foi encontrada
        if (pFunc != NULL && PyCallable_Check(pFunc)) {
            // Chama a função Python
            PyObject* pValue = PyObject_CallObject(pFunc, NULL);

            // Converte o resultado para uma string C
            if (pValue != NULL) {
                char* result = PyUnicode_AsUTF8(pValue);
                printf("Resultado da função Python: %s\n", result);
                Py_XDECREF(pValue);
            } else {
                PyErr_Print();
            }
            Py_XDECREF(pFunc);
        } else {
            if (PyErr_Occurred()) PyErr_Print();
            printf("Erro: Não foi possível encontrar a função Python\n");
        }
        Py_XDECREF(pModule);
    } else {
        PyErr_Print();
        printf("Erro: Não foi possível importar o módulo Python\n");
    }

    // Finaliza o interpretador Python
    Py_Finalize();

    return 0;
}
