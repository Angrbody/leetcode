#include<iostream>
#include<vector>
#include<deque>
using namespace std;
class Solution{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty() || k == 0){
            return {};
        }
        deque<int> slide_win;       //维护的窗口
        vector<int> res;    //存放每个窗口最大值
        int max = 0;
        int size = nums.size();
        
        //窗口初始化到前k个元素
        while(slide_win.size()<k){  
            int tmp = 0;
            slide_win.emplace_back(nums[tmp]);
            tmp++;
        }
        max = slide_win[0];
        //对窗口进行操作
        for(int i = 0; i<size-k+1; i++){
            for(int j = 0; j<k; j++){
                if(max <= slide_win[j]){
                    max = slide_win[j];
                }
            }
            res.emplace_back(max);
            slide_win.emplace_back(nums[k+i]);
            slide_win.pop_front();
            
        }
        return res;
    }
};

int main(){
    vector<int> queue;   //原始队列
    vector<int> res;    //存放结果（每一轮窗口的最大值）
    vector<int> win;    //维护的窗口，长度为k
    int k = 1;             //窗口大小
    int t = 0;
    
    //队列初始化
    cout<<"The Original queue is : ";
    queue = {1,-1};
    for(int i = 0; i<2; i++)
    {
        // queue.emplace_back(i);
        cout<<queue[i];
    }
    
    int size = queue.size();    //队列长度（10）
    cout<<endl<<endl;
    cout<<"the length of the origin queue is : "<<size<<endl<<endl;
    
    //初始化窗口
    cout<<"the origin window is : [";
    while(win.size()<k)
    {
        win.emplace_back(queue[t]);
        cout<<win[t];
        t++;
    }
    int max = win[0];       //记录窗口中的最大数字
    for(int i = 0; i<k; i++)
        {
            if(max <= win[i])   max = win[i];
        }
    res.emplace_back(max);
    cout<<"], max_num: "<<max<<" has been added to the result"<<endl<<endl;

    //窗口开始滑动
    cout<<"the window is sliding now!"<<endl<<endl;
    vector<int>::iterator it = win.begin();
    for(int i = 0; i<size-k; i++)
    {
        //移除win的首元素，加入queue的下一个元素
        win.erase(it);
        win.emplace_back(queue[i+k]);
        max = win[0];
        //计算当前窗口的最大值并压入res
        for(int i = 0; i<k; i++)
        {
            if(max <= win[i])   max = win[i];
        }
        res.emplace_back(max);
        cout<<"the new window is : [";
        for(int j = 0; j<k; j++)
        {
            cout<<win[j];
        }
        cout<<"], max_num: "<<max<<" has been added to the result"<<endl;
    }
    cout<<endl<<endl;
    //结果输出
    cout<<"the result is: ";
    for(int i = 0; i<res.size(); i++)
    {
        cout<<res[i];
    }
    cout<<endl<<endl;
    
    
    
    system("pause");
    return 0;

}