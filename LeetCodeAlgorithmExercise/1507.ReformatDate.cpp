//#include<iostream>
//#include<unordered_map>
//#include<string>
//#include<sstream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把Day Month Year格式转成YYYY-MM-DD格式并返回
//    // 思路：....好麻烦懒得写（处理日期贼恶心.）
//    // 总之先根据空格分隔得到年月日（不需要转int），根据题意，年是不需要处理的，关键是月
//    // 这里肯定是用map来映射12中可能（自己手巧真的太恶心了...），最后是日，去掉日的两个后缀
//    // 判断日的长度是否等于1，是的话需要在前头+0.最后把这三个字符串中拼-返回即可
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