// Ques 3: Implement Tower of Hanoi using Recursion.


#include <iostream> 
using namespace std; 

void towerOfHanoi(int n, char f_rod, 
					char t_rod, char aux_rod) 
{ 
	if (n == 1) 
	{ 
		cout << "Move disk 1 from rod " << f_rod << 
							" to rod " << t_rod<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1, f_rod, aux_rod, t_rod); 
	cout << "Move disk " << n << " from rod " << f_rod << 
								" to rod " << t_rod << endl; 
	towerOfHanoi(n - 1, aux_rod, t_rod, f_rod); 
} 

// Driver code 
int main() 
{ 
	int n = 23; // Number of disks 
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
	return 0; 
} 


