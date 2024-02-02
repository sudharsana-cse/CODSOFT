#include<iostream>
using namespace std;
int main()
{
    int op,num1,num2,z;
    do{
       cout << "1.+" << endl;
       cout << "2.-" << endl;
       cout << "3.*" << endl;
       cout << "4./" << endl;
       cout << "5.%" << endl;
       cin >> op;
       cout << "Enter two operands:";
       cin >> num1 >> num2;
       switch(op)
       {
         case 1:
          cout << num1+num2 << endl;
          break;
         case 2:
          cout << num1-num2 << endl;
          break;
         case 3:
          cout << num1*num2 << endl;
          break;
         case 4:
          cout << num1/num2 << endl;
          break;
         case 5:
          cout << num1%num2 << endl;
          break;
        if(op>5);
          cout << "Error" << endl;
          break;
         return 0;
       }
          cout << "if you want to continue click 1 else 0" << endl;
          cin >> z;
        } while(z);
          return 0;
    
}