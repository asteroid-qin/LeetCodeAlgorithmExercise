//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����������������������������YYYY-MM-DD��ʽ��
//    // ˼·�����Լ���date1��������Ȼ�����date2�������������������
//    // Ҳ���ԣ�����date1������С��date2��swap)
//    // �ټ���date1��date2�����꣨���껻���������
//    // �����껻��ɵ�����-date1������+date1��һ�������+date2�����������ؼ���
//    // �Ҽǵ�һ����ʽ����ֱ�Ӹ����������������1970��1��1�ն����죬����ֱ���׹�ʽ���㹻��
//    int daysBetweenDates(string date1, string date2) {
//        if (date1 > date2) {
//            swap(date1, date2);
//        }
//
//        vector<int> d1 = getNum(date1);
//        vector<int> d2 = getNum(date2);
//        int mon[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
//        int res = 0;
//
//        for (int i = d1[0]; i < d2[0]; i++) {
//            res += 365;
//
//            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) { // ����
//                res++;
//            }
//        }
//
//        // ����date1�µ�����
//        for (int i = 0; i < d1[1] - 1; i++) {
//            res -= mon[i];
//        }
//        // ����date2�µ�����
//        for (int i = 0; i < d2[1] - 1; i++) {
//            res += mon[i];
//        }
//
//        // ���date1�����겢���·ݴ���2���ǻ���Ҫ-1
//        if (d1[1] > 2 && d1[0] % 4 == 0 && (d1[0] % 100 != 0 || d1[0] % 400 == 0)) {
//            res--;
//        }
//        // ���date2�����겢���·ݴ���2���ǻ���Ҫ+1
//        if (d2[1] > 2 && d2[0] % 4 == 0 && (d2[0] % 100 != 0 || d2[0] % 400 == 0)) {
//            res++;
//        }
//
//        return res - d1[2] + d2[2]; // ����ȥ��
//    }
//
//    // ���ַ���ת�����飨0���꣬1���£�2���죩
//    vector<int> getNum(string date) {
//        vector<int> res(3);
//        string s;
//        int index = 0;
//
//        for (int i = 0; i < date.size(); i++) {
//            if (date[i] == '-') {
//                res[index++] = stoi(s);
//                s.clear();
//                continue;
//            }
//
//            s.push_back(date[i]);
//        }
//        res[index] = stoi(s);
//
//        return res;
//    }
//    
//};
//
//int main() {
//	return 0;
//}