#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int opciones,i,ix,iz,longitud,id_product;
void add_data();
void show_data();
void specific_product();
void general_products();

struct {
    char nombre[25];
    float costo;
    float venta;
    int id;
    int vendidos;
    float ganancias;
}productos[2];

int main(){
    while(1){
    //system("cls");
    printf("\n\t\tOpciones");
    printf("\n1.Agregar productos");
    printf("\n2.Imprimir listado de productos");
    printf("\n3.Calcular ganancias de producto especifico");
    printf("\n4.Calcular ganancias en general");
    printf("\nIngrese la opcion que desea utilizar: ");
    scanf("%i",&opciones);  
    switch(opciones){
        case 1:
            add_data();
                continue;
            
        case 2:
            show_data();
                continue;
        case 3:
            specific_product();
                continue;
        case 4:
            general_products();
                continue;
        default:
        printf("xd");
            continue;
    }

    return 0;
    }
}

void add_data(){
    system("cls");
    printf("\nIngrese la cantidad de productos que desea agregar: ");
    scanf("%i",&longitud);
    for(i=0;i<longitud;i++){
                system("cls");
                productos[i].id=i+1;
                printf("Ingrese el nombre del producto no.%i: ",productos[i].id);
                scanf("%s",productos[i].nombre);
                printf("Ingrese el precio de compra del producto no.%i: ",productos[i].id);
                scanf("%f",&productos[i].costo);
                printf("Ingrese el precio de venta del producto no.%i: ",productos[i].id);
                scanf("%f",&productos[i].venta);
            }
}

void show_data(){
    system("cls");
        for(ix=0;ix<longitud;ix++){
            printf("\nNombre producto no.%i: %s",productos[ix].id,productos[ix].nombre);
            printf("\nCosto producto no.%i: %.2f",productos[ix].id,productos[ix].costo);
            printf("\nPrecio producto no.%i: %.2f",productos[ix].id,productos[ix].venta);
    }
}

void specific_product(){
    system("cls");
        for(ix=0;ix<longitud;ix++){
            printf("\nNombre producto no.%i: %s",productos[ix].id,productos[ix].nombre);
            printf("\nCosto producto no.%i: %.2f",productos[ix].id,productos[ix].costo);
            printf("\nPrecio producto no.%i: %.2f",productos[ix].id,productos[ix].venta);
    }
        printf("\nIngrese el id del producto del que desea calcular ganancias: ");
        scanf("%i",&id_product);
        int iterativa = id_product-1;
        printf("\nIngrese la cantidad de productos vendidos: ");
        scanf("%i",&productos[iterativa].vendidos);
        productos[iterativa].ganancias = ((productos[iterativa].venta*productos[iterativa].vendidos)-(productos[iterativa].costo*productos[iterativa].vendidos));
        printf("\nEl costo del producto %s es de: %.2f y el precio de venta es: %.2f\nVendidos: %i\nGanancias totales: %.2f",productos[iterativa].nombre,productos[iterativa].costo,productos[iterativa].venta,productos[iterativa].vendidos,productos[iterativa].ganancias);
}

void general_products(){
    for(iz=0;iz<longitud;iz++){
        printf("\nIngrese la cantidad de productos %s vendidos: ",productos[iz].nombre);
        scanf("%i",&productos[iz].vendidos);
        productos[iz].ganancias = ((productos[iz].venta*productos[iz].vendidos)-(productos[iz].costo*productos[iz].vendidos));
        printf("\nEl costo del producto %s es de: %.2f y el precio de venta es: %.2f\nVendidos: %i\nGanancias totales: %.2f",productos[iz].nombre,productos[iz].costo,productos[iz].venta,productos[iz].vendidos,productos[iz].ganancias);  
        }
}