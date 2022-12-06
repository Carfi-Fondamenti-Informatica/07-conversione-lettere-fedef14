#include "lib.h"

bool carattere(char &a){
if(a>64 && a<91){
a = a + 32;
  return true;
} else if(a>96 && a<123){
a = a - 32;
  return true;
} else {
return false;
}
}
