//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：可以对arr 的任意 非空子数组 并将它翻转，判断是否能够把arr反转得到target
//    // 思路：非空子数组可以无限反转其实就是表示每两个相邻位置可以交换位置。根据冒泡排序原理，很明显，只要
//    // arr中的元素和个数和target一一对应，那么arr肯定可以翻转得到target
//    // 再根据1 <= arr[i] <= 1000，可以把target和arr进行计数排序，先把arr里面的数据放入大小为1000的数组中
//    // 再遍历target从1000里面减，最后再遍历这个数组，如果有一个数不等于0就返回false，默认true（也可以用map代替）
//    // 好吧，还有更好的思路...使用异或！！
//    // 遍历一遍arr再遍历一遍target，最后返回异或结果是否等于0
//    bool canBeEqual(vector<int>& target, vector<int>& arr) {
//        int buck[1000] = { 0 };
//        for (int& i : arr) {
//            buck[i - 1]++;
//        }
//        for (int& i : target) {
//            buck[i - 1]--;
//        }
//
//        for (auto& i : buck) {
//            if (i != 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//    // 好吧...异或可能会出问题，这里还是不用了..
//    // 总之排序就完事了.
//    bool canBeEqualP(vector<int>& target, vector<int>& arr) {
//
//    }
//};
//
//int main() {
//	return 0;
//}