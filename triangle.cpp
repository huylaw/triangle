#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(typeid(a).name() != "i" || typeid(b).name() != "i" || typeid(c).name() != "i"){
        cout << "khong hop le";
        return 0;
    }
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && a==c){
            cout << "tam giac deu";
        }else if(a==b || a==c){
            cout << "tam giac can";
        }else{
            cout << "tam giac thuong";
        }
    }else{
        cout << "khong la tam giac";
    }
    return 0;
}
