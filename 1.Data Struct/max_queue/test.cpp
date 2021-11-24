#include<iostream>
#include<queue>
using namespace std;

int main(){
    

  MaxQueue* obj = new MaxQueue();
  
  obj->push_back(1);
  obj->push_back(2);
  obj->push_back(3);
  obj->push_back(1);
  int max = obj->max_value();
  cout<<"max = "<<max<<endl;
 
    system("pause");
    return 0;
}
