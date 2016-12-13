#include <iostream>
#include<chrono>
#include<random>
#define M_PI 3.14159265358979323846

using namespace std;

double GenerateExponential(double sigma, double p) //генерирует СВ из экспоненциального распределения
{
    return -log(p)/sigma;
}
int main()
{
	default_random_engine generator (seed);
    uniform_real_distribution<double> udis(0,1); // функция для генерации СВ из равномерного распределения
	for(int i=1; i<=M; i++)
    {

        x0 = 0;
        event = false;
        begin = true;
        while(!event) //пока нейтрон не поглотится или не рассеятся
        {
            alpha = angle_dis(generator);
            if (begin and alpha>M_PI/2)			//если нейтрон полетит не в ту сторону
            {
                i--;
                break;
            } 
}