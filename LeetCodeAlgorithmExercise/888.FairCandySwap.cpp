//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：题目描述太长了（不方便概括）。。。总之就是计算出交换一个元素是的A里面的数字之和等于B里面的数字之和
//    // 然后返回值就是，【A交换这个元素的值，B交换这个元素的值】。多个答案也只需要返回其中一个！
//    // 思路：暴力法！！直接算出A中元素和B中元素之和，然后双for循环A、B，找每一种可能，只要两个元素的差值等于元素之和的差值
//    // 那么就直接返回这两个元素！！
//    // 靠！超时了！！！得换一个思路！！
//    // 想到了！根据dif == 2 * (A[i] - B[j])这个公式，可以用两数之和的思路来解决这个问题：
//    // 求B的sum时顺便把B做成set，最后遍历A，只要set.count(A[i] - dif / 2),那么就返回这个A[i]和A[i] - dif / 2
//    // 哈哈，还是好慢...(不过官方解也确实是这么写的...)
//    // 看了一下其他题解，发现果然还是可以优化的！！排序后使用双指针！
//    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//        int sumA = 0, sumB = 0;
//        unordered_set<int> setB;
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//            setB.emplace(i);
//        }
//        
//        // 注意！dif == 2 * (A[i] - B[j])也可以反着推，也就是两个整除的差*2，得到的肯定是一个偶数
//        // 所以dif/2绝对是一个整数！！不需要担心出现余数的情况
//        int dif = (sumA - sumB) / 2;
//        for (auto& i : A) {
//            if (setB.count(i - dif)) {
//                return { i, i - dif };
//            }
//        }
//                
//        return {};
//    }
//
//    // 使用排序+二分法
//    vector<int> fairCandySwapP(vector<int>& A, vector<int>& B) {
//        int sumA = 0, sumB = 0, l , r, mid;
//
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//        }
//        int dif = (sumA - sumB) / 2;
//        sort(B.begin(), B.end());
//        // 直接算出dif，排序后对A中每一个数进行二分查找：//A[i] - B[j] = dif
//        for (auto& i : A) {
//            l = 0, r = B.size() - 1;
//            int num = i - dif;
//            while (l <= r) {
//                mid = (l + r) / 2;
//
//                if (num == B[mid]) {
//                    return { i, num };
//                }
//                else if (num > B[mid]) {
//                    l = mid + 1;
//                }
//                else {
//                    r = mid - 1;
//                }
//            }
//        }
//
//        return {};
//    }
//
//    // 根据1 <= B[i] <= 100000，最后一次优化
//    vector<int> fairCandySwapPP(vector<int>& A, vector<int>& B) {
//        int arrB[100001] = { 0 };
//        int sumA = 0, sumB = 0;
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//            arrB[i] = 1; // 小心越界问题！！
//        }
//
//        int dif = (sumB - sumA) / 2;
//        for (auto& i : A) {
//            int num = i + dif;
//            if (num >= 0 && num < 100001 && arrB[num]) {
//                return { i,i + dif };
//            }
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}