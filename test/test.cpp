// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef signed int int32_t;

void vec_reverse() {
    vector<int> aaa;
    aaa.push_back(1);
    aaa.push_back(2);
    aaa.push_back(3);
    for (vector<int>::reverse_iterator it = aaa.rbegin(); it != aaa.rend(); it++) {
        cout << *it << endl;
    }
}
void size_vector() {
    int32_t a = 0;
    cout << "sizeof(int32_t):" << sizeof(a) << endl;
    vector<int32_t> aaa;
    cout << "sizeof(aaa):" << sizeof(aaa) << endl;
    aaa.push_back(a);
    cout << "push_back 1 sizeof(aaa):" << sizeof(aaa) << endl;
    aaa.push_back(a);
    cout << "push_back 2 sizeof(aaa):" << sizeof(aaa) << endl;
}
void test_map() {
    map<int, int> new_state;
    new_state[0] = 1;
    for (int i = 0; i < 3; i++) {
        if ((new_state[i] & 1) == 0) {
            cout << "sry(new_state[i] & 1) = " << (new_state[i] & 1) << endl;
        }
        cout << "new_state[i] = " << new_state[i] << endl;
        if ((new_state[i] & 1) == 0) {
            cout << "(new_state[i] & 1) = " << (new_state[i] & 1) << endl;
        }
    }

}

int main()
{
    //vec_reverse();
    //size_vector();
    test_map();
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
