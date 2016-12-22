#include <iostream>
#include<chrono>
#include<random>
#define M_PI 3.14159265358979323846

using namespace std;

double GenerateExponential(double sigma, double p)
{
    return -log(p)/sigma;
}
int main()
{
    double L = 1, sigma_s=5, sigma_a=5, N=0, alpha, x0, x0_s, p_s;
    bool event, begin;
    //setlocale(LC_ALL, "Russian");
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine generator (seed);
    uniform_real_distribution<double> udis(0,1);
    uniform_real_distribution<double> angle_dis(-M_PI/2, 3*M_PI/2);
    int M=100000;
    for(int i=1; i<=M; i++)
    {

        x0 = 0;
        event = false;
        begin = true;
        while(!event) //пока нейтрон не поглотится или не рассеятся
        {
            alpha = angle_dis(generator);
            if (begin and alpha>M_PI/2)
            {
                i--;
                break;
            } 
            x0_s = GenerateExponential(sigma_a + sigma_s, udis(generator));
            if (x0+ x0_s*cos(alpha)<0)
                continue;
            if (x0+ x0_s*cos(alpha)>=L ) //нейтрон прошёл сквозь преграду
            {
                N++;
                event = true;
                cout<<"Passed, N="<<N<<endl;
                break;
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
                else //нейтрон рассеялся
                {
                    x0=x0_s*cos(alpha)+x0;
                    begin = false;
                }

              }

        }
    }
    cout<<N/M<<endl;
    return 0;
    system("pause");
}
