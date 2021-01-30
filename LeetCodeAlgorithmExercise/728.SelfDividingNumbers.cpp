//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出[left, right]内的自除数放在vector中并返回
//    vector<int> selfDividingNumbers(int left, int right) {
//        vector<int> res;
//    
//        while (left <= right) {
//            if (judge(left)) {
//                res.push_back(left);
//            }
//            left++;
//        }
//
//        return res;
//    }
//
//    bool judge(int n) {
//        int temp = n;
//        while (temp) {
//            int carry = temp % 10;
//
//            if (carry == 0 || n % carry != 0) {
//                return false;
//            }
//
//            temp /= 10;
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}