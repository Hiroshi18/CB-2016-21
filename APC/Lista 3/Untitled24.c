#include <stdio.h>

int main() {

	int c,i,cMc, cmc;
	double s,sf=0, Mc=0 , mc=0 ;
	Mc =0;
	mc= 1000;

    for (i=1 ; i<=10 ; i++)
	{
		scanf ("%d %lf" ,&c ,&s);

		if (s<=5000){
			sf= (s*1.5)/100;

		}
		else if (s>5000 && s<15000)
		{
			sf=(s*3.5)/100;
		}else if (s>=15000)
		{
			sf= (s*4.7)/100;
		}


		if (sf>Mc){
			Mc=sf;
			cMc=c;
		           }
	    else if(sf<mc){
		mc=sf;
		cmc=c;
    }
	}

	printf ("%d %.2lf %d %.2lf\n" ,cMc, Mc, cmc ,mc);



	return 0;
}
