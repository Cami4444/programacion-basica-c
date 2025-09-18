
#include<iostream>
#include<cstdlib>

using namespace std;

void llenarmatriz (int** matriz, int filas, int columnas){
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz[i][j]= rand() % 100;
		}
	}
}

void imprimirmatriz(int** matriz, int filas, int columnas){
	for (int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout << matriz[i][j]<<"\t";
		}
		cout << endl;
	}
}

void imprimirtranspuesta(int** matriz, int filas, int columnas){
	for(int j=0; j< columnas; j++){
		for(int i=0; i<filas;i++){
			cout<<matriz[i][j]<< "\t";
		}
		cout << endl;
	}
}

void imprimirdiagonalprincipal(int** matriz, int filas, int columnas){
	int min_dim =min(filas, columnas);
	for(int i=0; i<min_dim; i++){
		cout << matriz[i][i] << " ";
	}
	cout << endl;
}

int main(){
	int filas, columnas;
	
	cout << "Ingrese por favor el número de filas deseadas: ";
	cin >> filas;
	
	cout << "Ingrese por favor el número de columnas deseadas: ";
	cin >> columnas;
	
	int** matriz = new int*[filas];
	for (int i=0; i < filas; i++){
		matriz[i]=new int[columnas];
	}
	
	llenarmatriz(matriz, filas, columnas);
	
	cout<<"Matriz original:" << endl;
	imprimirmatriz(matriz, filas, columnas);
	
	cout<<"Transpuesta:" << endl;
	imprimirtranspuesta(matriz, filas, columnas);
	
	cout<<"Diagonal principal:" << endl;
	imprimirdiagonalprincipal(matriz, filas, columnas);
	
	for (int i=0; i < filas; i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	
	return 0;
}
