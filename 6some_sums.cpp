#include <iostream>
#include <vector>
int keta_count(int number){//
    int counter =0;

    while(number!= 0)
    {
        number /= 10;// a/= b -> a = a/bと同値である。
        counter++;
    };
    return counter;

    
}
int keta_sum(int keta_count,int number1){
    std::vector<int> data(keta_count);
    
    for(int i = 0; i < keta_count;i++){
        int ab;
        ab = static_cast<int>(number1%10);
        std::vector<int>data[i] = ab;
        number1 = number1/10;
        


        
    }
}

//}
int main(){
    int number,min,max;
    std::cin >> number >> min >> max;
    
    for(int i =1; i <= number; i++){

    }

}