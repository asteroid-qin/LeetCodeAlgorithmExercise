//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� nums ��������ΨһԪ������Щֻ���� ǡ��һ�� ��Ԫ�ء�
//    // ���㷵�� nums ��ΨһԪ�ص� �� ��
//    // ˼·������һ��nums��ÿһ��Ԫ�ط���map�У�key��ֵ��value�ǳ��ֵĴ���
//    // �ٱ���һ��nums��ȥmap�в飬�����ǰֵ���ֵĴ�������1�ͼ��뵽sum�У���󷵻����sum
//    // �����Ϊ1 <= nums[i] <= 100��������101��С������Ҳ�У�
//    int sumOfUnique(vector<int>& nums) {
//        int m[101] = { 0 };
//
//        for (auto& i : nums) {
//            m[i]++;
//        }
//
//        int res = 0;
//        for (int i = 1; i < 101; i++) {
//            if (m[i] == 1) {
//                res += i;
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