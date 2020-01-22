// leetcode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    //LeetCode 1 两数之和
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        map<int, int> tmpmap;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (tmpmap.count(nums[i])) {
                a.push_back(tmpmap[nums[i]]);
                a.push_back(i);
                break;
            }
            tmpmap[target - nums[i]] = i;
        }
        return a;
    }
    //LeetCode137. 只出现一次的数字 II
    int singleNumber(vector<int>& nums) {
        map<int, int> reverse_nums;
        int i = 0;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            reverse_nums[*it]++;
        }
        for (auto it = reverse_nums.begin(); it != reverse_nums.end(); it++) {
            if (it->second == 1) {
                return it->first;
            }
        }
        return 0;
    }
};

int main()
{
#if 1
    //两数之和
    Solution sry;
    vector<int> nums = { 3,3 };
    vector<int> result;
    result = sry.twoSum(nums, 6);
    int i = 0;
    cout << "LeetCode 1 两数之和 " << endl;
    for (auto it : result) {
        cout << "result." << i << " = " << it << endl;
        i++;
    }
    vector<int> sigleNums = { 2,3,2,3,2,3,4 };
    cout << "LeetCode 137. 只出现一次的数字 II singleNumber: " << sry.singleNumber(sigleNums) << endl;
#endif
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
