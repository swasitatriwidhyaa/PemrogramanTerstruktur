#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    int N;
    cin>>N;
    stack<int> st;
    
    for (int i = 0; i < N; i++){
        string command;
        cin>>command;
        
        if (command == "push"){
            int num;
            cin>>num;
            st.push(num);
        } else if (command == "pop"){
            if (!st.empty()){
                st.pop();
            }
        }
        stack<int> temp = st;
        while (!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
    return 0;
}
