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
		while (!event) //���� ������� �� ���������� ��� �� ���������
		{
			alpha = angle_dis(generator);
			if (begin and alpha > M_PI / 2)			//���� ������� ������� �� � �� �������
			{
				i--;
				break;
			}
			x0_s = GenerateExponential(sigma_a + sigma_s, udis(generator));//�� �� ����������������� �������������
			if (x0 + x0_s*cos(alpha) < 0) //���� �� ������ ������ ��������, ���������� ������
				continue;
			if (x0 + x0_s*cos(alpha) >= L) //������� ������ ������ ��������
			{
				N++;
				event = true;
				cout << "Passed, N=" << N << endl;
				break;
			}
		
 			else
    	       		 {
        	    	    p_s = udis(generator);
                	    if (p_s>sigma_s/(sigma_s+sigma_a)) // ������� ����������
               		 {
               		     cout<<"Eaten"<<endl;
               	    	     event = true;
                   	     break;
                	 }
			     else //������� ���������
             		   {
               		     x0=x0_s*cos(alpha)+x0;//������ ����� ��������� ����������
                 	     begin = false;
                	   }
			  }
		}
		}
		cout<<M/N<<endl;
		return 0;
		system("pause");
}