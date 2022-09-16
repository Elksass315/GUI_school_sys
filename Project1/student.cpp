#include "student.h"

#include <fstream>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iostream>

//using namespace std;




int checname(std::string name) {

    int nameLength = name.length();
    char name1[200];


    strcpy(name1, name.c_str());

    for (int i = 0; i < strlen(name1); i++)
    {
        if (isalpha(name1[i]))
        {
            return 1;

        }
        while (!isalpha(name1[i]))
        {
            return 0;
        }
    }


};

void save_data(int r_nu, std::string n, long long i , int ag, float gp) {
    std::ofstream myfile("C:/Users/Elksass/Documents/example.csv", std::ios::app);
    myfile << r_nu << "," << n << "," << i << "," << ag << "," << gp << "\n";
    myfile.close();
}


 /*int DeleteWord(long long token) {

    std::string token = std::to_string(token);
    std::string line;
    std::fstream fin;
    std::fstream fout;
    fin.open("example.csv", std::ios::in);
    fout.open("new.txt", std::ios::out | std::ios::app);
    

    std::vector <std::string> lines;
    while (std::getline(fin, line)) {
        if (line.find(token) != std::string::npos) {
            
            fin << line << std::endl;
            
        }
    }

    fin.close();
    fout.close();
    remove("words.txt");
    rename("new.txt", "words.txt");

}
*/


int student::get_data(int r_nu, std::string n, long long i, int ag, float gp)
{
    int r_ch = 1;
    int name_ch;
    int age_ch = 1;
    int gp_ch;

    if (r_nu < 1) {
        r_ch = 0;
    }


    name_ch = checname(n);

    if (ag < 0 || ag> 100) {
        age_ch = 0;

    }

    if (gp > 4 || gp < 0) {

        gp_ch = 0;
    }
    else {
        gp_ch = 1;
    }


    if (r_ch & name_ch & age_ch & gp_ch) {

        save_data(r_nu, n, i, ag, gp);

        return 1;


    }
    else
    {
        return 0;
    }

}

std::string student::show_data(long long rollnum)
{

 
        std::fstream fin;

        // Open an existing file
        fin.open("reportcard.csv",std::ios::in);

        // Get the roll number
        // of which the data is required
        int roll2, count = 0;
         

        // Read the Data from the file
        // as String Vector
        std::vector<std::string> row;
        std::string line, word, temp;

        while (fin >> temp) {

            row.clear();

            // read an entire row and
            // store it in a string variable 'line'
            getline(fin, line);

            // used for breaking words
            std::stringstream s(line);

            // read every column data of a row and
            // store it in a string variable, 'word'
            while (std::getline(s, word,',')) {

                // add all the column data
                // of a row to a vector
                row.push_back(word);
            }

            // convert string to integer for comparision
            roll2 = stoi(row[2]);

            // Compare the roll number
            if (roll2 == rollnum) {

                // Print the found data
                count = 1;
                std::string re = " " + row[0] + " " + row[1] + " " + row[2] + " " + row[3] + " " + row[4];
                return re;
                break;
            }
        }
        if (count == 0) {
            
            std::string re = "Not found";
            return re;
        }
    }


int student::delete_data(long long rollnum)
{

        // Open FIle pointers
        std::fstream fin, fout;

        // Open the existing file
        fin.open("reportcard.csv", std::ios::in);

        // Create a new file to store the non-deleted data
        fout.open("reportcardnew.csv", std::ios::out);

        int  roll1, marks, count = 0, i;
        char sub;
        int index, new_marks;
        std::string line, word;
        std::vector<std::string> row;

        // Check if this record exists
        // If exists, leave it and
        // add all other data to the new file
        while (!fin.eof()) {

            row.clear();
            std::getline(fin, line);
            std::stringstream s(line);

            while (std::getline(s, word, ',')) {
                row.push_back(word);
            }

            int row_size = row.size();
            roll1 = stoi(row[2]);

            // writing all records,
            // except the record to be deleted,
            // into the new file 'reportcardnew.csv'
            // using fout pointer
            if (roll1 != rollnum) {
                if (!fin.eof()) {
                    for (i = 0; i < row_size - 1; i++) {
                        fout << row[i] << ", ";
                    }
                    fout << row[row_size - 1] << "\n";
                }
            }
            else {
                count = 1;
            }
            if (fin.eof())
                break;
        }
        if (count == 1)
           return 1;
        else
            return 0;

        // Close the pointers
        fin.close();
        fout.close();

        // removing the existing file
        remove("reportcard.csv");

        // renaming the new file with the existing file name
        rename("reportcardnew.csv", "reportcard.csv");
    }

int student::modify_data(int roll1, std::string sub, long long rollnum, int ag, float new_marks)
{
    

        // File pointer
        std::fstream fin, fout;

        // Open an existing record
        fin.open("reportcard.csv", std::ios::in);

        // Create a new file to store updated data
        fout.open("reportcardnew.csv", std::ios::out);

        int  marks=0, count = 0, i;
        int index;
        std::string line, word;
        std::vector<std::string> row;


        while (!fin.eof()) {

            row.clear();

            getline(fin, line);
            std::stringstream s(line);

            while (std::getline(s, word, ',')) {
                row.push_back(word);
            }

            roll1 = stoi(row[0]);
            int row_size = row.size();

            if (roll1 == rollnum) {
                count = 1;
                std::stringstream convert;

                // sending a number as a stream into output string
                convert << new_marks;

                // the str() converts number into string
                row[index] = convert.str();

                if (!fin.eof()) {
                    for (i = 0; i < row_size - 1; i++) {

                        // write the updated data
                        // into a new file 'reportcardnew.csv'
                        // using fout
                        fout << row[i] << ", ";
                    }

                    fout << row[row_size - 1] << "\n";
                }
            }
            else {
                if (!fin.eof()) {
                    for (i = 0; i < row_size - 1; i++) {

                        // writing other existing records
                        // into the new file using fout.
                        fout << row[i] << ", ";
                    }

                    // the last column data ends with a '\n'
                    fout << row[row_size - 1] << "\n";
                }
            }
            if (fin.eof())
                break;
        }
        if (count == 0)
            return 0;

        fin.close();
        fout.close();

        // removing the existing file
        remove("reportcard.csv");

        // renaming the updated file with the existing file name
        rename("reportcardnew.csv", "reportcard.csv");
    

}

int student::count()
{
    std::ifstream in("C:/Users/Elksass/Documents/example.csv");

    std::size_t RowCount = 0;

    char buff[4096]; 

    while (in.read(buff, sizeof(buff)) || in.gcount())
        RowCount += std::count(buff, buff + in.gcount(), '\n');

    return RowCount-1;
}


