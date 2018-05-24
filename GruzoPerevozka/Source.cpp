#include "GruzoPerevoz.h"
#include "Air.h"

int main() {
	Gruzo_Perevozka *Gruz[3];
	Gruz[0] = new Air(5, 1000);
	Gruz[0]->Show();

	system("pause");
	return 0;
}