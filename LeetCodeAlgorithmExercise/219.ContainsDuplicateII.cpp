//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // ����һ��������档Ŀ�꣺�ж�vector���Ƿ���Ԫ���ظ������������ظ�������ֵ�Ĳ�С��k
//    // ˼·�����ҳ��ظ���ֵ����¼���ǵ�������Ȼ���ж����������Ĳ��Ƿ���С��k��
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        // �������⣬���������Ӧ��ʹ��map��key�ž������֣�value������
//        unordered_map<int, int> myMap;
//
//        for (int i = 0; i < nums.size(); i++) {
//            // �����ж���û��
//            if (myMap.count(nums[i])) {
//                // ����У���ô��Ҫȡ����ǰֵ֮ǰ��map�з�����
//                // ��Ϊ�Ǵ�С���������������i�϶��Ǵ���֮ǰ������������������������жϼ���
//                if (i - myMap[nums[i]] <= k) {
//                    // �������õ���ֵ����k��Χ�ڣ��ǳɹ���
//                    return true;
//                }
//                // ��Ȼ��ÿ����Ҫ���µ�ǰ��ֵ
//            }
//            // �ѵ�ǰ����map�У�Ҳ������Ϊ���£�
//            myMap[nums[i]] = i;
//        }
//
//        return false;
//    }
//
//    // ����Ҳ����ʹ��set����
//    bool containsNearbyDuplicate2(vector<int>& nums, int k) {
//        // ׼��һ��set
//        unordered_set<int> mySet;
//
//        for (int i = 0; i < nums.size(); i++) {
//           // ��������ʹ�����
//           if (mySet.count(nums[i])) {
//                return true;
//           }
//           mySet.insert(nums[i]);
//           // �����һ������
//           // �������⣬�������������ظ������±���k��
//           // �������set��С��k���ǲ�����ζ�Ӧ�÷���false
//           if (mySet.size() > k) {
//               // ��set�Ĵ�С����k��ʱ��Ϊ������myset�����Ԫ�ظ���ʼ����k�ڣ���Ҫ��ǰ����Ƴ���            
//               mySet.erase(nums[i - k]);
//           }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}