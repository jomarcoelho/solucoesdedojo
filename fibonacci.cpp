#include <iostream>
using namespace ::std;
int main() {
	
	int limiteDaSequencia, primeiro = 0, segundo = 1, fibonacci;
	
	cout << "Informe com numeros o limite da Sequencia Fibonacci: " ;
	cin >> limiteDaSequencia;
	cout << endl;
	cout << "- - - - - - - - - - - - " << endl;
	cout << "Resultado da serie Fibonacci ate o limite de " << limiteDaSequencia << " valores " << endl << endl;
	cout << "- - - - - - - - - - - - " << endl << endl;	
	for (int c = 0; c < limiteDaSequencia; c++) {
		
		for (int c = 0; c < limiteDaSequencia; c++){
			
			if (c <= 1)
				fibonacci = c;
			else {
				
				fibonacci = primeiro + segundo;
				primeiro = segundo;
				segundo = fibonacci;
				
			}
		
			cout << fibonacci << ", ";
		
		}
			cout << endl;
			cout << endl;
		return 0;
		
		
	} 
	
}