#include <iostream>
#include <string>

int finnes_noe_l_eller_v(std::string a){
    int buf;
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'l' || a[i] == 'v'){
            buf += 1;
        }
    }
    return buf;
}




int main(){
    std::string ord;
   int antall_bokstaver;
   std::cin >> antall_bokstaver;

   std::cin >> ord;
   if(ord.length() > antall_bokstaver){
    std::cout << "program does not match the instructions" << std::endl;
    return 0;
   }

   if((finnes_noe_l_eller_v(ord)) < 1){
    std::cout << 0 << std::endl;
    return 0;
   } 


}