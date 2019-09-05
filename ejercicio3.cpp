#include <iostream>
#include <vector>
using namespace std;
int main() {
 int num;
 int mayor;
 cout << "n: ";
 cin >> num;
vector<int> asd(num,0);
for (int i=0; i<num;i++){
  cin >> asd[i];
}
mayor = asd[0];
for (int i=0; i<num;i++){
  if (mayor<asd[i]){
    mayor = asd [i];
  }else{
    mayor = mayor;
  }
}
cout << "El mayor es: " << mayor;
return 0;
}
