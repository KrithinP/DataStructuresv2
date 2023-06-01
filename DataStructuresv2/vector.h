class Vector 
{

	int* a;
	int cs;
	int ms;

public:
	Vector(int max_size = 1) {
		cs = 0;
		ms = max_size;
		a = new int[ms];
	}

	void push_back(const int d) {
		//Two Cases
		if (cs == ms) {
			//create a new array and delete the old one, double the capacity 
			int* oldArr = a;
			ms = 2 * ms;
			a = new int[ms];
			//copy the elements

			for (int i = 0; i < cs; i++) 
			{
				a[i] = oldArr[i];
			}
			//delete 
			delete[] oldArr;

		}
		a[cs] = d;
		cs++;
	}

	void pop_back() {
		if (cs >= 0) {
			cs--;
		}
	}

	bool isEmpty() const {
		return cs == 0;
	}

	//Front, Back, At(i), []
	int front() const {
		return a[0];
	}

	int back() const {
		return a[cs - 1];
	}

	int at(int i) const {
		return a[i];
	}

	int size() const {
		return cs;
	}

	int capacity() const {
		return ms;
	}

	int operator[](const int i) const {
		return a[i];
	}

};