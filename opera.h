#include <math.h>

int som (int a, int b) {
  int result = a + b;
  return result;
}
int sub(int a, int b ) {
  int result = a - b;
  return result;
}
int mult(int a, int b) {
  int result = a * b;
  return result;
  
}
double divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 0.0;  
    } else {
        
        return (double)a / b;
    }
}
double raiz(int x) {
  double result = sqrt(x);
  return result;
}
