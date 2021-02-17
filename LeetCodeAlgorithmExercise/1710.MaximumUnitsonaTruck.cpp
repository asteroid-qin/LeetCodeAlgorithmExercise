//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回卡车可以装载 单元 的 最大 总数。
//    // 思路：对boxTypes进行排序，要求把boxTypes[i][1]较大的放在前面
//    // 排序后，遍历boxTypes，首先判断truckSize是否大于0，然后boxTypes[i][1]是否大于等于truckSize，
//    // 是，求boxTypes[i][1]*boxTypes[i][0]并把结果放入sum中，truckSize减去boxTypes[i][1]
//    // 不是就进入下一轮循环
//    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//        int sum = 0;
//        sort(boxTypes.begin(), boxTypes.end(), [=](vector<int>& v1, vector<int>& v2) {
//            return v1[1] > v2[1];
//            });
//
//        for (auto& v : boxTypes) {
//            if (truckSize >= v[0]) {
//                sum += v[0] * v[1];
//                truckSize -= v[0];
//            }
//            else{
//                sum += truckSize * v[1];
//                break;
//            }
//        }
//
//        return sum;
//    }
//};
//
//int main() {
//	return 0;
//}