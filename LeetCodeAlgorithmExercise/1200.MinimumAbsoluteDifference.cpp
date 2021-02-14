//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你个整数数组 arr，其中每个元素都 不相同。
//    // 请你找到所有具有最小绝对差的元素对，并且按升序的顺序返回。
//    // 思路：先对arr排序，双for循环遍历每一种可能，用一个变量记录当前绝对值差的最小值，vector放结果
//    // 如果当前绝对值之差大于记录的最小值，直接过
//    // 如果小于，把vector清空，然后把当前下标放入
//    // 如果等于，往vector中放入
//    // 有没有搞错？？就双for循环还会超时？？还是得想个办法...
//    // 对了，arr都已经排序了，所以绝对值的最小差值肯定是在后一个值-当前值。因为后后一个值肯定比后一个值要大，差值同样也会更大
//    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        vector<vector<int>> res;
//
//        int minNum = INT_MAX;
//        for (int i = 0; i + 1 < arr.size(); i++) {
//            int num = arr[i + 1] - arr[i];
//
//            if (num < minNum) {
//                res.clear();
//                res.push_back({ arr[i], arr[i + 1] });
//                minNum = num;
//            }
//            else if (num == minNum) {
//                res.push_back({ arr[i], arr[i + 1] });
//            }
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}