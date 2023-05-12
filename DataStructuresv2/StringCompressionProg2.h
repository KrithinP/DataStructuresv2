string compressString(string str)
{

	int n = str.length();

	string out;

	for (int i = 0; i < n; i++) 
	{

		char c = '1';

		while (i < n - 1 && str[i + 1] == str[i]) 
		{
			c++;
			i++;
		}
		out += str[i];
		out = out + (c);

	}
	if (out.length() > str.length())
	{
		return str;
	}
	return out;

}