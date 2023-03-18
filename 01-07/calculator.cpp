#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

/*simple way to make calculator */

int main()
{
    int long long num1=0;
    int long long num2=0;
    char op=0;

    while (1) {



        cout << " please enter 2 number "<< endl;
        cin >> num1 >> num2;

        if (cin.fail()) {
            cout << "invalid input .. try again "<< endl;
            cin.clear();
            cin.ignore(10000,'\n');
            cout << " please enter 2 number "<< endl;
            cin >> num1 >> num2;
            if (cin.fail()) {
            cout << "invalid input again   "<< endl;
            cin.clear();
            cin.ignore(10000,'\n');
            continue;
        }}
        else{
            cout << " please enter operation "<< endl;
            cin >> op;
                if (cin.fail()) {
                cout << "invalid input .. try again "<< endl;
                cin.clear();
                cin.ignore(10000,'\n');
                cout << " please enter operation "<< endl;
                cin >> op;
                if (cin.fail()) {
                cout << "invalid input again   "<< endl;
                cin.clear();
                cin.ignore(10000,'\n');
                continue;
                }}

        else{
        switch ( op){
            case '+' :
            cout << num1+num2 << endl;
            break;

            case '-' :
            cout << num1-num2 << endl;
            break;

            case '*' :
            cout << num1*num2 << endl;
            break;

            case '/' :
                if ( num2 == 0){
                    cout<< "can't divide by zero "<< endl;
                    continue;
                }
                else {
            cout << num1/num2 << endl;}
            break;
        }
        }
        }
}



  return 0;
}


