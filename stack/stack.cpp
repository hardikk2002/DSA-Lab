#include <bits/stdc++.h>
using namespace std;

int stx[100],top=-1;

void show();
void push(int n,int value);
void pop();

int main()
{
    int n;
    cout<<"enter the size of stack"<<endl;
    cin>>n;
    int choice = 0,val;
    while(choice != 4){
        cout<<"Enter 1 to push a value "<<endl;
        cout<<"Enter 2 to pop a value "<<endl;
        cout<<"Enter 3 to show all values int the stack"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter value to enter in the stack"<<endl;
                cin>>val;
                push(n,val);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                cout<<"All value in the stack are"<<endl;
                show();
                break;
            }
            case 4:{
                cout<<"program ended"<<endl;
                break;
            }
            default:{
                cout<<"Enter valid choice bro !"<<endl;
                break;
            }
        }
    }
}

void push(int n,int value){
    
    if(top<n-1){
        top++;
        stx[top] = value;
        cout<<"value pushed"<<endl;
    }
    else{
        cout<<"stack overflowing "<<endl<<"value not pushed"<<endl;
    }
}
void pop(){
    if(top>=0){
        cout<<"value "<<stx[top]<<" is popped"<<endl;
        top--;
    }
    else{
        cout<<"stack underflowing "<<endl;
    }
}

void show(){
    for(int i=0;i<top;i++){
        cout<<stx[i]<<endl;
    }
}