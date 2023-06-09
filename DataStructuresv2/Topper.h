int calcTotalMarks(vector<int> marks) {
	return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int> > s1, pair<string, vector<int> > s2) {
	vector<int> m1 = s1.second;
	vector<int> m2 = s2.second;
	return calcTotalMarks(m1) > calcTotalMarks(m2);
}

