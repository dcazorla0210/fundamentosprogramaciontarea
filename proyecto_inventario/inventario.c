/*sitema de inventario don regalon*/
#include <stdio.h>
#ifdef _WIN32 || _WIN64
 #include <windows.h>
#endif // DEBUG
void limpiar();


int seleccion[20];
int main(){

     do{
     	printf("INTRODUSCA UNA OPCION:\n");
        printf("1.FACTURACION:\n");
        printf("2.ADMINISTRACION\n");
        printf("3.REPORTES\n");
        printf("0.SALIR\n");
       scanf("%d",&seleccion[1]);
       
       switch (seleccion[1])
       {
       case 1:
         printf("----------------FACTURACION------------------\n");
        break;

        case 2:
        printf("----------------ADMINISTRACION------------------\n");
        do
        {
          printf("INTRODUSCA UNA OPCION:\n");
          printf("1.REGISTAR CLIENTES:\n");
          printf("2.REGISTRAR PRODUCTOS:\n");
          printf("3.REGISTRAR DEPARTAMENTOS:\n");
          printf("0.VOLVER\n");
          scanf("%d",&seleccion[2]);
          switch (seleccion[2])
          {
          
               case 1:
               do{
                
          
                    printf("INTRODUSCA UNA OPCION\n");
                    printf("1.REGISTAR CLIENTES\n");
                    printf("2.BUSCAR CLIENTES\n");
                    printf("3.MODIFICAR CLIENTES\n");
                    printf("4.ELIMINAR CLIENTES\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[3]);
                    switch (seleccion[3])
                    {
                          case 1:
                          printf("crear\n");
                          break;
                          case 2:
                          printf("buscar\n");
                          break;
                          case 3:
                          printf("modificar\n");
                          break;
                          case 4:
                          printf("borrar\n");
                          break;
                          case 0:
                          	break;
                          default:
                              printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
                              
                          
                    }
                  }while(seleccion[3]!=0);
        

            break;
            case 2:
               do{
                
          
                    printf("INTRODUSCA UNA OPCION\n");
                    printf("1.REGISTAR PRODUCTO\n");
                    printf("2.BUSCAR PRODUCTO\n");
                    printf("3.MODIFICAR PRODUCTO\n");
                    printf("4.ELIMINAR PRODUCTO\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[4]);
                    switch (seleccion[4])
                    {
                          case 1:
                          printf("crear\n");
                          break;
                          case 2:
                          printf("buscar\n");
                          break;
                          case 3:
                          printf("modificar\n");
                          break;
                          case 4:
                          printf("borrar\n");
                          break;
                          case 0:
                          	break;
                          default:
                              printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
                              
                          
                    }
                    break;
            }while(seleccion[4]!=0);
                    case 3:
                    do{
                
          
                    printf("INTRODUSCA UNA OPCION\n");
                    printf("1.REGISTAR DEPARTAMENTO\n");
                    printf("2.BUSCAR DEPARTAMENTO\n");
                    printf("3.MODIFICAR DEPARTAMENTO\n");
                    printf("4.ELIMINAR DEPARTAMENTO\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[5]);
                    switch (seleccion[5])
                    {
                          case 1:
                          printf("crear\n");
                          break;
                          case 2:
                          printf("buscar\n");
                          break;
                          case 3:
                          printf("modificar\n");
                          break;
                          case 4:
                          printf("borrar\n");
                          break;
                          case 0:
                          	break;
                          default:
                              printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
                              
                          
                    }
                    break;
                  }while(seleccion[5]!=0);
          }
        
        
        } while (seleccion[2]!=0);
        
        
        
        break;

        case 3:
        printf("----------------REPORTES------------------\n");
        do
        {
            printf("INTRODUSCA UNA OPCION\n");
                    printf("1.FACTURACION\n");
                    printf("2.VENTAS POR DIA\n");
                    printf("3.VENTAS POR MES\n");
                    printf("4.EXISTENCIA DE PRODUCTOS\n");
                    printf("5.PRODUCTOS POR DEPARTAMENTOS\n");
                    printf("6.PRODUCTOS SIN EXISTENCIA\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[6]);
                    switch (seleccion[6])
                    {
                          case 1:
                          printf("FACTURACION\n");
                          break;
                          case 2:
                          printf("VENTAS POR DIA\n");
                          break;
                          case 3:
                          printf("VENTAS POR MES\n");
                          break;
                          case 4:
                          printf("EXISTENCIA DE PRODUCTOS\n");
                          break;
                          case 5:
                          printf("PRODUCTOS POR DEPARTAMENTO\n");
                          break;
                          case 6:
                          printf("PRODUCTOS SIN EXISTENCIA\n");
                          break;
                          case 0:
                          	break;
                          default:
                              printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
                              
                    }
        } while (seleccion[6]!=0);
        
        break;

        case 0:
        printf("----------------HASTA LA PROXIMA------------------\n");
        break;
        default:
             printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
        
       
       }
        } while (seleccion[1]!=0);
     




     return 0;
     }
void limpiar(){
      #ifdef _WIN32 || _WIN64
      system("cls");
      #else
      system("clear");
      
      #endif // DEBUG
}
    
