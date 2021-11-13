#include<iostream>
using namespace std;

int main(){
    string str = "geeksforgeeks";
    int res = str.find("eekss");
    //! if it is not present then the find function returns string :: npos
    if(res == string :: npos){
        cout << "Not Present\n";
    }
    else
    {
        cout << "First occurance at index " << res;
    }
    
}