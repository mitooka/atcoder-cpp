#include <iostream>
int main(){
    char s[3];
    int count =0;
    std::cin >> s;
    
    
    for(int i = 0; i <= 2;++i){
        if(s[i] == '1'){
            count++;
        }
    }
    std::cout << count << std::endl;

}