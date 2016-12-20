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
		while (!event) //пока нейтрон не поглотится или не рассеятся
		{
			alpha = angle_dis(generator);
			if (begin and alpha > M_PI / 2)			//если нейтрон полетит не в ту сторону
			{
				i--;
				break;
			}
			x0_s = GenerateExponential(sigma_a + sigma_s, udis(generator));//СВ из экспоненциального распределения
			if (x0 + x0_s*cos(alpha) < 0) //если не прошёл сквозь преграду, продолжаем дальше
				continue;
			if (x0 + x0_s*cos(alpha) >= L) //нейтрон прошёл сквозь преграду
			{
				N++;
				event = true;
				cout << "Passed, N=" << N << endl;
				break;
			}
		}
 		else
    	        {
        	        p_s = udis(generator);
                	if (p_s>sigma_s/(sigma_s+sigma_a)) // нейтрон поглотился
               		 {
               		     cout<<"Eaten"<<endl;
               	    	     event = true;
                   	     break;
                	}