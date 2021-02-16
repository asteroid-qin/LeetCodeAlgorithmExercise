//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：第 k 个缺失的正整数
//    // 思路：1 <= arr[i] <= 2000，使用计数排序（k和arr[i]会叠加，所得*2）
//    // 先把arr里面的数放入数组中，然后遍历这个数组
//    // 如果遇到值等于0（等于0就代表当前数是缺失的），那么k--
//    // 再判断k==0，如果等于0就返回当前下标+1.（默认返回-1）
//    // 可以直接在arr计算出第k个缺失的正整数，思路：
//    // 遍历arr，记录上一个i的值，从上一个i的值+1遍历到当前i，用num记录循环的次数
//    // 当num==k时，返回当前指向的值
//    // 否则循环结束，默认返回arr最后一个数+k-num
//    int findKthPositive(vector<int>& arr, int k) {
//        int A[2000] = { 0 };
//        for (int& i : arr) {
//            A[i - 1]++;
//        }
//        for (int i = 0; i < 2000; i++) {
//            if (A[i] == 0) {
//                k--;
//                if (k == 0) {
//                    return i + 1;
//                }
//            }
//        }
//
//        return -1;
//    }
//
//    int findKthPositiveP(vector<int>& arr, int k) {
//        int pre = 0, num = 0;
//        for (int& i : arr) {
//            for (int j = pre + 1; j < i; j++) {
//                num++;
//                if (num == k) {
//                    return j;
//                }
//            }
//
//            pre = i;
//        }
//
//        return arr[arr.size() - 1] + k - num;
//    }
//
//    // 我愿称为终极版，二分懒得写了...
//    int findKthPositiveP(vector<int>& arr, int k) {
//        for (int i = 0; i < arr.size(); i++) {
//            if (arr[i] <= k) {
//                k++;
//            }
//        }
//
//        return k;
//    }
//};
//
//int main() {
//	return 0;
//}