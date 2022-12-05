#include<iostream>
using namespace std;

int main(){
    int size,i;
    double *gpa{nullptr};
    gpa = new double[size];

    cout<<"Enter the no of students ";
    cin>>size;
    for (  i = 0 ; i < size ; i ++)
    {
        cout<< " GPA of student "<<i+1<<endl;
            cin>>*(gpa+i);

    }
    cout<<&(*gpa);
    //delete [] gpa;
     cout << "\nDisplaying GPA of students." << endl;
    for (i = 0; i < size; ++i) {
    cout << "Student" << i + 1 << ": " << *(gpa + i) << endl;
  }

//delete[] gpa;







}

