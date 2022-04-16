#include <iostream>

struct coins
{
    int yen500 ;
    int yen100 ;
    int yen50 ;
    int yentotal;
};
int main(){
    struct coins po;
    std::cin >> po.yen500 >>  po.yen100 >> po.yen50 >> po.yentotal;
    int total = 0;
    int result = 0;
    for(int i=0; i<= po.yen500;i++){
        for(int j=0; j<=po.yen100; j++){
            for(int z =0; z<=po.yen50; z++){
                total = 500*i+100*j+50*z;
                if(total == po.yentotal){
                    result++;
                }
            }
        }
    }
    std::cout << result << std::endl;
}