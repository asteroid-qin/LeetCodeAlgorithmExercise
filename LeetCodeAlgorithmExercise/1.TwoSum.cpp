//#include<map>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//// 用于打印vector的方法
//void printVector(vector<int>& v);
//
//class Solution {
//public:
//    // 用来完成两数之和的算法
//    vector<int> twoSum(vector<int>& nums, int target) {
//        // 准备一个map用来存放遍历的数
//        map<int, int> myMap;
//
//        // 准备一个vector用来存放两个数的下标
//        vector<int> v;
//
//        // 遍历vector(通过下标遍历)
//        for (int i = 0; i < nums.size(); i++) {
//           
//            // 判断是否存在
//            map<int,int>::iterator mit = myMap.find(target - nums.at(i));
//
//            if (mit != myMap.end()) {
//                // 代表找到了，把他们的下标放入vector中
//                v.push_back(mit->second);
//                v.push_back(i);
//
//                // 直接退出循环
//                break;
//            }
//            else {
//                // 代表没有找到,把当前的值和索引转换成键值对放入map中
//                myMap.insert(pair<int, int>(nums.at(i), i));
//            }
//        }
//
//        // 默认return v
//        return v;
//    }
//
//    
//    int reverse(int x) {
//
//    }
//};
//
//// main方法做测试
//int main() {
//    // 测试两数字之和
//    Solution s;
//
//    vector<int> v;
//    v.push_back(2);
//    v.push_back(7);
//    v.push_back(11);
//    v.push_back(15);
//
//    vector<int> result = s.twoSum(v, 22);
//
//    // 遍历这个v
//    printVector(result);
//
//    return 0;
//}
//
//void printVector(vector<int> &v) {
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
