#include <iostream>
using namespace std;
int main() {
  int entrada=0;
  double precio;
  char sino;
  cout << "Tipo de entrada\n";
  cout << "1. Super Vip        precio 212\n";
  cout << "2. Vip              precio 170\n";
  cout << "3. Preferencial     precio 136\n";
  cout << "4. General          precio 59\n";

  cout << "Seleccione el tipo de entrada que desea: ";cin >> entrada;
  if (entrada == 1){
    precio = 212.0;

  }else if(entrada==2){
    precio = 170.0;

  }else if(entrada==3){
    precio = 136.0;

  }else if(entrada==4){
    precio = 56.0;

  }else{
    cout<<"Ingrese un número correcto porfavor.\n";
    return 0;
  }
cout << "Es cliente claro(?) (s,S,n,N)";
cin >> sino;
if (sino == 's' || sino == 'S'){
  precio = precio *80/100;
  cout << "Precio: " << precio;
}else{
  cout << precio;
}
return 0;
}
