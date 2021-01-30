//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 根据题意，是求一个vector容器中的众数，脑子里第一个想到的是利用map
//    int majorityElement(vector<int>& nums) {
//        // 准备一个map
//        unordered_map<int, int> map;
//        // 准备一个变量记录众数，一个记录最大的次数
//        int majority = 0, count = 0;
//        // 遍历这个nums
//        for (auto i : nums) {
//            ++map[i];
//            if (map[i] > count) {
//                count = map[i];
//                // 这里才是设置众数
//                majority = i;
//            }
//        }
//
//        cout << "map[2]:" << map[2] << ", map[3]:" << map[3] << endl;
//        cout << "结果：" << majority << endl;
//
//        return majority;
//    }
//};
//
//int main() {
//    vector<int> v = {3,2,3};
//
//    Solution s;
//    s.majorityElement(v);
//
//	return 0;
//}