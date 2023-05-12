

void shortestRoute()
{
	char route[1000];
	cin.getline(route, 1000);


	int x = 0;
	int y = 0;


	for (int i = 0; route[i] != '\0'; i++) 
	{

		switch (route[i])
		{
		case 'N': 
			y++;
			break;

		case 'S': 
			y--;
			break;

		case 'E':
			x++;
			break;

		case 'W': 
			x--;
			break;

		}
	}

	cout << "Final x and y is " << x << "," << y << ".";

	//Other cases
	if (x > 0 && y > 0)
		cout << "It is in the first quadrant";
	else if (x < 0 && y > 0)
		cout << "It is in the Second quadrant";
	else if (x < 0 && y < 0)
		cout << "It is in the third quadrant";
	else if (x > 0 && y < 0)
		cout << "It is in the fourth quadrant";


	if (x >= 0 and y >= 0) {

		while (y--) {
			cout << "N";
		}
		while (x--) {
			cout << "E";
		}

	}

	

}

