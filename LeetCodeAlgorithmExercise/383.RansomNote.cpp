//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж��ַ���magazine���Ƿ����ransomNote
//    // ���������������ַ�����ֻ����Сд��ĸ
//    // ˼·����ʵ���ж���ĸ��λ��Ҳ����ransomNote�е���ĸ���ֶ��ٴΣ�magazine��Ӧ����ĸҲҪ���ֶ��ٴ�
//    // ����ж��Ƿ���λ�������ȱ���magazine��ʹ��hash��key��Ϊ��ĸ��value��Ϊ���ֵĴ���
//    // �ٱ���ransomNote��������ĸ������--�����ֵС��0�Ǿͷ���false
//    // �ðɣ������ǿ����Ż��ģ�ע�����⣬ֻ����Сд��ĸ��Ҳ����˵����ʹ�����飬����hashmap���Ӷ������ڴ�����
//    bool canConstruct(string ransomNote, string magazine) {
//        // ��magazineת��һ��map
//        unordered_map<char, int> magazineMap;
//
//        for (char c : magazine) {
//            magazineMap[c]++;
//        }
//
//        // �ٱ������ransomNote
//        for (char c : ransomNote) {
//            magazineMap[c]--;
//            if (magazineMap[c] < 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//
//    bool canConstructPlus(string ransomNote, string magazine) {
//        // ��magazineת��һ������map(��Ϊ����˵���ַ���ֻ����26��Сд��ĸ)
//        int magazineMap[26]= { 0 };
//
//        for (char c : magazine) {
//            magazineMap[c-'a']++;
//        }
//
//        // �ٱ������ransomNote
//        for (char c : ransomNote) {
//            magazineMap[c-'a']--;
//            if (magazineMap[c-'a'] < 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//    // ����һд����26��0...
//    int magazineMap[26] = { 0 };
//    int length = sizeof(magazineMap) / sizeof(int);
//    for (int i = 0; i < length; i++) {
//        if ((i + 1) % 5 - 1 == 0) {
//            cout << endl;
//        }
//        cout << magazineMap[i] << "->";
//    }
//    cout << endl;
//
//	return 0;
//}