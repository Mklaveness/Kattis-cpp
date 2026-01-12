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

int eksistererlv(std::string b){
    int l;
    int v;
    for(int i = 0; i < b.length(); i++){
        if(b[i] == 'l'){
            l += 1;
        }
        else if(b[i] == 'v'){
            v += 1;
        }
    }
    if(l > 0 && v > 0){
        return 1;
    }
    else{
        return l;
    }
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
   
   if((eksistererlv(ord)) != 1){
    std::cout << 1 << std::endl;
    return 0;
   }


}