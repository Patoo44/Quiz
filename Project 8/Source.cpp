#include <iostream>
using namespace std;
int main()
{
	string odpoved;
	int odpovedcis;

	cout << "Geo Quiz" << endl;
	cout << "__________________________" << endl;
	cout << "Kolko existuje na svete krajn ?" << endl;
	cout << "a) 195 " << endl;
	cout << "b) 235 " << endl;
	cout << "c) 125 " << endl;
	cout << "d) 94 " << endl;

	cin >> odpoved;

	if (odpoved == "a")
	{
		odpovedcis = 1;
	}
	else if (odpoved == "b")
	{
		odpovedcis = 2;
	}
	else if (odpoved == "c")
	{
		odpovedcis = 3;
	}
	else if (odpoved == "d")
	{
		odpovedcis = 4;
	}

	switch (odpovedcis)
		{
		case 1:
			cout << "spravna odpoved" << endl;
			break;
		case 2:
			cout << "Nespravna odpoved" << endl;
			return 0;
			break;
		case 3:
			cout << "Nespravna odpoved" << endl;
			return 0;
			break;
		case 4:
			cout << "Nespravna odpoved" << endl;
			return 0;
			break;
		}
cout << "__________________________" << endl;
cout << "Ktorý kontinet je najvacsi ?" << endl;
cout << "a) Severna Amerika " << endl;
cout << "b) Antarktida " << endl;
cout << "c) Afrika " << endl;
cout << "d) Eurazia " << endl;

cin >> odpoved;
if (odpoved == "a")
{
	odpovedcis = 1;
}
else if (odpoved == "b")
{
	odpovedcis = 2;
}
else if (odpoved == "c")
{
	odpovedcis = 3;
}
else if (odpoved == "d")
{
	odpovedcis = 4;
}
switch (odpovedcis)
{
case 1:
	cout << "Nespravna odpoved" << endl;
	return 0;
	break;
case 2:
	cout << "Nespravna odpoved" << endl;
	return 0;
	break;
case 3:
	cout << "Nespravna odpoved" << endl;
	return 0;
	break;
case 4:
	cout <<"Spravna odpoved" << endl;
	break;
}
cout << "__________________________" << endl;
cout << "Ako sa vola najvacsi ostrov na svete ?" << endl;
cout << "a) Velka britania " << endl;
cout << "b) Gronsko " << endl;
cout << "c) Borneo" << endl;
cout << "d) Madagaskar " << endl;

cin >> odpoved;
if (odpoved == "a")
{
	odpovedcis = 1;
}
else if (odpoved == "b")
{
	odpovedcis = 2;
}
else if (odpoved == "c")
{
	odpovedcis = 3;
}
else if (odpoved == "d")
{
	odpovedcis = 4;
}
switch (odpovedcis)
{
case 1:
	cout << "Nespravna odpoved" << endl;
	return 0;
	break;
case 2:
	cout << "Spravna odpoved" << endl;
	break;
case 3:
	cout << "Nespravna odpoved" << endl;
	return 0;
	break;
case 4:
	cout << "Spravna odpoved" << endl;
	return 0;
	break;
}
cout << "______________________________________" << endl;
cout << "odpovedal si spravne na vsetky otazky!" << endl;
cout << "______________________________________" << endl;
}