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
	
}