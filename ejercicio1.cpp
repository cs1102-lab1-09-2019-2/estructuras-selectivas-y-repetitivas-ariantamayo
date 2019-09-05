  
#include <iostream>
#include <string>
#include <vector>
using namespace std;
float promedio(int numestudiante){
  float pc1, pc2,pc3,pc4,proyecto, e1, e2, promedio;
  cout << "Alumno número "<<numestudiante+1<< "\n";
  do{cout << "PC1: "; cin >> pc1;}while(pc1<0 || pc1 >=20);
  do{cout << "PC2: "; cin >> pc2;}while(pc1<0 || pc1 >=20);
  do{cout << "PC3: "; cin >> pc3;}while(pc1<0 || pc1 >=20);
  do{cout << "PC4: "; cin >> pc4;}while(pc1<0 || pc1 >=20);
  do{cout << "Proyecto: "; cin >> proyecto;}while(pc1<0 || pc1 >=20);
  do{cout << "E1: "; cin >> e1;}while(pc1<0 || pc1 >=20);
  do{cout << "E2: "; cin >> e2;}while(pc1<0 || pc1 >=20);
  promedio = (5*pc1 + 10 * pc2 + 10 * pc3 + 15* pc4 + 20 * proyecto + 20* e1 +20*e2)/100;
  cout << "Promedio: "<<promedio<<"\n";
  if (promedio >=18.0 && promedio <= 20.0){cout << "ACM - IPC\n";}
  else if(promedio >=15 && promedio < 18){cout << "Imagine cup\n";}
  else if(promedio >=12 && promedio < 15){cout << "Hackathon de Miraflores\n";}
  else{cout<<"Necesita mejorar\n";}
  cout << "\n";
  return promedio;
}
int main() {
  int estudiantes;
  do {cout <<"Número de estudiantes: ";cin >> estudiantes;} while
  (estudiantes <=3 || estudiantes > 30);
  for (int i=0; i<estudiantes; i++){promedio(i);}
  return 0; 
}
