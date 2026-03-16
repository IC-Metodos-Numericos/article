#include <stdio.h>

// Função para o método de Newton Raphson unidimensional
// Parâmetros
// f(x) - type: double pointer - função cuja raiz se busca
// df(x) - type: double pointer - derivada de f
// x0 - type: double - Valor inicial 
// n - type: Int - Quantidade de iterações
// retorno - type: double - raiz aproximada da função
double newtonIter(double (*f)(double), double (*df)(double),  double x0, int n) {
    double x = x0;
    for (int i = n; i > 0; i--) {
        double xn = x - f(x) / df(x);
        x = xn;
    }
    return x;
}

double f(double x) return x*x - 2;   

double df(double x) return 2*x;   


int main() {
    double x0 = 1.0;
    int n = 10;
    double root = newtonIter(f, df, x0, n);
    printf("%.8f",root);
    return 0;
}


