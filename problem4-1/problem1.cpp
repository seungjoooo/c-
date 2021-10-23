#include <iostream>
//사과의 구매를 목적으로 0보다 작은 수를 전달 할 수 없다. & const
class FruitSeller
{
    private:
        int  APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMembers(int  price , int num , int money)
        {
            APPLE_PRICE = price;
            numOfApples = num;
            myMoney = money;
        }
        int SaleApples(int money)
        {
            if(money <0)
            {
                std::cout <<"잘못된 정보가 입력되어 판매가 취소됩니다"<<std::endl;
                return 0;
            }
            int num=money/APPLE_PRICE;
            numOfApples-=num;
            myMoney+=(num*APPLE_PRICE);
            return num;
            
            
           
        }
        const int ShowApplePrice()
        {
            return APPLE_PRICE;
        }
        void ShowSalesResult()
        {
            std::cout <<"판매자의 numOfApples:"<<numOfApples<<", money:"<<myMoney<<std::endl;
        }
};
class FruitBuyer
{
    private :
        int myMoney;
        int numOfApple;
    public:
        void InitMembers(int money)
        {
            myMoney = money;
            numOfApple=0;
        }
        void BuyApples(FruitSeller &p,int money)
        {
            if(money < 0)
            {
                std::cout<<"잘못된 정보가 입력되어 구매가 취소됩니다"<<std::endl;
                return ;
            }
            
                
            int AppleNum = p.SaleApples(money);
            numOfApple+=AppleNum;
            myMoney-=(AppleNum*p.ShowApplePrice());
            
           
        }
        void ShowBuyResult()
        {
            std::cout <<"고객의 numOfApple:"<<numOfApple<<",money:"<<myMoney<<std::endl;
        }
};
int main()
{
    FruitSeller seller;
    seller.InitMembers(1000,20,0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller ,2000);
    seller.ShowSalesResult();
    buyer.ShowBuyResult();
    
    
    return 0;
}