//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // �����������֮�͡��Ǵ�һ���Ѿ��ź������������target
//    // �ٷ��Ƽ�˫ָ��,���Ž����Լ������ɾ�д������..��һ�ι���
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int i = 0, j = numbers.size() - 1;
//        int now = 0;
//        while (i < j) {
//            now = numbers[i] + numbers[j];
//
//            if (now < target) {
//                i++;
//            }
//            else if (now > target) {
//                j--;
//            }
//            else {
//                return {i + 1, j + 1};
//            }
//        }
//
//        return {-1,-1};
//    }
//};
//
//int main() {
//
//
//	return 0;
//}