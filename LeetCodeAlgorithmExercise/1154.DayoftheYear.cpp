//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��һ����YYYY-MM-DD��ʽ���ַ���date����������YYYY��ĵڼ���
//    // ˼·�����ȵ��õ�YYYY�ж��Ƿ�������
//    // Ȼ�����õ�MM��ͨ��MM�õ�MM��ǰһ���µ������졣
//    // ���ս�����ǵ�MM��ǰ������+DD�����MM����2���ҵ�ǰ���������--����󷵻�
//    int dayOfYear(string date) {
//        string temp;
//        int year = -1, month = 0, day = 0;
//        for (int i = 0; 1 ; i++) {
//            if (date[i] == '-') {
//                if (year != -1) {
//                    month = stoi(temp);
//                }
//                else {
//                    year = stoi(temp);
//                }
//                temp.clear();
//            }
//            else if(i == date.size() - 1){
//                temp.push_back(date[i]);
//                day = stoi(temp);
//                break;
//            }
//            else {
//                temp.push_back(date[i]);
//            }
//        }
//
//        int res = getDay(month) + day;
//
//        if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
//            res++;
//        }
//
//        return res;
//    }
//
//    int getDay(int m) {
//        int res = 0;
//        int arr[11] = { 31,28,31,30,31,30,31,31,30,31,30};
//        
//        for (int i = 0; i < m - 1; i++) {
//            res += arr[i];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}