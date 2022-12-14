/*sitema de inventario don regalon*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #ifdef _WIN32 || _WIN64
//  #include <windows.h>
// #endif // DEBUG
#define TM 20
#define TMD 200
typedef struct 
{
      int cedula;
      char nombre[TM];
      char apellido[TM];
      char direccion[TMD];
      long long int telefono;

}Clientes;

typedef struct 
{
      int codigo,existencia,dep,sexo;
      char nombre[TM];
      float precio;
      

}Productos;

typedef struct
{

	int numero;
	char nombre[50];
		
}Departamento;

void facturar();
void creararchivoclientes();
int verificarcliente();
void registrarclientes();
void listadodeclientes();
void buscarcliente();
void modificarclientes();
void borrarclientes();
//productos
void creararchivoproductos();
bool verificarproducto(int c);
void registrarproductos();
void listadodeproductos();
void buscarproducto();
void modificarproductos();
void borrarproductos();
void listadodeproductosagotados();
void listadodeproductosdisponibles();

void limpiar();


int seleccion[20];
int main(){

     do{
     	printf("INTRODUZCA UNA OPCION:\n");
        printf("1.FACTURACION:\n");
        printf("2.ADMINISTRACION\n");
        printf("3.REPORTES\n");
        printf("0.SALIR\n");
       scanf("%d",&seleccion[1]);
       
       switch (seleccion[1])
       {
       case 1:
         printf("----------------FACTURACION------------------\n");
        	facturar();
        break;

        case 2:
        printf("----------------ADMINISTRACION------------------\n");
        do
        {
          printf("INTRODUZCA UNA OPCION:\n");
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
                
          
                    printf("INTRODUZCA UNA OPCION\n");
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
          
                    printf("INTRODUZCA UNA OPCION\n");
                    printf("1.REGISTAR PRODUCTO\n");
                    printf("2.BUSCAR PRODUCTO\n");
                    printf("3.MODIFICAR PRODUCTO\n");
                    printf("4.ELIMINAR PRODUCTO\n");
                    printf("5.LISTA DE PRODUCTOS\n");
                    printf("0.VOLVER\n");
                    scanf("%d",&seleccion[4]);
                    switch (seleccion[4])
                    {
                          case 1:
                          printf("----------------REGISTRAR PRODUCTOS------------------\n");
                          registrarproductos();
                          break;
                          case 2:
                          printf("----------------BUSCAR PRODUCTO------------------\n");
                          buscarproducto();
                          break;
                          case 3:
                          printf("----------------MODIFICAR PRODUCTO------------------\n");
                          modificarproductos();
                          break;
                          case 4:
                          printf("----------------ELIMINAR PRODUCTO------------------\n");
                          borrarproductos();
                          break;
                          case 5:
                            printf("----------------LISTA DE PRODUCTOS------------------\n");
                            listadodeproductos();
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
          
                    printf("INTRODUZCA UNA OPCION\n");
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
            printf("INTRODUZCA UNA OPCION\n");
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
                          listadodeproductosdisponibles();
                          break;
                          case 5:
                          printf("PRODUCTOS POR DEPARTAMENTO\n");
                          break;
                          case 6:
                          printf("PRODUCTOS SIN EXISTENCIA\n");
                          listadodeproductosagotados();
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
      // #ifdef _WIN32 || _WIN64
      // system("cls");
      // #else
      system("clear");
      
      // #endif // DEBUG
}
void creararchivoclientes()
{
    FILE *arch;
    arch=fopen("clientes.dat","a+");
    if (arch==NULL)
        exit(-1);
    fclose(arch);
    
}
int verificarcliente()
{
    FILE *arch;
    arch=fopen("clientes.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese la cedula del cliente :");
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
    fclose(arch);
    if (existe==1){
        
        
        return 1;      
    }else{
        return ced;
    }
        
    
    
}
void registrarclientes()
{
    creararchivoclientes();
    int c;
    c=verificarcliente();
    if (c==1)
    {
        printf("La cedula ingresada ya existe\n");
    }else{
        FILE *arch;
    char ch;

    arch=fopen("clientes.dat","a+b");
    if (arch==NULL)
        exit(1);
    Clientes cliente;

    
    cliente.cedula=c;
    printf("Ingrese el nombre del cliente: ");
    scanf("%s", cliente.nombre);
    printf("Ingrese apellido:");
    scanf("%s",cliente.apellido);
    printf("Ingrese direccion:");
    scanf("%s",cliente.direccion);
    printf("Ingrese telefono:");
    scanf("%lld",&cliente.telefono);
    
    fwrite(&cliente, sizeof(Clientes), 1, arch);
    
    fclose(arch);}
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
    printf("Ingrese la cedula del cliente: ");
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
           scanf("%s",cliente.direccion); 
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

void creararchivoproductos()
{
    FILE *arch;
    arch=fopen("productos.dat","a+");
    if (arch==NULL)
        exit(-1);
    fclose(arch);
    
}
 bool verificarproducto(int c)
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(-1);
        Productos producto;
    bool existe;
    existe=false;
    fread(&producto, sizeof(Productos), 1, arch);
    while(!feof(arch)) 
    {
        if (c==producto.codigo) 
        {
           printf("%d %s %.2f %d %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
           existe=true;
           break;
        }
        fread(&producto, sizeof(Productos), 1, arch);
    }
    fclose(arch);
    if (existe==true){
        
        
        return true;      
    }else{
        return false;
    }
        
    
    
}
 void registrarproductos()
{
    creararchivoproductos();
    Productos producto;
    int c;
    printf("Ingrese codigo del producto :");
    scanf("%d", &c);
    bool verificar;
    
    verificar=verificarproducto(c);
    if (verificar)
    {
        printf("el codigo ingresado ya existe\n");
    }else{
        FILE *arch;
    char ch;

    arch=fopen("productos.dat","a+b");
    if (arch==NULL)
        exit(-1);
    

    
    producto.codigo=c;
    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto.nombre);
    printf("Ingrese precio:");
    scanf("%f",&producto.precio);
    printf("Ingrese existencia:");
    scanf("%d",&producto.existencia);
    printf("Ingrese el codigo de departemaneto del producto: ");
    scanf("%d",&producto.dep);
    printf("Ingrese el sexo del producto: ");
    scanf("%d",&producto.sexo);
    
    fwrite(&producto, sizeof(Productos), 1, arch);
    
    fclose(arch);}
}   
void listadodeproductos()
{
    FILE *arch;
    arch=fopen("productos.dat","rb"); 
    if (arch==NULL) 
        exit(-1);
    Productos producto; 
    fread(&producto, sizeof(Productos), 1, arch); 
    printf("codigo  nombre  precio  existencia  departamento\n");
    while(!feof(arch)) 
    {
        printf("%d\t %s\t  %.2f\t  %d\t      %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
        
        fread(&producto, sizeof(Productos), 1, arch);
    }
    fclose(arch);

    
    

      
    
}
void buscarproducto()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo del producto: ");
    int cod;
    scanf("%d", &cod);
    Productos producto;
    int existe=0;
    fread(&producto, sizeof(Productos), 1, arch);
    printf("codigo  nombre  precio  existencia  departamento\n");

    while(!feof(arch)) 
    {
        if (cod==producto.codigo) 
        {
           printf("%d\t %s\t  %.2f\t  %d\t      %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
           existe=1;
           break;
        }
        fread(&producto, sizeof(Productos), 1, arch);
    }
    if (existe==0)
        printf("No existe un producto con este codigo\n");
    fclose(arch);
    
}
void modificarproductos()
{
    FILE *arch;
    arch=fopen("productos.dat","r+b");
    if (arch==NULL)
        exit(-1);
    printf("Ingrese el codigo del producto a modificar:");
    int cod;
    scanf("%d", &cod);
    Productos producto;
    int existe=0;
    fread(&producto, sizeof(Productos), 1, arch);
    while(!feof(arch))
    {
        if (cod==producto.codigo)
        {
           printf("%d %s %.2f %d %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
           printf("Ingrese nuevo precio del producto:\n");
           scanf("%f",&producto.precio); 
           printf("Ingrese existencia del producto:\n");
           scanf("%d",&producto.existencia); 
           int pos=ftell(arch)-sizeof(Productos);
           fseek(arch,pos,SEEK_SET); 
           fwrite(&producto, sizeof(Productos), 1, arch); 
           printf("Se modificaron los datos del producto.\n");
           existe=1;
           break;
        }
        fread(&producto, sizeof(Productos), 1, arch);
    }
    if (existe==0)
        printf("No existeun producto con dicho codigo\n");
    fclose(arch);
    
}
void borrarproductos()
{
    FILE *arch;
    arch=fopen("productos.dat","rb");
    if (arch==NULL)
        exit(1);
    printf("Ingrese el codigo del producto a eliminar a eliminar: ");
    int cod;
    scanf("%d", &cod);
    Productos producto;

    FILE *nuevo;
    nuevo=fopen("productos.tmp","ab");
    if (arch==NULL)
        exit(-1);

    int existe=0;
    fread(&producto, sizeof(Productos), 1, arch);
    while(!feof(arch))
    {
        if (cod == producto.codigo)
        {
           printf("Producto %d %s %.2f %d %d Eliminado\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
           existe=1;
        }else{
            fwrite(&producto, sizeof(Productos), 1, nuevo);
        }
        fread(&producto, sizeof(Productos), 1, arch);
    }
    if (existe==0)
        printf("no existe el codigo del producto\n");
    fclose(arch);
    fclose(nuevo);
    
    remove("productos.dat");
    rename("productos.tmp", "productos.dat");
}
void listadodeproductosagotados()
{
    FILE *arch;
    arch=fopen("productos.dat","rb"); 
    if (arch==NULL) 
        exit(-1);
    Productos producto; 
    fread(&producto, sizeof(Productos), 1, arch); 
    printf("codigo  nombre  precio  existencia  departamento\n");
    while(!feof(arch)) 
    {
        if (producto.existencia==0)
        {
           printf("%d\t %s\t  %.2f\t  %d\t      %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
        }
        
        
        
        fread(&producto, sizeof(Productos), 1, arch);
    }
    fclose(arch);

    
    

      
    
}
void listadodeproductosdisponibles()
{
    FILE *arch;
    arch=fopen("productos.dat","rb"); 
    if (arch==NULL) 
        exit(-1);
    Productos producto; 
    fread(&producto, sizeof(Productos), 1, arch); 
    printf("codigo  nombre  precio  existencia  departamento\n");
    while(!feof(arch)) 
    {
        if (producto.existencia>0)
        {
           printf("%d\t %s\t  %.2f\t  %d\t      %d\n", producto.codigo, producto.nombre, producto.precio,producto.existencia,producto.dep);
        }
        
        
        
        fread(&producto, sizeof(Productos), 1, arch);
    }
    fclose(arch);

    
    

      
    
}

void facturar(){
	
	FILE *arch;
    Productos producto;
    Departamento departamento;
    
	float total = 0;
	int ContProductos=0,cedula,menu,dep,num_dep = 5,dep_prod,dato,x,codigo;
	char nombre[20],apellido[20],met_pago[20],direccion[50],dato2[50];
	
	
	printf("Ingrese le cedula:");
	fflush(stdin);
	scanf("%i",&cedula);
	
	printf("\nIngrese el nombre:");
	fflush(stdin);
	scanf("%s",nombre);
	
	printf("\nIngrese el apellido:");
	fflush(stdin);
	scanf("%s",apellido);
	
	printf("\nIngrese el metodo de pago:");
	fflush(stdin);
	scanf("%s",met_pago);
	
	printf("\nIngrese la direccion:");
	fflush(stdin);
	fgets(direccion,50,stdin);
	
	do{
		printf("\nQue desea hacer?\n");
		printf("\n1.Agregar un producto");
		printf("\n2.Finalizar compra\n\n");
		scanf("%i",&menu);
		
		if(menu==1){
			
			printf("\nSeleccione el sexo: ");
			printf("\n1.Masculino");
			printf("\n2.Femenino\n\n");
			scanf("%i",&x);
			
			printf("\nSeleccione un departamento\n");
			
			arch=fopen("departamentos.dat","rb");
			fread(&departamento, sizeof(Departamento), 1, arch);
			
			while(!feof(arch)){
				
				printf("\n%i.%s\n",departamento.numero,departamento.nombre);
				
				fread(&departamento, sizeof(Departamento), 1, arch);
			}
			
			
			printf("\n\n");
			fclose(arch);
			
			scanf("%i",&dep_prod);
				
				
			printf("\n\nProductos del departamento seleccionado: \n\n");
			
			
			arch=fopen("productos.dat","rb");
			fread(&producto, sizeof(Productos), 1, arch);
			while(!feof(arch)){
				
				if(dep_prod==producto.dep&&x==producto.sexo){
					
        		printf("\n%i  %s\n",producto.codigo,producto.nombre);
        		
				}
				
        		fread(&producto, sizeof(Productos), 1, arch);
				
			}
			
			fclose(arch);
			printf("nIngrese el codigo del producto que desea agregar: ");
			scanf("%i",&codigo);
			
			arch=fopen("productos.dat","rb");
			
			fread(&producto, sizeof(Productos), 1, arch);
			while(!feof(arch)){
				if(producto.codigo ==codigo){
					total = total + producto.precio;
					fread(&producto, sizeof(Productos), 1, arch);
					ContProductos = ContProductos + 1;
				}
			}
			fclose(arch);
			
		}
		
		limpiar();
		
	}while(menu==1);
	
	printf("\nFactura:\n");
	printf("\nCedula: %i",cedula);
	printf("\nNombre: %s",nombre);
	printf("\nApellido: %s",apellido);
	printf("\nMetodo de pago: %s",met_pago);
	printf("\nDireccion: %s",direccion);
	printf("\nNumero de productos: %i",ContProductos);
	printf("\nTotal a pagar: %.2f\n",total);


}
