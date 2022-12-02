#pragma once

#include<string>

class Map{
	private:
		// Store the map as a matrix
		int matrix[4][4]; // make it 2*4

		// Convert the line into an array
		int parseToArray(std::string line, int numbers[16]); // only 8 nos

		// Are we solving SOP or POS
		bool isSOP; // removable
	public:
		Map();

		// SOP or POS
		inline void setIsSop(bool isSOP) {this->isSOP = isSOP; } //removable
		inline bool getIsSop() { return isSOP; } //removable

		// Sum of products
		void parseLine(std::string line);
		
		// The simplifier will request the map for simplification
		void getMatrix(int m[4][4]); // 2 *4
		
		// Draws the map
		void drawMap();
};
