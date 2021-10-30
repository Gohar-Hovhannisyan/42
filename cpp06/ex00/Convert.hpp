#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <limits>
#include <sstream>

class Convert{
private:
	float general;
	Convert(const Convert& other) {}
public:
	Convert() : general(0.0f) {}
	~Convert() {}
	float toChangeNum(std::string str);
	void toChange(std::string str);
	void toChangeF(std::string str);
	void toChar() const;
	void toInt() const;
	void toFloat() const;
	void toDouble() const;
};

#endif