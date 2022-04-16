#include <iostream>
#include <vector>

int count(int n){
    int counter = 0;
    for(int i =0;;i++){
        if(n%2 == 0){
            n = n/2;
            counter++;
        }
    
        else if(n%2 != 0){
            break;
        }
    }
    return counter;
}

int main(){
    int number=0;
    int smallest = 0;
    int smallest_wallip = 0;

    std::cin >> number;

    std::vector<int> data(number);//可変長配列を宣言
    for (int i = 0; i < number; i++)
    {
        int ab=0;
        std::cin >> ab;
        data[i] = ab;
    }//入力受付number回
    
    smallest = data[0];
    for(int i = 0; i < number;i++){
        if(smallest > data[i]){
            smallest = data[i];
        }
    }
    smallest_wallip = count(data[0]);
    for(int i = 0;i < number; i++){
        if(smallest_wallip > static_cast<int>(count(data[i]))){
            smallest_wallip = static_cast<int>(count(data[i]));
        }
        
    }
    
    std::cout << smallest_wallip << std::endl;
}
