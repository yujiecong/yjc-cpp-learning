#pragma once
class conFinal
{
public:
    char name;
    int eng, chi, mat, total;

    void *getName();
    int getChi();
    int getEng();
    int getMat();
    void setEng(int x);
    void setChi(int x);
    void setMat(int x);
    int getTotal();
    float getAvg();
    void show();
};
