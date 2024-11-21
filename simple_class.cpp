#include <iostream>
using namespace std;
class Addition{
    public:
    int a,b;

    int add(int a, int b){
        return a+b;
    }
    int substarct(int a, int b){
        return a-b;
    }


};
int main(){
    Addition obj;
    obj.a=10;
    obj.b=20;
    int sum=obj.add(obj.a,obj.b);
    int diff=obj.substarct(obj.a,obj.b);
    cout<<"Sum is "<<sum<<endl;
    cout<<"Difference is "<<diff<<endl;

}