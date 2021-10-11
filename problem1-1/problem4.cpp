#include <iostream>
int main()
{
    while(1){
        int sell_proceed;
        std::cout <<"total sell proceeds : ";
        std::cin >> sell_proceed;
          if(sell_proceed<=-1){
            break;
        }
        else {
            int current_pay = 50+sell_proceed*0.12;
            std::cout<<"this month pay is "<<current_pay <<"¸¸¿ø"<<std::endl;
      
        }
       

    }
    
    return 0;
}