//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��Ŀ����̫���ˣ��������������������֮���Ǽ��������һ��Ԫ���ǵ�A���������֮�͵���B���������֮��
//    // Ȼ�󷵻�ֵ���ǣ���A�������Ԫ�ص�ֵ��B�������Ԫ�ص�ֵ���������Ҳֻ��Ҫ��������һ����
//    // ˼·������������ֱ�����A��Ԫ�غ�B��Ԫ��֮�ͣ�Ȼ��˫forѭ��A��B����ÿһ�ֿ��ܣ�ֻҪ����Ԫ�صĲ�ֵ����Ԫ��֮�͵Ĳ�ֵ
//    // ��ô��ֱ�ӷ���������Ԫ�أ���
//    // ������ʱ�ˣ������û�һ��˼·����
//    // �뵽�ˣ�����dif == 2 * (A[i] - B[j])�����ʽ������������֮�͵�˼·�����������⣺
//    // ��B��sumʱ˳���B����set��������A��ֻҪset.count(A[i] - dif / 2),��ô�ͷ������A[i]��A[i] - dif / 2
//    // ���������Ǻ���...(�����ٷ���Ҳȷʵ����ôд��...)
//    // ����һ��������⣬���ֹ�Ȼ���ǿ����Ż��ģ��������ʹ��˫ָ�룡
//    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
//        int sumA = 0, sumB = 0;
//        unordered_set<int> setB;
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//            setB.emplace(i);
//        }
//        
//        // ע�⣡dif == 2 * (A[i] - B[j])Ҳ���Է����ƣ�Ҳ�������������Ĳ�*2���õ��Ŀ϶���һ��ż��
//        // ����dif/2������һ��������������Ҫ���ĳ������������
//        int dif = (sumA - sumB) / 2;
//        for (auto& i : A) {
//            if (setB.count(i - dif)) {
//                return { i, i - dif };
//            }
//        }
//                
//        return {};
//    }
//
//    // ʹ������+���ַ�
//    vector<int> fairCandySwapP(vector<int>& A, vector<int>& B) {
//        int sumA = 0, sumB = 0, l , r, mid;
//
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//        }
//        int dif = (sumA - sumB) / 2;
//        sort(B.begin(), B.end());
//        // ֱ�����dif��������A��ÿһ�������ж��ֲ��ң�//A[i] - B[j] = dif
//        for (auto& i : A) {
//            l = 0, r = B.size() - 1;
//            int num = i - dif;
//            while (l <= r) {
//                mid = (l + r) / 2;
//
//                if (num == B[mid]) {
//                    return { i, num };
//                }
//                else if (num > B[mid]) {
//                    l = mid + 1;
//                }
//                else {
//                    r = mid - 1;
//                }
//            }
//        }
//
//        return {};
//    }
//
//    // ����1 <= B[i] <= 100000�����һ���Ż�
//    vector<int> fairCandySwapPP(vector<int>& A, vector<int>& B) {
//        int arrB[100001] = { 0 };
//        int sumA = 0, sumB = 0;
//        for (auto& i : A) sumA += i;
//        for (auto& i : B) {
//            sumB += i;
//            arrB[i] = 1; // С��Խ�����⣡��
//        }
//
//        int dif = (sumB - sumA) / 2;
//        for (auto& i : A) {
//            int num = i + dif;
//            if (num >= 0 && num < 100001 && arrB[num]) {
//                return { i,i + dif };
//            }
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}