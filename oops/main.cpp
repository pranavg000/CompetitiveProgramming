#include <iostream>

using namespace std;

//class Animalia {
//    protected:
//        int legs;
//    public:
//        Animalia(int x){
//            cout<<"ANIMALIA"<<endl;
//            legs=x;
//        }
//        Animalia(){
//            cout<<"ANIMALIA DEFAULT"<<endl;
//        }
//};

class Animal {
    protected:
        string voice;
    public:
        Animal(string s) {
            voice = s;
            cout<<"ANIMAL "<<endl;
        }
        void printVoice(){
            cout<<"ANIMAL "<<voice<<endl;
        }

        void walk() {
            cout<<"ANIMAL WALK"<<endl;
        }
        virtual ~Animal(){
            cout<<"ANIMAL DESTRUCTOR"<<endl;
        }

};

//class Reptile: virtual public Animalia {
//    protected:
//        string scale;
//    public:
//        Reptile(string s, int l): Animalia(l) {
//            scale = s;
//            cout<<"REPTILE "<<legs<<endl;
//        }
//        void printVoice() {
//            cout<<"REPTILE "<<scale<<" "<<legs<<endl;
//        }
//};
class Don{
    public:
    Don(){
        cout<<"CONST DON"<<endl;
    }

    ~Don(){
        cout<<"DEST DON"<<endl;
    }
};
class Panda: public Animal, public Don {
        
    public:
        int val;
        Panda(string s, int v): Animal(s) {
            val = v;
            cout<<"PANDA"<<endl;
        }
        void printVoice() {
            cout<<"PANDA "<<voice<<" "<<val<<endl;
        }
        
        void sayHello() {
            cout<<"HELLO"<<endl;
        }
        ~Panda(){
            cout<<"PANDA DESTRUCTOR"<<endl;
        }
};

// class Baby: public Panda {
//     public:
//     Baby (): Panda("XOXO", 12){

//     }
// };


int main()
{
    Panda pd("CUCU", 10);
    
    return 0;
}
