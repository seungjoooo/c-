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
        cout <<"����:";
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
    cout <<"1.���°���"<<endl;
    cout <<"2. �Ա�" <<endl;
    cout <<"3. ���"<<endl;
    cout <<"4. ��ü�� �ܾ� ��ȸ"<<endl;
    cout <<"5. ���α׷� ����"<<endl;
}
void MakeAccount(void)
{
    cout<<endl;
    int ID;
    char NAME[100];
    int MONEY;
    cout <<"[���°���]"<<endl;
    cout <<"����ID:"; cin >> ID;
    cout <<"�̸�:"; cin >> NAME;
    cout <<"�Աݾ�:"; cin >> MONEY;
    memory[accNum].ID=ID;
    strcpy(memory[accNum].NAME,NAME);
    memory[accNum].MONEY=MONEY;
    accNum++;
    cout << endl;
    
}
void DepositMoney(void)
{
    cout << endl;
    cout <<"[�� ��]"<<endl;
    int ID;
    int i=0;
    int money=0;
        for(int i=0; i<=accNum;i++)
        {
            cout <<"����ID:";
            cin >> ID;
            if (ID == memory[i].ID)
            {
                cout <<"�Աݾ�:";
                cin >>money;
                memory[i].MONEY+=money;
                return;
            }

        
        }       
    cout<<"�Ա��� �Ϸ�Ǿ����ϴ�"<<endl<<endl;
    
}
void WithdrawMoney(void)
{
    cout << endl;
    cout <<"[�� ��]"<<endl;
    int ID;
    int money=0;
    cout <<"����ID:"; cin >> ID;
    cout <<"��ݾ�:"; cin >>money;

        for(int i=0; i<=accNum;i++)
        {
            
            if (ID == memory[i].ID)
            {
                
               
                    if(money>memory[i].MONEY)
                    {
                        cout <<endl;
                        cout<<"�ܾ׺���"<<endl<<endl;
                        return;
                    }
                memory[i].MONEY-=money;
                return;
            }

            cout<<"����� �Ϸ�Ǿ����ϴ�"<<endl<<endl;
        }       
    
    
}

void ShowAllAccInfo(void)
{   int i=0;
    while(1)
    {
        cout <<"----------------------"<<endl;
        cout <<"����ID:"<<memory[i].ID<<endl;
        cout <<"�̸�:"<<memory[i].NAME<<endl;
        cout <<"�Աݾ�:"<<memory[i].MONEY<<endl;
        cout <<"----------------------"<<endl;
        i++;
        if(i==accNum)
        break;
    }
    
}