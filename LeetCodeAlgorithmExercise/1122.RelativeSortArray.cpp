//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��arr1����arr2�����������arr2�в����ڵľͷ��ں�����������
//    // ˼·������sort api��ֻҪ�޸ıȽϵĹ���Ϳ���
//    // ���Ȱ�arr2�������е�������ӳ�䡣���� 0 <= arr1[i], arr2[i] <= 1000����������������¼����������ȼ�
//    // Ĭ�ϴ�1��ʼ��0���������ڣ���¼��ÿһ���������ȼ�
//    // Ȼ���д�ȽϹ���
//    // �����ж������������Ƿ����map�У��������������ô�������С���ұ�
//    // �������һ�����ڣ������������߾�false����Ȼtrue
//    // ������������ڣ�����������map�еĵ�λ�ıȽ�
//    // ������һ��˼·������ȫȫʹ�ü������򣬰�arr1��������󣬱���arr2������ÿһ��Ԫ����arr1�в���
//    // ���������0����ѭ����������ӡ�ֱ���������arr2.Ԫ����Ȼ���Ѿ��������
//    // ����arr1�п��ܻ���ʣ��һЩԪ�أ���ʱ��Ҫ�ٴӵ���β����һ��arr1��Ͱ�ӣ���ʣ�µ�Ԫ��ѭ������
//    // ���������д��...
//    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//        int m[1001] = { 0 };
//        for (int i = 0, count = 1; i < arr2.size(); i++) {
//            if (!m[arr2[i]]) { // �����ھͰ���˳���¼
//                m[arr2[i]] = count++;
//            }
//        }
//        
//        sort(arr1.begin(), arr1.end(), [=](int& i, int& j) {
//            bool flag1 = m[i];
//            bool flag2 = m[j];
//
//            if (!flag1 && !flag2) {
//                return i < j;
//            }
//            else if (!flag1) {
//                return true;
//            }
//            else if (!flag2) {
//                return false;
//            }
//            else {
//                return m[i] < m[j];
//            }
//        });
//
//        return arr1;
//
//    }
//
//    // ����дһ������
//    void qucikSort(vector<int>& res, int left, int right) {
//        if (left < right) {
//            int num = res[left], i = left, j = right;
//
//            while (i < j) {
//                if (res[j] >= num) {
//                    j--;
//                }
//                else if (res[i] < num) {
//                    i++;
//                }
//                else {
//                    swap(res[i], res[j--]);
//                }
//            }
//
//            qucikSort(res, left, i - 1);
//            qucikSort(res, i + 1, right);
//        }
//    }
//
//    // ��˳��дһ���鲢
//    void mergeSort(vector<int>& res, int left, int right) {
//        if (left < right) {
//            int mid = (left + right) / 2;
//
//            mergeSort(res, left, mid);
//            mergeSort(res, mid + 1, right);
//
//            // ��ʼ��
//            int size = right - left + 1;
//            vector<int> temp(size);
//
//            for (int i = left, j = mid + 1, pos = 0; i <= mid || j <= right; pos++) {
//                int x = (i <= mid) ? res[i] : INT_MAX;
//                int y = (j <= right) ? res[j] : INT_MAX;
//
//                if (x > y) {
//                    temp[pos] = y;
//                    j++;
//                }
//                else {
//                    temp[pos] = x;
//                    i++;
//                }
//            }
//
//            for (int i = 0; i < size; i++) {
//                res[left++] = temp[i];
//            }
//        }
//    }
//    
//};
//
//
//int main() {
//    Solution s;
//
//    vector<int> res = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
//
//    //s.qucikSort(res, 0 , res.size() - 1);
//
//    //s.relativeSortArray(res, res);
//
//    s.mergeSort(res, 0, res.size() - 1);
//
//    for (auto& i : res) {
//        cout << i << "->";
//    }
//
//    cout << endl;
//
//	return 0;
//}