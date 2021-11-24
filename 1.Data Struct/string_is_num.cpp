#include<iostream>
#include<sstream>
using namespace std;
class Solution {
public:
    bool isNumber(string s) {
       stringstream ss(s);
       double d;
       char c;
       if(!(ss>>d))
       {
           return false;
       }

       if(ss>>c)
       {
           return false;
       }

       return true;
    }
};
int str2num(string str)
{
	int num;
	stringstream ss(str);
	ss >> num;
	return num;
}


int main(int argc, char*argv[])
{
    string s = {"078332e437"};
    int size = s.size();
    double d;
    char c;
    for(int i = 0;i<size; i++)
    {
        if(isdigit(s[i])!=0)
            return true;
    }
    
    system("pause");
    return 0;

}