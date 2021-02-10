//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：复写0，就是把arr中每一个0都复写一遍，其他元素右移，并且arr长度不变
//    // 思路：准备一个vector，遍历arr，只要遇到0就额外向后追一个0，当这个vector的size==arr.size()的时候break
//    // 最后遍历，把vector里面的值赋给arr即可。上面思路绝对是没有任何问题的，不过又想到更好的办法
//    // 首先从头到尾遍历，用count记录0的数量，要满足i + count< arr.size()
//    // 然后i--（回到原位），开始倒序遍历.把当前arr[i+count] = arr[i]
//    // 如果当前count==0，那么把arr[i+1] = 0,count--
//    // while循环条件是count!=0
//    // 注意小心i位置为0的越界情况，此时需要只设置i + count- 1位置为0，然后count--，i--即可
//    void duplicateZeros(vector<int>& arr) {
//        int i = 0, count = 0;
//        while (i + count < arr.size()) {
//
//            if (arr[i++] == 0) {
//                count++;
//            }
//
//        }
//        --i;
//        if (i + count > arr.size() - 1) { // 小心越界情况
//            arr[i-- + --count] = 0;
//        }
//
//        while (count != 0) {
//            arr[i + count] = arr[i];
//
//            if (arr[i] == 0) {
//                arr[i + --count] = 0;
//            }
//
//            i--;
//        }
//
//
//    }
//};
//
//int main() {
//	return 0;
//}