//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // ���Ҳ̫���˰ɣ�ֱ����������д����������һ��С��û����targetֵ��nums��ֵ��Ҫ��
//    // ����ô���ˣ�����Ȼ��������ظ�ֵ������Ӧ�����ظ�ֵ��ǰ��(������ͻȻ�ĳ����ĺܿ�)
//    // һ��98 һ��93
//    // �������һ�¶��ֲ��ң���֪��Ϊʲô��2�ַ��ǳ�����Ӧ�������ݲ������ԭ��
//    int searchInsert(vector<int>& nums, int target) {
//        // ֱ��һ��forѭ��
//        for (int i = 0; i < nums.size(); i++) {
//            // �жϵ�ǰ������Ԫ���Ƿ��targetҪ��
//            if (nums[i] > target) {
//                // ����ǣ���ô��ȡ��targetǰ���ֵ(ע���ж�iΪ0�����)
//                if (i == 0) {
//                    return 0;
//                }
//
//                // �ж�target�Ƿ����ǰ���ֵ��������ڣ������±꣬��������ڣ����ص�ǰ�±�
//                if (target == nums[i - 1]) {
//                    return i - 1;
//                }
//                else {
//                    return i;
//                }
//            }
//            else if (nums[i] == target) {
//                // ������ڣ�ֱ�ӷ����±�
//                return i;
//            }
//        }
//
//        // ��������Ҷ�û��return�Ļ�����ôtargetӦ�ñ�����Ԫ�ض���
//        return nums.size();
//    }
//};
//
//// ���ò��ˣ���������һ�ι�
//int main() {
//
//
//}