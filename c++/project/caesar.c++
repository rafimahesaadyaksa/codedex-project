#include <iostream>
#include <string>
using namespace std;

void encode(){
    string a;
    int b;
    cout<<"caesar cipter\n";
    cout<<"input words: ";
    cin>>a;
    cout<<"enter key number: ";
    cin>>b;
    if(b < 1 || b >= 26){
        cout<<"shift number exceeds 25";
        return;
    }
    for(int i = 0; a[i] != '\0'; i++){
         if(a[i] >= 97 && a[i] <= 122)
    {
        a[i] += b;

        if(a[i] > 122)
            a[i] -= 26;
    }
    else if(a[i] >= 65 && a[i] <= 90)
    {
        a[i] += b;

        if(a[i] > 90)
            a[i] -= 26;
    }
     
    
    }
        cout<<a<<endl;
        
}

void decode(){
string a;
    int b;
    cout<<"caesar cipter\n";
    cout<<"input words ";
    cin>>a;
    cout<<"enter key number: ";
    cin>>b;
    if(b < 1 || b >= 26){
        cout<<"shift number exceeds 25";
        return;
    }
    for(int i = 0; a[i] != '\0'; i++){
         if(a[i] >= 97 && a[i] <= 122)
    {
        a[i] -= b;

        if(a[i] < 97)
            a[i] += 26;
    }
    else if(a[i] >= 65 && a[i] <= 90)
    {
        a[i] -= b;

        if(a[i] < 65)
            a[i] += 26;
    }
     
    
    }
        cout<<a<<endl;
        
}

void calcu() {
    string a;
    cout << "       calculator\n";
    cout << "operator : + - * /\n";
    cout << "enter numbers (example: 12+5): ";
    cin >> a; 
    int n1 = 0;
    int n2 = 0;
    char op = ' ';
    bool k = false;

    for (int i = 0; a[i] != '\0'; i++) {
        
        if (a[i] >= '0' && a[i] <= '9') {
            int nn = a[i] - '0'; 
            
            if (!k) {
                n1 = n1 * 10 + nn; 
            }else{
                n2 = n2 * 10 + nn; 
            }
        }
        else if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/') {
            op = a[i];
            k = true;
        }
    }

    int r = 0;
    if (op == '+') r = n1 + n2;
    else if (op == '-') r = n1 - n2;
    else if (op == '*') r= n1 * n2;
    else if (op == '/') {
        if (n2 != 0) {
            r = n1 / n2;
        } else {
            cout << "Error: Cannot divide by 0!" << endl;
            return;
        }
    } else {
        cout << "Operator not found or invalid." << endl;
        return;
    }

    cout << "Result : " << n1 << " " << op << " " << n2 << " = " << r << endl;
    cout<<endl;
}


int main(){
     cout<<"welcome to my simple project\n";
       int p = 0;
    while (p != 3) {
     cout<<"======================\n";
        cout<<"      menu\n";
      cout<<"1.caesar cipter\n";
       cout<<"2.calculator\n";
        cout<<"3.stop\n";
        cout<<"select menu: ";
        cin>>p; cout<<endl;
        if (p == 1) {
            int p1 = 0;
            while(p1 != 3){
            cout<<"======================\n";
            cout<<"      menu\n";
            cout<<"caesar cipter\n";
            cout<<"1.encode\n";
            cout<<"2.decode\n";
            cout<<"3.back\n";
            cout<<"select menu: ";
            cin>>p1; cout<<endl;
            if(p1 == 1){
                encode();
            }
            else if(p1 == 2){
                decode();
            }
            }
        }
        else if(p == 2){
            calcu();
        }
    }
}