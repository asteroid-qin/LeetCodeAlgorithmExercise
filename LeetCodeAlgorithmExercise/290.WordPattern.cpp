//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�pattern��ÿһ���ַ���s��ÿ�������Ƿ���ӳ���ϵ��ע�ⳤ�ȶ�����1������ֻ����Сд��ĸ��
//    // ˼·����������key��pattern��ÿһ��key��Ҫȥs���õ�һ������,��map�бȶ�����֮����ܴ��ڵ�ӳ���ϵ
//    // ��ȥ���⣬������˫��ӳ���ϵ��Ҳ����˵��һ��ӳ��ɹ��Ͳ�Ӧ�øı�ӳ���ϵ��
//    // �ڶ��βȿӣ�֮ǰֻ����j��ͷ�������û�п���i�ȵ�ͷ���������Ҫ���ϣ�
//    bool wordPattern(string pattern, string s) {
//        // ��¼p��s��λ��
//        int i = 0, j = 0;
//
//        // ������Ϊ��˫��ӳ�䣬���Եô�����ӳ���ϵ
//        unordered_map<char, string> uMap;
//        unordered_map<string, char> pMap;
//
//
//
//        while (i < pattern.size()) {
//            // ��ȡs�е���
//            int size = 0;
//            // ע�����while�����˳������������Ҫô�Ǳ�����β��Ҫô�������ո�
//            while (j + size < s.size() && s[j + size] != ' ') {
//                size++;
//            }
//
//            // ���ж�ӳ���ϵ֮ǰ��Ҫ��֤�õ��ĵ����Ƿ�Ϸ�(��Ϊkey���ַ��϶���û����ģ�)
//            if (!size) {
//                // �����СΪ0���Ǿ�û��Ҫ�����Ƚ���
//                return false;
//            }
//
//            // �õ��µõ����ַ���
//            string str = s.substr(j, size);
//
//            // �ж�s��t���Ƿ����ӳ���ϵ��������ھ�ȡ��value���������ʽ��бȽϣ����û�оͰ�ӳ���ϵ���ȥ
//            if (uMap.count(pattern[i]) || pMap.count(str)) {
//                // ��ʼ�Ƚ�
//                if (uMap[pattern[i]] != str || pMap[str] != pattern[i]) {
//                    return false;
//                }
//            }
//            else {
//                // �����ھͰ�ӳ���ϵ���ȥ
//                uMap[pattern[i]] = str;
//                pMap[str] = pattern[i];
//            }
//
//            // ������i��j��ֵ��j��Ҫ��size�Ļ����ϼӼ�
//            i++;
//            j += size + 1;
//        }
//
//        // �������ֻ������j��ָ��β���������û�п���i��ָ��ͷ���������
//        // �����ϣ�������ֻҪ�ж�j��ֵ����
//        return j == s.size() + 1;
//    }
//};
//
//int main() {
//    string s = "asssbade";
//
//    cout << s.substr(3,2) << endl;
//
//	return 0;
//}