#include <iostream>

using namespace std;
int n, c, lluvia, total,r;
bool band=false;
int main()
{
   	cin>>n>>c;
	for (int d=1; d<=n; d++) {
		cin>>lluvia;
		total+=lluvia;
		if (total >= c && !band) {
			r=d;  //respuesta de d�as en que se llen�
			band=true;  //no se requiere continuar
		}
	}
	cout<<r;
    return 0;
}
