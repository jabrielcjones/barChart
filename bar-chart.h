// file name --- bar-chart.h

// This file contains the definition of the class barchart.
// The object of barchart draws various bar charts depending
// on the values of a series and their corresponding labels.
// The bars are vertical. The series of values and labels are
// less than or equal to 10.

#ifndef CLASS_BARCHART_
#define CLASS_BARCHART_

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
const int MAX = 100;
const double ORIGIN_X = WINDOW_WIDTH * 0.15;
const double ORIGIN_Y = WINDOW_HEIGHT * 0.10;
const int MAX_SIZE = 10;

class BarChart
{
   private:
      double values[MAX_SIZE]; // holds a series of values
      string labels[MAX_SIZE]; // holds a series of lables
      int size; // number of values stored
      string title;

      void drawXAxis();
      void drawYAxis();

   public:
      BarChart();

      double getValue(int offset);        // accessor function
      string getLabel(int offset);        // accessor function
      int getSize();                      // accessor function
      string getTitle();                  // accessor function

      void setValue(double value, string label, int offset);      // mutator function
      void setTitle(string new_title);                            // mutator function
      void setSize(int new_size);                                 // mutator function

      void draw();
}; //class BarChart

#endif
