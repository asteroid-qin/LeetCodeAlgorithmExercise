//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ؿ�������װ�� ��Ԫ �� ��� ������
//    // ˼·����boxTypes��������Ҫ���boxTypes[i][1]�ϴ�ķ���ǰ��
//    // ����󣬱���boxTypes�������ж�truckSize�Ƿ����0��Ȼ��boxTypes[i][1]�Ƿ���ڵ���truckSize��
//    // �ǣ���boxTypes[i][1]*boxTypes[i][0]���ѽ������sum�У�truckSize��ȥboxTypes[i][1]
//    // ���Ǿͽ�����һ��ѭ��
//    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//        int sum = 0;
//        sort(boxTypes.begin(), boxTypes.end(), [=](vector<int>& v1, vector<int>& v2) {
//            return v1[1] > v2[1];
//            });
//
//        for (auto& v : boxTypes) {
//            if (truckSize >= v[0]) {
//                sum += v[0] * v[1];
//                truckSize -= v[0];
//            }
//            else{
//                sum += truckSize * v[1];
//                break;
//            }
//        }
//
//        return sum;
//    }
//};
//
//int main() {
//	return 0;
//}