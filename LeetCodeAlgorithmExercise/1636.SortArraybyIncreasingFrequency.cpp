//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����ÿ�������ֵ�Ƶ������������ж��ֵ��Ƶ����ͬ�����㰴����ֵ�������� ���� ����
//    // ˼·������-100 <= nums[i] <= 100����201��С����������¼ÿ����Ƶ�ʡ�����һ��sortAPI����Ƶ�ʱ�д���򼴿�
//    vector<int> frequencySort(vector<int>& nums) {
//        int arr[201] = { 0 };
//        for (int& i : nums) {
//            arr[i + 100]++;
//        }
//
//        sort(nums.begin(), nums.end(), [=](int& i, int& j) {
//            int x = arr[i + 100], y = arr[j + 100];
//            if (x == y) {
//                return i > j;
//            }
//
//            return x < y;
//        });
//
//        return nums;
//    }
//};
//
//int main() {
//	return 0;
//}