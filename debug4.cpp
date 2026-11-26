#include<iostream>
using namespace std;
int main(){
    int x,temp,lg,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,ten=0;
    cout<<"Enter number";
    cin>>x;
    temp=x;
    while(temp>0){
        lg=temp%10;
        
        switch (lg){
            case 1:
            one+=1;
            break;
            case 2:
            two+=1;
            break;

            case 3:
            three+=1;
            break;
            case 4:
            four+=1;
            break;
            case 5:
            five+=1;
            break;
            case 6:
            six+=1;
            break;
            case 7:
            seven+=1;
            break;
            case 8:
            eight+=1;
            break;
            case 9:
            nine+=1;
            break;
            case 0:
            ten+=1;
            break;}
            temp=temp/10;



    

   
        
    }
    cout<<"1:"<<one<<"\n2:"<<two<<"\n3:"<<three<<"\n4:"<<four<<"\n5:"<<five<<"\n6:"<<six<<"\n7:"<<seven<<"\n 8:"<<eight<<"\n 9:"<<nine<<"\n 0:"<<ten;

}
