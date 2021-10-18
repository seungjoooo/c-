using namespace std;

#include<iostream>
#include<cstring>

typedef struct 
{
    int ID;
    char NAME[100];
    int MONEY;


} Account;
Account memory[100];
int accNum=0;
void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
int main()
{
    int number;
    while(1)
    {

        ShowMenu();
        cout <<"선택:";
        cin >>number;
        switch (number)
        {
            case 1:
                MakeAccount();
                break;
            case 2:
                DepositMoney();
                break;
            case 3:
                WithdrawMoney();
                break;
            case 4:
                ShowAllAccInfo();
                break;
            case 5:
                return 0;
                break;
            default:
                cout<<"illeagal selection.."<<endl;
        }

    }
    
   
    

    return 0;
}
void ShowMenu(void)
{
    cout <<"----Menu----"<<endl;
    cout <<"1.계좌개설"<<endl;
    cout <<"2. 입금" <<endl;
    cout <<"3. 출금"<<endl;
    cout <<"4. 전체고객 잔액 조회"<<endl;
    cout <<"5. 프로그램 종료"<<endl;
}
void MakeAccount(void)
{
    cout<<endl;
    int ID;
    char NAME[100];
    int MONEY;
    cout <<"[계좌개설]"<<endl;
    cout <<"계좌ID:"; cin >> ID;
    cout <<"이름:"; cin >> NAME;
    cout <<"입금액:"; cin >> MONEY;
    memory[accNum].ID=ID;
    strcpy(memory[accNum].NAME,NAME);
    memory[accNum].MONEY=MONEY;
    accNum++;
    cout << endl;
    
}
void DepositMoney(void)
{
    cout << endl;
    cout <<"[입 금]"<<endl;
    int ID;
    int i=0;
    int money=0;
        for(int i=0; i<=accNum;i++)
        {
            cout <<"계좌ID:";
            cin >> ID;
            if (ID == memory[i].ID)
            {
                cout <<"입금액:";
                cin >>money;
                memory[i].MONEY+=money;
                return;
            }

        
        }       
    cout<<"입금이 완료되었습니다"<<endl<<endl;
    
}
void WithdrawMoney(void)
{
    cout << endl;
    cout <<"[출 금]"<<endl;
    int ID;
    int money=0;
    cout <<"계좌ID:"; cin >> ID;
    cout <<"출금액:"; cin >>money;

        for(int i=0; i<=accNum;i++)
        {
            
            if (ID == memory[i].ID)
            {
                
               
                    if(money>memory[i].MONEY)
                    {
                        cout <<endl;
                        cout<<"잔액부족"<<endl<<endl;
                        return;
                    }
                memory[i].MONEY-=money;
                return;
            }

            cout<<"출금이 완료되었습니다"<<endl<<endl;
        }       
    
    
}

void ShowAllAccInfo(void)
{   int i=0;
    while(1)
    {
        cout <<"----------------------"<<endl;
        cout <<"계좌ID:"<<memory[i].ID<<endl;
        cout <<"이름:"<<memory[i].NAME<<endl;
        cout <<"입금액:"<<memory[i].MONEY<<endl;
        cout <<"----------------------"<<endl;
        i++;
        if(i==accNum)
        break;
    }
    
}