#include <iostream>

using namespace std;
int n, c, lluvia, total;

int main()
{
   	cin>>n>>c;
	for (int d=1; d<=n; d++) {
		cin>>lluvia;
		total+=lluvia;
		if (total >= c) {
			cout<<d;   //respuesta de d�as en que se llen�
			break;	  //no se requiere continuar
		}
	}
    return 0;
}
