//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // ˼·����words��ÿһ��stringת��Ħ˹���룬Ȼ�󷵻��ж����鲻�ظ���Ħ˹����
//    // ����set�Ĳ����ظ��ԣ��ѵõ���Ħ˹�������set�У���󷵻�set�ĳ��ȼ���
//    int uniqueMorseRepresentations(vector<string>& words) {
//        string s_map[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
//
//        unordered_set<string> bucket;
//        for (auto s : words) {
//            string temp;
//            for (auto c : s) {
//                temp += s_map[c - 'a'];
//            }
//
//            bucket.insert(temp);
//        }
//
//        return bucket.size();
//    }
//};
//
//int main() {
//	return 0;
//}