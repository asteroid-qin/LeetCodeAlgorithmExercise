//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // ��������ǰ׺
//    string longestCommonPrefix(vector<string>& strs) {
//        // ��һ��������¼������
//        int commonLength = 0;
//
//        // ֱ��һ����forѭ��
//        for (int i = 1; i < strs.size(); i++) {
//            // �õ�һ���͵�n��һֱ�Ƚ�
//            setCommonLengthByTwoString(strs.at(0), strs.at(i), commonLength);
//
//            // ��һ��if�жϽ����Ż�
//            if (commonLength == 0)
//                return "";
//        }
//
//        // ������Ҫ�ų���strs����ֻ��һ���ַ��������
//        if (commonLength == 0 && !(strs.size() == 1)) {
//            return "";
//        }
//        else {
//            return strs.at(0);
//        }
//    }
//
//    // �Դ���������ַ���ǰ׺�Ƚϲ����ع���ǰ׺����
//    // ��ΪĬ���ǵ�һ���͵�n���Ƚϣ�����ÿ�αȽϳɹ��Ͱѵ�һ���ַ������ݹ������Ƚ��н�ȡ
//    void setCommonLengthByTwoString(string &s1, string& s2, int & commonLength) {
//        // ��¼ÿ�εĹ�������
//        int myCommonLength = 0;
//
//        // �жϵ�һ���ַ����ĳ���,���Ϊ0ֱ���˳�
//        if (s1.size() == 0) {
//            commonLength = 0;
//            return;
//        }
//
//        // ֱ�ӱ���
//        for (int i = 0; i < s1.size() && i < s2.size(); i++) {
//            if (s1.at(i) == s2.at(i)) {
//                myCommonLength++;
//            }
//            else {
//                break;
//            }
//        }
//
//        // ������Ϻ�
//        commonLength = myCommonLength;
//        // �ٶԵ�һ���ַ�������ɾ��
//        s1.erase(commonLength);
//    }
//};
//
//int main() {
//
//    Solution s;
//
//    string s1 = "flowwer";
//    string s2 = "flowww";
//    int common = 0;
//
//    s.setCommonLengthByTwoString(s1, s2, common);
//
//
//    cout << "ִ�к�����s1��" << s1 << "->" << endl;
//    cout << "��������:" << common << endl;
//	return 0;
//}
