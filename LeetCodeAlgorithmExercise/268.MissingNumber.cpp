//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺nums�а���n-1�� 0��n��Χ�ڲ��ظ�����������Ǹ��ڷ�Χ�ڲ����ڵ�����ע�⣡����n��ʵ��num�ĳ��ȣ�
//    // ���Կ�����ʾ˵�����Գ��ԴﵽO(1)�ռ临�Ӷȣ�O(n)ʱ�临�Ӷȣ�Ҳ����˵�����ﲻӦ��ʹ�����ݽṹ
//    // ˼·������һ�¹ٷ��𰸣��зǳ����֣��������о�����ĵ��������ѧ����ӱ߼�Ҳ�У�
//    int missingNumber(vector<int>& nums) {
//        // ����ʹ�����
//        int missing = nums.size();
//        for (int i = 0; i < nums.size(); i++) {
//            missing ^= i ^ nums[i];
//        }
//
//        // һ�α����Ϳ��Եõ������ڵ�������
//        return missing;
//    }
//};
//
//int main() {
//	return 0;
//}