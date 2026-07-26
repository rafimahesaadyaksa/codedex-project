#include <iostream>
#include <string>
using namespace std;

class cat{
  public:
  string name;
  string breed;
  int age;
  string rescued;
  int mood;
  int hunger;

  cat(string n,string b,int a,string r,int m,int h){
    name =n;
    breed=b;
    age=a;
    rescued=r;
    mood=m;
    hunger=h;

  }
  void info(){
     cout<<"nama : "<<name<<endl;
        cout<<"breed : "<<breed<<endl;
        cout<<"umur : "<<age<<endl;
        cout<<"rescue : "<<rescued<<endl;
        cout<<"mood : "<<mood<<endl;
        cout<<"lapar : "<<hunger<<"\n\n";
  }
  int feed(){
    if(hunger > 9){
        cout<<"pet sudah kenyang\n";
        return hunger;
    }
    else{
        hunger ++;
        cout<<"hunger bertambah +1\n\n";
        return hunger;
    }
  }
  int play(){
    if(mood > 9){
        cout<<"pet sudah puas bermain\n";
        return mood;
        cout<<"lv mood : "<<mood<<endl;
    }
    else{
        mood ++;
        cout<<"mood bertambah +1\n\n";
        return mood;
    }
  }

};

int main() {
  int p = 0;
  cat blacky("blacky","boy",2,"2/08/2024",5,5);
  cat nigacat("nigcat","boy",4,"21/08/2025",5,5);
  while(p != 2){
    cout<<"menu"<<endl;
    cout<<"1.info pet"<<endl;
    cout<<"2.akhiri sesi"<<endl;
    cout<<"pilih menu: ";
    cin>>p; cout<<endl<<endl;

if(p == 1){
  cout<<"======================="<<endl;
        cout<<"         pet no 1 "<<endl;
        cout<<"nama : "<<blacky.name<<endl;
        cout<<"         pet no 2 "<<endl;
        cout<<"nama : "<<nigacat.name<<endl;
        cout<<"======================="<<endl;
          int pm = 0;
        while(pm != 3){
            cout<<"pilih pet berdasarkan nomor: ";
            cin>>pm; cout<<endl; 

            if(pm == 1){
              int pg =0;
                while(pg !=4){
                cout<<"======================="<<endl;
                cout<<"anda memilih pet no 1"<<endl;
                cout<<"nama : "<<blacky.name<<endl;
                 cout<<"======================="<<endl<<endl;
                 cout<<"1.info cat"<<endl;
                 cout<<"2.beri makan"<<endl;
                  cout<<"3.ajak bermain"<<endl;
                  cout<<"4.kembali"<<endl;
                  cout<<"pilih menu: ";
                  cin>>pg;
                  cout<<"======================="<<endl<<endl;
                 if(pg == 1){
                    blacky.info();
                  }
                  else if(pg == 2){
                    blacky.feed();
                  }
                  else if(pg == 3){
                    blacky.play();
                  }


                }
               
            }
            if(pm == 2){
              int pg =0;
                while(pg !=4){
                cout<<"======================="<<endl;
                cout<<"anda memilih pet no 2"<<endl;
                cout<<"nama : "<<nigacat.name<<endl;
                 cout<<"======================="<<endl<<endl;
                 cout<<"1.info cat"<<endl;
                 cout<<"2.beri makan"<<endl;
                  cout<<"3.ajak bermain"<<endl;
                  cout<<"4.kembali"<<endl;
                  cout<<"pilih menu: "<<endl;
                  cin>>pg;
                  cout<<"======================="<<endl<<endl;
                 if(pg == 1){
                    nigacat.info();
                  }
                  else if(pg == 2){
                    nigacat.feed();
                  }
                  else if(pg == 3){
                    nigacat.play();
                  }


                }
               
            }
           
        }

         
    }


    else{
    cout<<"menu tidak ada\n";
    }
    }

 

  if(p == 2){
    cout<<"sesi  berakhir";
  }
  
}