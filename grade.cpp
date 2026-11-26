#include<iostream>
#include<list>
using namespace std;
int main(){
    int num,i=1,rm=0;
    cin>>num;
    list<int> og={};
    while (i<=num){
        int gra;
        cin>>gra;
        og.push_back(gra);
        
        i++;
    }
    list<int> temp=og;
    list<int> slist={};
    rm=temp.size();
    int c=0;
    int run;
    int sizee;
    while(rm!=0){
        int larg=temp.back();
        sizee=temp.size();
        run=num-c;
        c++;
        while(run!=0){
            if (larg < temp.front()){

                larg=temp.front();
            }
            slist.push_front(larg);
            temp.remove(larg);
        }
        rm--;

    }
    for (int x : slist) {
    cout << x << "\n ";
}

    
    
}