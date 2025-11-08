#include <iostream>
#include<fstream>
#ifndef STRINGS_H
#define STRINGS_H

using namespace std;

int conv_int(char arr[]);

class strings {

private:

	int len;
	int cap;
	char* Cs;
public:

	strings();
	strings(const char* ptr);
	strings(const strings& other);
	strings(int n, char a);

	strings insert_char(char a, int idx);
	strings& operator = (const strings other);
	void print();
	void regrow();
	int get_len(const char arr[]);
	void right_shift(int idx);
	void left_shift(char arr[], int& size, int idx);

	int st_oi();
	strings IntToString(int num);
	/*strings& Triming();*/
	strings Trim();

	bool is_equal(const strings& M);
	bool is_less(const strings& M);
	bool is_greater(const strings& M);

	strings* split(char delim, int& count) const;
	/*strings* tokenize(char delim[], int& count) const;*/
	bool search_s(char arr[], char var[]);
	strings concat(const strings& s2)const;
	strings& append(const strings& s2);

	strings& operator + (const strings& s2);

	void remove_at(int i);
	void insert_at(int i, char ch);
	void insert_at_st(int i, const strings sub, int& count);
	strings* regrow_strings(int& count);

	char& operator[](int i);

	const char operator[](int i)const;


	void remove_first(char ch);

	void remove_last(char ch);

	void remove_all(char ch);

	int find_first(char ch);
	int find_first_st(const strings other, int count) const;

	int find_last(char ch);
	int find_last_st(const strings& other, int count) const;
	int* find_all(char ch, int& C, int array[]);
	int* find_all_st(const strings& other, int& C, int count, int array[]) const;

	void clear();
	strings& toUpper();
	strings& toLower();
	void file(fstream& r);

	/*friend  strings operator + (const strings& s1, const strings& s2);*/
	friend ostream& operator << (ostream& os, const strings& s);
	friend  istream& operator >> (istream& os, strings& s);
	~strings();

};

int conv_int(char arr[]);

#endif //!
