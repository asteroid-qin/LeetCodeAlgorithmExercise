//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������������ҵ�list1��list2����ͬ���ַ���������
//    // ˼·��ʹ��map������һ�ΰ�list1ת��set���ٱ���һ��list2���鵽����res�зż���
//    // ��ΪҪ�����������ͣ�������Ҫ��һ���������жϵ�ǰ�������Ƿ�С������������Ǿ͸���res�����ֵ
//    // ���ǣ��ͷŹ����Ԫ��
//    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//        vector<string> res;
//
//        // ��¼ÿһ���ַ�����������
//        unordered_map<string, int> myMap;
//        for (int i = 0; i < list1.size(); i++) {
//            myMap[list1[i]] = i;
//        }
//
//        // ��һ��������¼��С������
//        int minIndex = INT_MAX;
//
//        for (int i = 0; i < list2.size(); i++) {
//            if (myMap.count(list2[i])) {
//                // �������ǵ������ͣ����ھͷŹ���С�ھ͸���,���ھ��������
//                if (myMap[list2[i]] + i < minIndex) {
//                    // ���res��Ȼ��ѵ�ǰ������
//                    res.clear();
//                    res.push_back(list2[i]);
//                    // ����minIndex
//                    minIndex = myMap[list2[i]] + i;
//                }
//                else if (myMap[list2[i]] + i == minIndex) {
//                    res.push_back(list2[i]);
//                }
//                
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}