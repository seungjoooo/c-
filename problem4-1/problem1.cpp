#include <iostream>
//����� ���Ÿ� �������� 0���� ���� ���� ���� �� �� ����. & const
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
                std::cout <<"�߸��� ������ �ԷµǾ� �ǸŰ� ��ҵ˴ϴ�"<<std::endl;
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
            std::cout <<"�Ǹ����� numOfApples:"<<numOfApples<<", money:"<<myMoney<<std::endl;
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
                std::cout<<"�߸��� ������ �ԷµǾ� ���Ű� ��ҵ˴ϴ�"<<std::endl;
                return ;
            }
            
                
            int AppleNum = p.SaleApples(money);
            numOfApple+=AppleNum;
            myMoney-=(AppleNum*p.ShowApplePrice());
            
           
        }
        void ShowBuyResult()
        {
            std::cout <<"���� numOfApple:"<<numOfApple<<",money:"<<myMoney<<std::endl;
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