/*
#include<iostream>

using namespace std;

int main(void){
    
    string a,b,c,d;
    cin >> a >> b;
    c = a + b;
    int l1,l2;
    l1 = a.size();
    l2 = b.size();
    char swap;
    swap = a[0];
    a[0] = b[0];
    b[0] = swap;
     
    
    
    cout << l1 <<" "<< l2<<endl;
    cout << c <<endl;
    for(int i=0;i<(l1+l2+1);i++){
        d = a + " " + b;
    }
    cout << d << endl;
   
    
return 0;
}
*/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str); 
vector<int> result;
char ch;
int tmp;
while(ss >> tmp) {  
    result.push_back(tmp);
    ss >> ch;          
}
return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

