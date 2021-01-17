#include <iostream>

using namespace std;

class Animalia {
    public:
        int legs;
    public:
        Animalia(int x){
            cout<<"ANIMALIA"<<endl;
            legs=x;
        }
        Animalia(){
            cout<<"ANIMALIA DEFAULT"<<endl;
        }
        ~Animalia(){
            cout<<"ANIMALIA DESTRUCTOR"<<endl;
        }
        void sf(){
            cout<<"SF"<<endl;
        }
};

class Animal: virtual public Animalia {
    protected:
        string voice;
    public:
        Animal(string s, int l): Animalia(l) {
            voice = s;
            cout<<"ANIMAL "<<endl;
        }
        void printVoice(){
            cout<<"ANIMAL "<<" "<<voice<<endl;
        }

        void walk() {
            cout<<"ANIMAL WALK"<<endl;
        }
        ~Animal(){
            cout<<"ANIMAL DESTRUCTOR"<<endl;
        }

};

class Reptile: virtual public Animalia {
    protected:
        string scale;
    public:
        Reptile(string s, int l): Animalia(l) {
            scale = s;
            cout<<"REPTILE "<<legs<<endl;
        }
        void printVoice() {
            cout<<"REPTILE "<<scale<<" "<<legs<<endl;
        }
        ~Reptile(){
            cout<<"REPTILE DESTRUCTOR"<<endl;
        }
};

class Panda: public Animal, public Reptile {
        
    public:
        int val;
        Panda(string s, int v, int u): Reptile(s,u), Animalia(v), Animal(s,v) {
            val = v;
            cout<<"PANDA"<<endl;
        }
        void printVoice() {
            cout<<"PANDA "<<legs<<" "<<val<<endl;
            // sf();
        }
        
        void sayHello() {
            cout<<"HELLO"<<endl;
        }
        ~Panda(){
            cout<<"PANDA DESTRUCTOR"<<endl;
        }
};



int main()
{
    Panda pd("CUCU", 4,0);
    pd.printVoice();
    cout<<pd.legs<<endl;
    return 0;
}
