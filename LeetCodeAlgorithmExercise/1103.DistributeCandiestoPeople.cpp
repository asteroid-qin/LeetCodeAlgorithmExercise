//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺һ��num_people���˷��ǹ���Ҫ��1�ֵ�1����n�ֵ�n��Ȼ�����1�ֵ�n+1����n�ֵ�2n����ֱ��candies=0
//    // ˼·���ȴ���һ��vector��Ȼ��whileѭ������������飬������candies=0����һ����������¼��ǰ�ǵڼ���
//    // ���õ���ǰӦ�÷ֵ����ǹ���i + ����*n,�ж�candies�Ƿ��㹻���㹻��������ӣ����㹻�Ͱ�ʣ�µķ��뵱ǰ�����в�ֱ��return
//    // ����һ��˼·����������͹�ʽ�ж�candies�ܹ����㼸��
//    vector<int> distributeCandies(int candies, int num_people) {
//        /*int step = 0;
//        vector<int> res(num_people, 0);
//
//        while (candies) {
//            for (int i = 0; i < num_people; i++) {
//                int cand = i + 1 + step * num_people;
//
//                if (candies > cand) {
//                    res[i] += cand;
//                    candies -= cand;
//                }
//                else {
//                    res[i] += candies;
//                    return res;
//                }
//            }
//
//            step++;
//        }
//
//        return res;*/
//
//
//        // ����һ�¹ٷ��⣬�о�д�ĸ��
//        vector<int> res(num_people, 0);
//        int i = 0;
//        while (candies) {
//            res[i % num_people] += min(candies, i + 1);
//            candies -= min(candies, i + 1);
//            i++;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}