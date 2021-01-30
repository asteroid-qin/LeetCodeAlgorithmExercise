//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把S按照规则转成拉丁文格式的string（其实就是按照要求进行字符串拼接而已）
//    // 思路：根据空格分隔，拿到每一个单词。然后根据单词是否是以元音字母开头进行拼串，最后返回这个字符串即可
//    // 注意第三条！第一个单词需要在后面加一个a，第二个则是两个，所以得用一个变量记录单词个数。最后如果当前不是最后一个
//    // 单词，那么就在后面加上一个空格
//    string toGoatLatin(string S) {
//        int m = S.size(), count = 0;
//        string res;
//
//        for (int i = 0; i < m; i++) {
//            count++;
//            int size = 0;
//
//            while (i + size < m && S[i + size] != ' ') {
//                size++;
//            }
//
//            string now = S.substr(i, size);
//
//            if (judge(now[0])) {
//                res += now + "ma";
//            }
//            else {
//                res += now.substr(1, -1) + now[0] + "ma";
//            }
//
//            for (int j = 0; j < count; j++) {
//                res += "a";
//            }
//
//            if (i + size != m) {
//                res += " ";
//            }
//
//            i += size;
//        }
//
//        return res;
//    }
//
//    bool judge(char c) {
//        c = tolower(c);
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//    }
//};
//
//int main() {
//	return 0;
//}