//week03.-1.cpp 二合一 c++的版本
//leetcode 2579. count total number of colored cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n;//要寫這行，把數字升級，變64位元[很長很長的整數]
        return ans*ans + (ans-1)*(ans-1); //c/c++/java/c# 都要加分號
    }
};
