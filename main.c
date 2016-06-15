int main() 
{
	double coliformes_fecais, pH, DBO, nitrogenio_total, fosforo_total, variacao_temperatura, turbidez, solidos_totais, oxigenio_dissolvido;
	double q1, q2, q3, q4, q5, q6, q7, q8, q9, IQA;
	int i;
	
	printf("percentual Oxigenio dissolvido\n");
	scanf("%lf", &oxigenio_dissolvido);
	
	printf("Coliformes fecais\n");
	scanf("%lf", &coliformes_fecais);
	
	printf("pH\n");
	scanf("%lf", &pH);
	
	printf("DBO\n");
	scanf("%lf", &DBO);
	
	printf("Variação temperatura\n");
	scanf("%lf", &variacao_temperatura);
	
	printf("nitrogenio total\n");
	scanf("%lf", &nitrogenio_total);
	
	printf("fosforo total\n");
	scanf("%lf", &fosforo_total);
	
	printf("turbidez\n");
	scanf("%lf", &turbidez);
	
	printf("solidos totais\n");
	scanf("%lf", &solidos_totais);
	
	
	for (i=1; i<=8; i++)
	{
		if (i == 1)
		{
			if (coliformes_fecais > 100000)
			{
				q1=3;
			}
			else if (coliformes_fecais>0 && coliformes_fecais<=100000)
			{
				q1=98.03-36.45*log10(coliformes_fecais)+3.138*log10(pow(coliformes_fecais,2))+0.06776*log10(pow(coliformes_fecais,3));
			}
			
		}
		if (i == 2)
		{
			if (pH>12)
			{
				q2=3;
			}
else if (pH<2)
			{
				q2=2;
			}
			else if (pH<=12 && pH>=2)
			{
				q2=0.05421*pow(pH,1.23*pH-0.09873*pow(pH,2))+5.213;
			}
			
		}
		if (i == 3)
		{
			if (DBO>30)
			{
				q3=2;
			}
			else if (DBO<=30)
			{
				q3=102.6*exp(-0.01101*DBO);
			}
			
		}
		if (i == 4)
		{
			if (nitrogenio_total>100)
			{
				q4=1;
			}
			else if (nitrogenio_total<=100)
			{
				q4=98.96*pow(nitrogenio_total,-0.2232-0.006457*nitrogenio_total);
			}
			
		}
		if (i == 5)
		{
			if (fosforo_total>10)
			{
				q5=5;
			}
			else if (fosforo_total<=10)
			{
				q5=213.7*exp(-1.680*pow(coliformes_fecais,0.3325));
}
			
		}
		if (i == 6)
		{
			if (variacao_temperatura <-5)
			{
				q6=0;
			}
			else if (variacao_temperatura >15)
			{
				q6=9;
			}
			else if (variacao_temperatura <=15 && variacao_temperatura >=-5)
			{
				q6=1/(0.0003869*pow(variacao_temperatura+0.1815,2)+0.01081);
			}
			
		}
		if (i == 7)
		{
			if (turbidez>100)
			{
				q7=5;
			}
			else if (turbidez<=100)
			{
				q7=97.34*exp(-0.01139*turbidez-0.04917*sqrt(turbidez));
			}
			
		}
		if (i == 7)
		{
			if (solidos_totais>500)
			{
				q8=32;
			}
			else if (solidos_totais<=500)
			{
				q8=80.26*exp(-0.00107*solidos_totais+0.03009*sqrt(solidos_totais))-0.1185*solidos_totais;
			}
}
		if (i == 8)
		{
			if (oxigenio_dissolvido>140)
			{
				q9=47;
			}
			else if (oxigenio_dissolvido <= 140)
			{
				q9=100.8*exp(pow(oxigenio_dissolvido-106,2)/-3745);
			}
			
		}
			
	}
