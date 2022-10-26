/*sitema de inventario don regalon*/
#include <stdio.h>
#ifdef _WIN32 || _WIN64
 #include <windows.h>
#endif // DEBUG
#define TM 20
typedef struct 
{
      int cedula;
      char nombre[TM];
      char apellido[TM];
      char direccion[TM];
      long long int telefono;

}Clientes;
void registrarclientes();
void listadodeclientes();
void buscarcliente();
void modificarclientes();
void borrarclientes();

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
               printf("----------------CLIENTES------------------\n");
                
          
                    printf("INTRODUSCA UNA OPCION\n");
                    printf("1.REGISTAR CLIENTES\n");
                    printf("2.BUSCAR CLIENTES\n");
                    printf("3.MODIFICAR CLIENTES\n");
                    printf("4.ELIMINAR CLIENTES\n");
                    printf("5.LISTA DE CLIENTES\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[3]);
                    switch (seleccion[3])
                    {
                          case 1:
                          printf("----------------REGISTRAR CLIENTES------------------\n");
                          registrarclientes();
                          printf("n");
                          break;
                          case 2:
                          printf("----------------BUSCAR CLIENTES------------------\n");
                          buscarcliente();
                          break;
                          case 3:
                          printf("----------------MODIFICAR CLIENTES------------------\n");
                          modificarclientes();
                          break;
                          case 4:
                          printf("BORRAR CLIENTES\n");
                          borrarclientes();
                          break;
                          case 5:
                          listadodeclientes();
                          case 0:
                          	break;
                          default:
                              printf("POR FAVOR INTRODUZCA UNA OPCION VALIDA.\n");
                              
                          
                    }
                  }while(seleccion[3]!=0);
        

            break;
            case 2:
               do{
                printf("----------------PRODUCTOS------------------\n");
          
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
                    
                }while(seleccion[4]!=0);
                 break;
                    case 3:
                    do{
                printf("----------------DEPATRAMENTOS------------------\n");
          
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
                    
                  }while(seleccion[5]!=0);
                  break;
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
void registrarclientes()
{
     FILE *arch;
    char ch;

    arch=fopen("clientes.dat","a+b");
    if (arch==NULL)
        exit(1);
    Clientes cliente;

    printf("Ingrese cedula del cliente: ");
    scanf("%d",&cliente.cedula);
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", cliente.nombre);
    printf("Ingrese apellido:");
    scanf("%s",&cliente.apellido);
    printf("Ingrese direccion:");
    scanf("%s",&cliente.direccion);
    printf("Ingrese telefono:");
    scanf("%lld",&cliente.telefono);
    
    fwrite(&cliente, sizeof(Clientes), 1, arch);
    
    fclose(arch);
}
void listadodeclientes()
{
    FILE *arch;
    arch=fopen("clientes.dat","rb"); 
    if (arch==NULL) 
        exit(1);
    Clientes cliente; 
    fread(&cliente, sizeof(Clientes), 1, arch); 
    while(!feof(arch)) 
    {
        printf("%d %s %s %s %lld\n", cliente.cedula, cliente.nombre, cliente.apellido,cliente.direccion,cliente.telefono);
        
        fread(&cliente, sizeof(Clientes), 1, arch);
    }
    fclose(arch); 
    
}
void buscarcliente()
{
    FILE *arch;
    arch=fopen("clientes.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese la cedula del cliente a consultar:");
    int ced;
    scanf("%d", &ced);
    Clientes cliente;
    int existe=0;
    fread(&cliente, sizeof(Clientes), 1, arch);
    while(!feof(arch)) 
    {
        if (ced==cliente.cedula) 
        {
           printf("%d %s %s %s %lld\n", cliente.cedula, cliente.nombre, cliente.apellido,cliente.direccion,cliente.telefono);
           existe=1;
           break;
        }
        fread(&cliente, sizeof(Clientes), 1, arch);
    }
    if (existe==0)
        printf("No existe un cliente con dicha cedula\n");
    fclose(arch);
    
}

void modificarclientes()
{
    FILE *arch;
    arch=fopen("clientes.dat","r+b");
    if (arch==NULL)
        exit(1);
    printf("Ingrese la cedula del cliente a modificar:");
    int ced;
    scanf("%d", &ced);
    Clientes cliente;
    int existe=0;
    fread(&cliente, sizeof(Clientes), 1, arch);
    while(!feof(arch))
    {
        if (ced==cliente.cedula)
        {
           printf("%d %s %s %s %lld\n", cliente.cedula, cliente.nombre, cliente.apellido,cliente.direccion,cliente.telefono);
           printf("Ingrese nueva diereccion;\n");
           scanf("%s",&cliente.direccion); 
           printf("Ingrese nuevo numero de telefono;\n");
           scanf("%lld",&cliente.telefono); 
           int pos=ftell(arch)-sizeof(Clientes);
           fseek(arch,pos,SEEK_SET); 
           fwrite(&cliente, sizeof(Clientes), 1, arch); 
           printf("Se modificaron los datos del cliente.\n");
           existe=1;
           break;
        }
        fread(&cliente, sizeof(Clientes), 1, arch);
    }
    if (existe==0)
        printf("No existeun cliente con dicha cedula\n");
    fclose(arch);
    
}
void borrarclientes()
{
    FILE *arch;
    arch=fopen("clientes.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese la cedula del cliente a eliminar: ");
    int ced;
    scanf("%d", &ced);
    Clientes cliente;

    FILE *nuevo;
    nuevo=fopen("clientes.tmp","ab");
    if (arch==NULL)
        exit(1);

    int existe=0;
    fread(&cliente, sizeof(Clientes), 1, arch);
    while(!feof(arch))
    {
        if (ced == cliente.cedula)
        {
           printf("cliente %d %s %s %s %lld Eliminado\n", cliente.cedula, cliente.nombre, cliente.apellido,cliente.direccion,cliente.telefono);
           existe=1;
        }else{
            fwrite(&cliente, sizeof(Clientes), 1, nuevo);
        }
        fread(&cliente, sizeof(Clientes), 1, arch);
    }
    if (existe==0)
        printf("no existe la cedula del cliente\n");
    fclose(arch);
    fclose(nuevo);
    
    remove("clientes.dat");
    rename("clientes.tmp", "clientes.dat");
}

    
