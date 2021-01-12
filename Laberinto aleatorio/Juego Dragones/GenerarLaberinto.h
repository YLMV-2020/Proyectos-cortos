#define BLOQUE 0
#define LIBRE 1

const int n = 31;
const int m = 21;
// m = fila
int laberinto[m][n];


void agregarParOrdenado(int A[][2], int &k, int a, int b) {
	bool encontrado = false;
	for (int i = 0; i < k; i++) {
		if (a == A[i][0] && b == A[i][1]) {
			encontrado = true;
			break;
		}
	}
	if (!encontrado) {
		A[k][0] = a;
		A[k][1] = b;
		k++;
	}
}

void obtenerParOrdenadoRandom(int a[][2], int &k, int &x, int &y) {
	int index = rand() % k; //range 0 to k-1
	x = a[index][0];
	y = a[index][1];
	for (int i = index; i < k; i++) {
		a[i][0] = a[i + 1][0];
		a[i][1] = a[i + 1][1];
	}
	k--;
}


void crearLaberinto() {
	srand(time(NULL));
	int ID_VECINOS_BLOQUEADOS[162][2], ID_VECINOS_DESBLOQUEADOS[4][2];
	int kb = 0, kd = 0, maxBlock = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			laberinto[i][j] = BLOQUE;
		}
	}
	int Oi = 1, Oj = 1, Ii, Ij;
	laberinto[Oi][Oj] = LIBRE;
	if (Oj - 2 > 0 && laberinto[Oi][Oj - 2] == BLOQUE) {
		agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi, Oj - 2);
	}
	if (Oj + 2 < n && laberinto[Oi][Oj + 2] == BLOQUE) {
		agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi, Oj + 2);
	}
	if (Oi - 2 > 0 && laberinto[Oi - 2][Oj] == BLOQUE) {
		agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi - 2, Oj);
	}
	if (Oi + 2 < m && laberinto[Oi + 2][Oj] == BLOQUE) {
		agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi + 2, Oj);
	}
	
	while (kb > 0) {
	
		obtenerParOrdenadoRandom(ID_VECINOS_BLOQUEADOS, kb, Oi, Oj);
		//agregando vecinos desbloqueados
		kd = 0;
		if (Oj - 2 > 0 && laberinto[Oi][Oj - 2] == LIBRE) {
			agregarParOrdenado(ID_VECINOS_DESBLOQUEADOS, kd, Oi, Oj - 2);
		}
		if (Oj + 2 < n && laberinto[Oi][Oj + 2] == LIBRE) {
			agregarParOrdenado(ID_VECINOS_DESBLOQUEADOS, kd, Oi, Oj + 2);
		}
		if (Oi - 2 > 0 && laberinto[Oi - 2][Oj] == LIBRE) {
			agregarParOrdenado(ID_VECINOS_DESBLOQUEADOS, kd, Oi - 2, Oj);
		}
		if (Oi + 2 < m && laberinto[Oi + 2][Oj] == LIBRE) {
			agregarParOrdenado(ID_VECINOS_DESBLOQUEADOS, kd, Oi + 2, Oj);
		}
		obtenerParOrdenadoRandom(ID_VECINOS_DESBLOQUEADOS, kd, Ii, Ij);
		if (Ii == Oi) {
			if (Ij < Oj) {
				laberinto[Ii][Ij + 1] = LIBRE;
			}
			else {
				laberinto[Ii][Oj + 1] = LIBRE;
			}
		}
		else {
			if (Ii < Oi) {
				laberinto[Ii + 1][Ij] = LIBRE;
			}
			else {
				laberinto[Oi + 1][Ij] = LIBRE;
			}
		}
		laberinto[Oi][Oj] = LIBRE; 
		//agregando vecinos bloqueados
		if (Oj - 2 > 0 && laberinto[Oi][Oj - 2] == BLOQUE) {
			agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi, Oj - 2);
		}
		if (Oj + 2 < n && laberinto[Oi][Oj + 2] == BLOQUE) {
			agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi, Oj + 2);
		}
		if (Oi - 2 > 0 && laberinto[Oi - 2][Oj] == BLOQUE) {
			agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi - 2, Oj);
		}
		if (Oi + 2 < m && laberinto[Oi + 2][Oj] == BLOQUE) {
			agregarParOrdenado(ID_VECINOS_BLOQUEADOS, kb, Oi + 2, Oj);
		}
		
	}
}
void dibujarLaberinto()
{
	char c = ' ';
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c = (!laberinto[i][j]) ? char(219) : ' ';
			std::cout << c;
		}
		std::cout << "\n";
	}
}

