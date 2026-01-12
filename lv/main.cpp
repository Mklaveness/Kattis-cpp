#include <iostream>
#include <string>

bool finnes_l(const std::string& a){
    for(size_t i = 0; i < a.length(); i++){
        if (a[i] == 'l'){
            return true;
        }
    }
    return false;
}

bool finnes_v(const std::string& b){
    for(size_t i = 0; i < b.length(); i++){
        if (b[i] == 'l'){
            return true;
        }
    }
    return false;
}


bool lv_sidenav(const std::string& c) {
    for (size_t i = 0; i + 1 < c.length(); i++) {
        if (c[i] == 'l' && c[i + 1] == 'v') {
            return true;
        }
    }
    return false;
}





int main(){
    std::string ord;
   int antall_bokstaver;
   std::cin >> antall_bokstaver;
    std::cin >> ord;


    if(lv_sidenav(ord)){
        std::cout << 0 << std::endl;
        return 0;
    }
    else if((finnes_l(ord)) || (finnes_v(ord))){
        std::cout << 1 << std::endl;
        return 0;
    }
    else{
        std::cout << 2 << std::endl;
        return 0;
    }
  
 


   return 0;}