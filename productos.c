#include <stdio.h>
int opciones,i,ix,longitud;

struct {
    char nombre[25];
    float costo;
    float venta;
    int id;
    int vendidos;
}productos[2];


int main(){
    printf("\n\t\tOpciones");
    printf("\n1.Agregar productos");
    printf("\n2.Imprimir listado de productos");
    printf("\n3.Calcular ganancias de producto especifico");
    printf("\n4.Calcular ganancias en general");
    printf("\nIngrese la opcion que desea utilizar");
    scanf("%i",&opciones);
    
    switch(opciones){
        case 1:
        printf("\nIngrese la cantidad de productos que desea agregar: ");
        scanf("%i",&longitud);
            for(i=0;i<longitud;i++){
                productos[i].id=i+1;
                printf("Ingrese el nombre del producto no.%i: ",productos[i].id);
                scanf("%s",productos[i].nombre);
                printf("Ingrese el precio de compra del producto no.%i: ",productos[i].id);
                scanf("%f",&productos[i].costo);
                printf("Ingrese el precio de venta del producto no.%i: ",productos[i].id);
                scanf("%f",&productos[i].venta);
            }
                    for(ix=0;ix<longitud;ix++){
        printf("\nNombre producto no.%i: %s",productos[ix].id,productos[ix].nombre);
        printf("\nCosto producto no.%i: %.2f",productos[ix].id,productos[ix].costo);
        printf("\nPrecio producto no.%i: %.2f",productos[ix].id,productos[ix].venta);
    }
            break;
            /*
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;*/
        default:
        printf("xd");
            break;
    }

    return 0;
}
