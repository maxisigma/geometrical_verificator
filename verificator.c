#include <stdio.h>
#include <math.h>

int main() {
    float xCirculo, yCirculo, rCirc;
    float xRect1, yRect1, xRect2, yRect2;
    float xPunto, yPunto, d;

    // Ingreso de datos
    printf("Ingrese la coordenada X del centro del círculo: ");
    scanf("%f", &xCirculo);
    printf("Ingrese la coordenada Y del centro del círculo: ");
    scanf("%f", &yCirculo);

    printf("Ingrese las coordenadas X e Y del primer vértice del rectángulo: ");
    scanf("%f %f", &xRect1, &yRect1);
    printf("Ingrese las coordenadas X e Y del segundo vértice del rectángulo: ");
    scanf("%f %f", &xRect2, &yRect2);

    printf("Ingrese el radio del círculo: ");
    scanf("%f", &rCirc);

    printf("Ingrese la coordenada X del punto a analizar: ");
    scanf("%f", &xPunto);
    printf("Ingrese la coordenada Y del punto a analizar: ");
    scanf("%f", &yPunto);

    // Validación
    if (xRect1 == xRect2 || yRect1 == yRect2) {
        printf("Las coordenadas elegidas para los vértices del rectángulo no son válidas.\n");
        return 1;
    }

    // Ordenar los vértices
    if (xRect1 > xRect2) {
        float aux = xRect1;
        xRect1 = xRect2;
        xRect2 = aux;
    }
    if (yRect1 < yRect2) {
        float aux = yRect1;
        yRect1 = yRect2;
        yRect2 = aux;
    }

    // Cálculo de distancia al centro del círculo
    d = sqrt(pow(xPunto - xCirculo, 2) + pow(yPunto - yCirculo, 2));
    printf("La distancia al centro del círculo es: %f\n", d);

    // Evaluaciones
    int dentroRect = (xPunto >= xRect1 && xPunto <= xRect2 && yPunto >= yRect2 && yPunto <= yRect1);
    int dentroCirc = (d <= rCirc);

    if (dentroRect && dentroCirc) {
        printf("El punto está dentro del círculo y del rectángulo.\n");
    } else if (dentroCirc) {
        printf("El punto está solo dentro del círculo.\n");
    } else if (dentroRect) {
        printf("El punto está solo dentro del rectángulo.\n");
    } else {
        printf("El punto está fuera del círculo y del rectángulo.\n");
    }

    return 0;
}
