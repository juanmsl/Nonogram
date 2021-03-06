#ifndef __NONOGRAM_H__
#define __NONOGRAM_H__
#define COL 1
#define ROW 2

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

class Nonogram {

	protected:
		int rows;
		int columns;
		std::vector<int> rows_values;
		std::vector<int> cols_values;
		std::vector<std::vector<int>> matrix;

	public:
		Nonogram();
		Nonogram(const char* file_name);
		void setMap(const char* file_name);
		void reset();
		const int get(const int& type, const int& n) const;
		void set(const int& i, const int& j, const bool& value);
		const int getRows() const;
		const int getColumns() const;
		const bool isOn(const int& i, const int& j) const;
		const bool isCorrect() const;
		const bool isCorrect(const int& type, const int& n) const;
		std::vector<int>& operator[] (const int& i);
};

#endif
