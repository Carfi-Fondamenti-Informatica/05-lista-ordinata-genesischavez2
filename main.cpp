#include <iostream>
using namespace std;

int main() {
   
 int lista[10];
 for(int i=0;i<10;i++){
 cin >> lista[i];
 }
 int a=0;
 cin >> a;
 
 int variabile=0;
 for(int i=0;i<10;i++){
    if(a<=lista[i]){
       variabile=lista[i];
       lista[i]=a;
       a=variabile;
    }
 }
       
 for(int i=0;i<10;i++){
 cout << lista[i] << " ";
 }
 
   return 0;
}
