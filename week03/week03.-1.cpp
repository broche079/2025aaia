//week03.-1.cpp �G�X�@ c++������
//leetcode 2579. count total number of colored cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n;//�n�g�o��A��Ʀr�ɯšA��64�줸[�ܪ��ܪ������]
        return ans*ans + (ans-1)*(ans-1); //c/c++/java/c# ���n�[����
    }
};
