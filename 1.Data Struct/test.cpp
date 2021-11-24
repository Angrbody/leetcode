#include<iostream>
#include<unordered_map>
using namespace std;
int myhash(int id){
    int index = (id-1)%10000;
    cout<<index<<endl;
    return index;
}

int main(int argc, char **argv){
cout<<"test"<<endl;

unordered_map <string , int> map  ;
map["le"] = 10001;
map["et"] = 10002;
map["code"] = 10003;
map["rain"] = 10004;
map["moon"] = 10005;
map["cloud"] = 10006;

string names[] = {"rain","moon","cloud"}; 
names[myhash(10004)];
std::cout << names[myhash(10002)] << std::endl;;  //moon

map.find("le")->second;
std::cout<<map.find("le")->second<<endl;

system("pause");
return 0;
}