#include <iostream>

using namespace std;


// class Animal{
//     protected:
//         string voice;
//     public:
//         Animal(string s) {
//             voice = s;
//             cout<<"ANIMAL "<<endl;
//         }
//         void printVoice(){
//             cout<<"ANIMAL "<<" "<<voice<<endl;
//         }

//         void walk() {
//             cout<<"ANIMAL WALK"<<endl;
//         }
//         ~Animal(){
//             cout<<"ANIMAL DESTRUCTOR"<<endl;
//         }

// };

class Panda{
        
    public:
        int val;
        static int x;
        Panda(string s, int v) {
            val = v;
            
            cout<<"PANDA"<<endl;
        }
        void printVoice() {
            cout<<"PANDA "<<" "<<val<<" "<<x<<" "<<endl;
            x++;
        }
        static int f(){
            return x;
        }
        void sayHello() {
            cout<<"HELLO"<<endl;
        }
        ~Panda(){
            cout<<"PANDA DESTRUCTOR"<<endl;
        }
        friend void operator -(Panda &a, int);
};
int Panda::x=2;
void operator -(Panda &a, int){
    a.val += 3;
}




int main()
{
    Panda pd("CUCU", 4);
    pd- ;
    cout<<pd.val;
    // Panda pd2("XOXO", 0);
    // pd2.printVoice();
    // cout<<Panda::x<<endl;
    
    return 0;
}
