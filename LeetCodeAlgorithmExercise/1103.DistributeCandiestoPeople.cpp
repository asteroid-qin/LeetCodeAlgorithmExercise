//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：一共num_people个人分糖果。要求1分到1个，n分到n，然后继续1分到n+1个，n分到2n个，直到candies=0
//    // 思路：先创建一个vector，然后while循环遍历这个数组，条件是candies=0，用一个变量来记录当前是第几轮
//    // 先拿到当前应该分到的糖果，i + 轮数*n,判断candies是否足够，足够就往里面加，不足够就把剩下的放入当前容器中并直接return
//    // 还有一种思路！！借助求和公式判断candies能够满足几轮
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
//        // 看了一下官方解，感觉写的更妙！
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