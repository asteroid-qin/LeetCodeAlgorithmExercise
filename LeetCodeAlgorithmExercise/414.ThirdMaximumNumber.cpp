//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���ǿ����飬���ش������� ��������� ����������ڣ��򷵻���������������
//    // ˼·��ֱ������Ȼ���жϵ������������±��Ƿ�С��0������Ǿͷ��ص�����һ�������±꣬���Ǿ�ֱ�ӷ�������±�
//    // ע�⣡��С���ظ����ݣ�
//    // ����ʹ�ö�̬�滮�������������ֱ��¼��һ�������������ֻ��Ҫ����һ��
//    // ���˼·�ǣ��������ֵʱ����Ҫ������ֵ����¼�ڶ���ֵ�ı���
//    int thirdMax(vector<int>& nums) {
//        long fMax = LONG_MIN, sMax = LONG_MIN, tMax = LONG_MIN;
//
//        for (auto n : nums) {
//            if (n > fMax) {
//                tMax = sMax;
//                sMax = fMax;
//                fMax = n;
//            }
//            else if (n == fMax) {
//                continue;
//            }
//            else if (n > sMax) {
//                tMax = sMax;
//                sMax = n;
//            }
//            else if (n == sMax) {
//                continue;
//            }
//            else if (n > tMax) {
//                tMax = n;
//            }
//        }
//
//        return tMax == LONG_MIN ? fMax : tMax;
//
//    }
//};
//
//int main() {
//    vector<int> n = {3,2,1};
//    Solution s;
//
//    cout << s.thirdMax(n) << endl;
//
//	return 0;
//}