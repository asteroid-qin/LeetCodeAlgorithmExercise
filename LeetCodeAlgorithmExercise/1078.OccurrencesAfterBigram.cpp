//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺text��Сд��ĸ�Ϳո���ɣ�Ҫ�󷵻�first second �������������ַ������������ĵ��ʣ�����
//    // ���first second��γ��֣��Ǻ���ĵ��ʶ�Ҫ����vector��
//    // ˼·���Ȱ�text�������еĵ��ʶ���ȡ�������õ�һ��string���顣
//    // Ȼ��������string���жϵ�ǰstring�Ƿ����first��������ڣ����жϺ����Ƿ����ٴ��������ַ�
//    // �����ھ�return�����ھ��жϺ�һ��λ���Ƿ����second��������ھͰѵ�����λ�õ��ַ��ŵ�res�У�Ȼ�����ִ��
//    vector<string> findOcurrences(string text, string first, string second) {
//        vector<string> textArr = getV(text);
//        vector<string> res;
//
//        for (int i = 0; i + 2 < textArr.size(); i++) { // +2��֤����Ԥ������λ��
//            if (textArr[i] == first && textArr[i+1] == second) {
//                res.push_back(textArr[i + 2]);
//                i++;
//            }
//        }
//
//        return res;
//    }
//
//    vector<string> getV(string text){
//         vector<string> textArr;
//
//         string s;
//         for (int i = 0; i < text.size();i++) {
//             if (text[i] != ' ') {
//                 s += text[i];
//             }
//             else {
//                 textArr.push_back(s);
//                 s.clear();
//             }
//         }
//
//         textArr.push_back(s);
//
//         return textArr;
//    }
//};
//
//int main() {
//	return 0;
//}