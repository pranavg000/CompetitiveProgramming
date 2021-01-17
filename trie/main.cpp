#include <iostream>

using namespace std;

struct node{
    node* child[26];
    bool cw,clo;
    node(){
        cw=0,clo=0;
        loop(i,0,26) child[i]=nullptr;
    }
};
node* root;

void add(string s){
    node* temp = root;
    loop(i,0,SZ(s)){
        int num = s[i]-'a';
        if(!temp->child[num]) temp->child[num] = new node;

        temp = temp->child[num];
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
