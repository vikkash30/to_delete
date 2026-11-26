

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter number :";
    cin>>n;
    int check=n;
    while (check !=1)
    {
        int temp=check;
        int w=0;
        while (temp>0){
            int z = temp % 10;
            w=w+(z*z);
            temp=temp/10;
            

            
        }

        count=count+1;
        check=w;
        cout<<"\n"<<check;
        if (count>50){
            cout<<"\n not a happy number";
            break;
        }

        
    }
if (check==1){
    cout << "\n it is a happy number";
}

}