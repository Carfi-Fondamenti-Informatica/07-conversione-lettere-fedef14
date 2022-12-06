#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
  char a;
  bool b;
  cin >> a;
  b = carattere(&a);
  
  if(b==1){
  cout << a << endl;
  } else{
  cout << "errore" << endl;
  }
  return 0;
}
