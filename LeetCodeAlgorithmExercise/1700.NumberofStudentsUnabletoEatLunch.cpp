//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����޷�����͵�ѧ��������
//    // ˼·��
//    // ����һ��sandwiches��¼0��1�ĸ���
//    // Ȼ��whileѭ����Ҫ��j!=sandwiches.size() ���� jָ���ֵ��1����ô1�ĸ���������0����֮
//    // ��whlieѭ������sandwiches���е�-1��Ȼ���ж�iָ���ֵ�Ƿ����jָ���ֵ��
//    // ���ھ��ж�iָ���ֵ�ǵ���0����1,��--��Ȼ���iָ���ֵ��Ϊ-1����i++��j++
//    // �������ȣ���i++������һ��ѭ����
//    // ���������students.size() - j
//    int countStudents(vector<int>& students, vector<int>& sandwiches) {
//        int m = students.size(), n = sandwiches.size();
//        int i = 0, j = 0;
//
//        int arr[2] = { 0 };
//        for (int& i : students) {
//            arr[i]++;
//        }
//
//        while (j != n && arr[sandwiches[j]]) {
//            while (students[i % m] == -1) i++;
//            if (students[i % m] == sandwiches[j]) {
//                arr[students[i % m]]--;
//                students[i % m] = -1;
//                j++;
//            }
//            i++;
//        }
//
//        return n - j;
//    }
//
//    // ������Ļ����Ͽ��Խ�һ���Ż���ֱ�Ӱ�������󵽣�ֻ��0��1ʣ�������й�
//    int countStudents(vector<int>& students, vector<int>& sandwiches) {
//        int arr[2] = { 0 };
//        for (int& i : students) {
//            arr[i]++;
//        }
//
//        for (int i = 0; i < sandwiches.size(); i++) {
//            if (!arr[sandwiches[i]]) {
//                break;
//            }
//
//            arr[sandwiches[i]]--;
//        }
//
//        return arr[0] + arr[1];
//    }
//};
//
//int main() {
//	return 0;
//}