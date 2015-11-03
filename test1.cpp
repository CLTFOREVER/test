#include <iostream>
#include <vector>
using namespace std;
typedef vector<int>::iterator iter;
int main()
{
    vector<int> nums;
    int i=1;
    nums.push_back(i);
    iter it=nums.begin();
    cout<<*it;
};
