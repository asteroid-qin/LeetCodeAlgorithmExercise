//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<sstream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��Day Month Year��ʽת��YYYY-MM-DD��ʽ������
//    // ˼·��....���鷳����д����������������.��
//    // ��֮�ȸ��ݿո�ָ��õ������գ�����Ҫתint�����������⣬���ǲ���Ҫ����ģ��ؼ�����
//    // ����϶�����map��ӳ��12�п��ܣ��Լ��������̫������...����������գ�ȥ���յ�������׺
//    // �ж��յĳ����Ƿ����1���ǵĻ���Ҫ��ǰͷ+0.�����������ַ�����ƴ-���ؼ���
//    string reformatDate(string date) {
//        unordered_map<string, string> s2month = {
//            {"Jan", "01"},
//            {"Feb", "02"},
//            {"Mar", "03"},
//            {"Apr", "04"},
//            {"May", "05"},
//            {"Jun", "06"},
//            {"Jul", "07"},
//            {"Aug", "08"},
//            {"Sep", "09"},
//            {"Oct", "10"},
//            {"Nov", "11"},
//            {"Dec", "12"}
//        };
//
//        stringstream s(date);
//        string year, month, day;
//        s >> day >> month >> year;
//
//        month = s2month[month];
//        day.pop_back();
//        day.pop_back();
//        if (day.size() == 1) {
//            day = "0" + day;
//        }
//
//        return year + "-" + month + "-" + day;
//    }
//
//};
//int main() {
//	return 0;
//}