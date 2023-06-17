#pragma once

bool compare(string a , string b)
{
	if (a.length() == b.length())
		return a < b;

	else
		a.length()>b.length();
}
void findTheStupidSubsetsOrder(char* inp, char* outp, int i, int j, vector<string>& list)
{
	if (inp[i] == '\0')
	{
		outp[j] = '\0';

		string temp(outp);
		list.push_back(temp);

		return;
	}

	outp[j] = inp[i];
	findTheStupidSubsetsOrder(inp, outp, i + 1, j + 1, list);
	findTheStupidSubsetsOrder(inp, outp, i + 1, j, list);
}


void findTheStupidSubsets(char *inp, char *outp, int i, int j)
{
	if (inp[i] == '\0')
	{
		outp [j] = '\0';
		


		return;
	}

	outp[j] = inp[i];
	findTheStupidSubsets(inp, outp, i+1, j+1);
	findTheStupidSubsets(inp, outp, i+1, j);
}

