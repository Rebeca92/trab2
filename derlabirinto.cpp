

int getWidth()
{
	int cont = 0, largura;
	fstream arq;
	arq.open("labirinto.txt", ios::in);
	cout << "abrindo o arquivo" <<endl;

	while(arq.good() && cont!=1)
	{
		string n;	
		int larg, alt;
		
		arq >> n >> larg >> alt;
			
			if(!arq.fail())
			{
				largura = larg;
			}
	cont = cont + 1;
	}
	arq.close();
	return largura;
}

int getHeight()
{
	int cont=0, altura;

	fstream arq;

	arq.open("labirinto.txt", ios::in);
	cout << "abrindo o arquivo" <<endl;

	while(arq.good() && cont!=1)
	{
		string n;	
		int larg, alt;
		
		arq >> n >> larg >> alt;
			
			if(!arq.fail())
			{
				altura = alt;
			}
	cont = cont + 1;
	}

	arq.close();

	return altura;
}

ponto getIniPos()
{
	ponto *p;
	int cont=0;

	fstream arq;

	arq.open("labirinto.txt", ios::in);
	cout << "abrindo o arquivo" <<endl;

	while(arq.good() && cont!=2)
	{
		string n;	
		int x, y;
		
		arq >> n >> x >> y;
			
			if(!arq.fail() && cont == 1)
			{
				p = new ponto(x,y);		
			}
	cont = cont + 1;
	}

	arq.close();

	return p;
}

void loadMaze()
{
	int cont=0;

	fstream arq;

	arq.open("labirinto.txt", ios::in);
	cout << "abrindo o arquivo" <<endl;

	while(arq.good() && cont!=2)
	{
		string n;	
		int x, y;
		
		if(cont<3)
		{
			arq >> n >> x >> y;
		}
		else
		{
			arq >> 	
				if(!arq.fail())
				{
					
				}
		}
		cont = cont + 1;
	}

	arq.close();

	return p;
