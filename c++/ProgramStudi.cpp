#include "Course.cpp"

using namespace std;

class ProgramStudi {
    private:
        string nama_prodi;
        string kode;
        list<Course> courseList;
    public:
        ProgramStudi(){};

        ProgramStudi(string namaProdi, string kode, list<Course> courseList) {
            this->nama_prodi = namaProdi;
            this->kode = kode;
            this->courseList = courseList;
        }


        /* Setter */
        void setNamaProdi(string namaProdi) {
            this->nama_prodi = namaProdi;
        }

        void setKode(string kode) {
            this->kode = kode;
        }

        void setCourse(list<Course> courseList) {
            this->courseList = courseList;
        }

        /* Getter */

        string getNamaProdi() {
            return nama_prodi;
        }

        string getKode() {
            return kode;
        }

        list<Course> getCourse() {
            return courseList;
        }

        /* Method print courseList*/
        void printCourseList() {
            for (auto it = courseList.begin(); it != courseList.end(); ++it) {
                cout << " - " << it->getNamaMatkul() << endl;
            }
        }

        /* Destruct*/
        ~ProgramStudi(){}
};
