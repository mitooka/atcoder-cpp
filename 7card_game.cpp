#include <iostream>
#include <vector>
#include <algorithm>



int main(){
    int a;
    std::cin >> a;
    std::vector<int> data_list(a);//可変長の配列
    for(int i =0;i<a;++i){
        int b;
        std::cin >> b;
        data_list[i] = b;
    }
    int first =0;
    int second =0;
    
    std::sort(data_list.begin(),data_list.end(),std::greater<int>());
    for(int i = 0;i<a;i = i+2){
        first = first + static_cast<int>(data_list[i]);
    }
    for(int j = 1; j<a;j = j+2){
        second = second + static_cast<int>(data_list[j]);
    }
    std::cout << first-second << std::endl;


}