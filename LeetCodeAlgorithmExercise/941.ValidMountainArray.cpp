//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个arr是否是山峰，满足0 < i < A.length - 1 条件下，存在 i 使得：
//    // A[0] < A[1] < ... A[i - 1] < A[i]
//    // A[i] > A[i + 1] > ... > A[A.length - 1]
//    // 注意！！0 <= A.length <= 10000，如果是一个山峰，那么长度至少为3，所以需要过滤
//    // 思路：双指针，一个从头、一个从尾开始,找到一个下标使得当前指向的值小于后面的值
//    // 最后判断两个指针指向的值是否相等即可.注意排除特殊情况：
//    // 单调递增或者单调递减，这样会导致指针指向0或者arr.size()-1.而根据题意，需要返回false
//    bool validMountainArray(vector<int>& arr) {
//        int i = 0, j = arr.size() - 1;
//
//        while (i < j && arr[i] < arr[i + 1]) {
//            i++;
//        }
//
//        while (i < j && arr[j] < arr[j - 1]) {
//            j--;
//        }
//
//        return i == j && i != 0 && i != arr.size() - 1;
//    }
//
//    // 另一种，线性扫描：先扫描递增的，再扫描递减的，如果最后下标指向arr.size()-1，返回true
//    bool validMountainArrayP(vector<int>& arr) {
//        int i = 0, m = arr.size() - 1;
//
//        while (i < m && arr[i] < arr[i + 1]) {
//            i++;
//        }
//        // 处理特殊情况
//        if (i == 0 || i == m) {
//            return false;
//        }
//
//        while (i < m && arr[i] > arr[i + 1]) {
//            i++;
//        }
//
//        return i == m;
//    }
//    
//};
//
//int main() {
//	return 0;
//}