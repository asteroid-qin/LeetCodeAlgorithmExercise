//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����ÿ�� nums[i] �����������Ч�� j ������������ j ���� j != i �� nums[j] < nums[i]
//    // ˼·����temp copy nums��Ȼ���temp��������Ȼ���temp����map��key��ֵ��value�Ƕ������ȵ�ǰС
//    // ������nums��ȥmap��Ȼ��ֵ
//    // �ðɣ�����һ��˼·��0 <= nums[i] <= 100�������������ʹ�ü�������
//    // �ȱ���һ�飬��nums�����ֵ����101��С��Ͱ�У�Ȼ��Ӵ�С�������Ͱ
//    // ����ֵ����0������һ��������¼�ж���Ԫ�رȵ�ǰҪ�� pre
//    // �����ǰֵ����0����ô�ѵ�ǰֵ��Ϊkey�����ܴ�С-pre-��ǰֵ��������Ϊvalue����map�С������pre+��ǰֵ������
//    // ������ɺ󣬵õ�map��������һ��nums����map��ֵ����
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        vector<int> temp(nums.begin(), nums.end());
//        sort(temp.begin(), temp.end(), greater<int>());
//        unordered_map<int, int> m;
//
//        int len = temp.size();
//        for (int i = 0; i < len;) {
//            int num = temp[i];
//            int count = 1;
//
//            while (i + 1 < len && num == temp[i + 1]) {
//                i++;
//                count++;
//            }
//
//            m[num] = len - i - 1;
//        }
//
//        for (auto& i : nums) {
//            i = m[i];
//        }
//
//        return nums;
//    }
//
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        int bucket[101] = { 0 };
//        for (auto& i : nums) {
//            bucket[i]++;
//        }
//
//        unordered_map<int, int> m;
//        for (int i = 100, pre = 0, size = nums.size(); i >= 0; i--) {
//            if (bucket[i] == 0) continue;
//            m[i] = size - pre - bucket[i];
//            pre += bucket[i];
//        }
//
//        for (auto& i : nums) {
//            i = m[i];
//        }
//
//        return nums;
//    }
//};
//
//int main() {
//	return 0;
//}