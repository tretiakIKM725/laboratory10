#include <iostream>
using namespace std;

struct Report{
  string Name;
  double MonthlyProfit;
  double Salary;
};

int main () {

  const int REPORT_COUNT = 5;

  Report reportA{"A Corp", 150000, 50000};

  Report reports[REPORT_COUNT]{
      reportA,
      {"B Inc.", 200000, 65000},
      {"C Group", 500000, 150000},
      {"D Familly", 300000, 100000},
      {"E Comp.", 250000, 80000}};

  cout << "\n===============================FULL REPORT===============================\n" << endl;

  for(int i = 0; i < REPORT_COUNT; i++ ) {
    cout << "Company : " << reports[i].Name
         << "\tMomthly Profit : " << reports[i].MonthlyProfit
         << "\t\tSalary : " << reports[i].Salary << endl;
  }

  for (int i = 0; i < REPORT_COUNT - 1; i++ ) {
    for (int j = 0; j < REPORT_COUNT - 1 - i; j++){
      if (reports[j].MonthlyProfit < reports[j + 1].MonthlyProfit) {
        Report tmp = reports[j];
        reports[j] = reports[j + 1];
        reports[j + 1] = tmp;
      }
    }
  }

  const int TOP_MOUNTHLY_PROFIT = 3;

  cout << "\n\n============================TOP 3 PROFITABLE============================\n" << endl;

  for (int i = 0; i < TOP_MOUNTHLY_PROFIT; i++)
  {
    cout << "#" << i + 1 << " ";
    cout << "Company : " << reports[i].Name
         << "\tMomthly Profit : " << reports[i].MonthlyProfit
         << "\t\tSalary : " << reports[i].Salary << endl;
  }

  return 0;
}


