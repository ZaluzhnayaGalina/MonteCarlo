#include <iostream>
#include<chrono>
#include<random>
#define M_PI 3.14159265358979323846

using namespace std;

double GenerateExponential(double sigma, double p) //���������� �� �� ����������������� �������������
{
    return -log(p)/sigma;
}
int main()
{
	default_random_engine generator (seed);
    uniform_real_distribution<double> udis(0,1); // ������� ��� ��������� �� �� ������������ �������������
	for(int i=1; i<=M; i++)
    {

        x0 = 0;
        event = false;
        begin = true;
        while(!event) //���� ������� �� ���������� ��� �� ���������
        {
            alpha = angle_dis(generator);
            if (begin and alpha>M_PI/2)			//���� ������� ������� �� � �� �������
            {
                i--;
                break;
            } 
}