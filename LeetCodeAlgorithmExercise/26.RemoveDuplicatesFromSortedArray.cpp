//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // �����̫���ˣ���leetcode��������һ��д���ˣ�����ûʲô����������
//    // ����Ҫ�ľ���Ҫ��һ������j��¼��ͬ��Ԫ�أ�Ȼ��������1��ʼ������
//    int removeDuplicates(vector<int>& nums) {
//        if (nums.size() == 0) {
//            return 0;
//        }
//
//        int j = 0;
//        // �����������
//        for (int i = 0; i + 1 < nums.size(); i++) {
//            if (nums[i] != nums[i + 1]) {
//                nums[++j] = nums[i + 1];
//            }
//        }
//
//        return j + 1;
//    }
//};
//
//int main() {
//    // ׼��һ��vector���ڲ���
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//
//    Solution s;
//    int lenght = s.removeDuplicates(v);
//
//    // ��ӡ����޸ĳ��Ⱥ��v
//    for (int i = 0; i < lenght; i++) {
//        cout << "��ǰ�±꣺" << i << "��ǰԪ�أ�" << v.at(i) << endl;
//    }
//
//    return 0;
//}