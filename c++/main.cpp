#include <iostream>
#include <string>
#include <list>
using namespace std;
#include "Mahasiswa.cpp"
#include "Dosen.cpp"

int main() {

    // List data mahasiswa dan dosen
    list<Mahasiswa> listMhs;
    list<Dosen> listDosen;

    // List data matkul
    list<Course> matkulList;
    list<Course> matkulList2;
    // input dengan metode[#1]
    Course matkul1("DPBO");
    Course matkul2("Tata Boga");
    Course matkul3("Seni Rupa");

    Course matkul4("Desain Grafis");
    Course matkul5("Bahasa Sunda");
    Course matkul6("Ekonomi");

    // push setiap matkul to matkulList
    matkulList.push_back(matkul1);
    matkulList.push_back(matkul2);
    matkulList.push_back(matkul3);

    // push setiap matkul to matkulList2
    matkulList2.push_back(matkul4);
    matkulList2.push_back(matkul5);
    matkulList2.push_back(matkul6);


    Mahasiswa mhs(123, "Lisa", "Female", "UPI", "l1sa@upi.edu", 321, "FPMIPA", ProgramStudi("ILKOM", "ILK", matkulList));
    Mahasiswa mhs2(456, "Amber", "Female", "Monstadt", "amber@mnds.edu", 321, "Red", ProgramStudi("Pyro", "PYO", matkulList2));

    Dosen dosen(666, "Baizhu", "Male", "Liyue", "baizhu@ly.edu", 776, "Green", ProgramStudi("Dendro", "DRO", matkulList2), "S3", "Pharmacy");
    Dosen dosen2(990, "Miko", "Female", "Inazuma", "gujiyaw@iz.edu", 776, "Purple", ProgramStudi("Electro", "ERO", matkulList), "S2", "cryptography");

    // Push to listMhs
    listMhs.push_back(mhs);
    listMhs.push_back(mhs2);

    // Push to listDosen
    listDosen.push_back(dosen);
    listDosen.push_back(dosen2);

    // Tampilkan jenis data list berdasarkan input
    int opsi;

    cout << "<><> MULTIVERSE UNIVERSITY <><>" << endl;
    cout << "1. Tampilkan data Mahasiswa " << endl;
    cout << "2. Tampilkan data Dosen " << endl;
    cout << "Enter the number... ";
    cin >> opsi;

    int x=1;
    int i=0;
    if(opsi == 1) {
        for(list<Mahasiswa>:: iterator jt = listMhs.begin(); jt != listMhs.end(); jt++){
            cout << ">>>== Mahasiswa " << x++ << " ==<<<" << endl;
            cout << "NIK          : " << jt->getNIK() << endl;
            cout << "Nama         : " << jt->getNama() << endl;
            cout << "JenisKelamin : " << jt->getJenisK() << endl;
            cout << "Asal_univ    : " << jt->getAsalUniv() << endl;
            cout << "Email_edu    : " << jt->getEmailEdu() << endl;
            cout << "NIM          : " << jt->getNIM() << endl;
            cout << "Fakultas     : " << jt->getFakultas() << endl;
            cout << "Nama Prodi   : " << jt->getProdi().getNamaProdi() << endl;
            cout << "Kode Prodi   : " << jt->getProdi().getKode() << endl;
            cout << "List Matkul  : " << endl;
            jt->getProdi().printCourseList();
            cout << endl;
        }
    } else if(opsi == 2) {
        for(list<Dosen>:: iterator jt = listDosen.begin(); jt != listDosen.end(); jt++){
            cout << ">>>== Dosen " << x++ << " ==<<<" << endl;
            cout << "NIK          : " << jt->getNIK() << endl;
            cout << "Nama         : " << jt->getNama() << endl;
            cout << "JenisKelamin : " << jt->getJenisK() << endl;
            cout << "Asal_univ    : " << jt->getAsalUniv() << endl;
            cout << "Email_edu    : " << jt->getEmailEdu() << endl;
            cout << "NIP          : " << jt->getNIP() << endl;
            cout << "Fakultas     : " << jt->getFakultas() << endl;
            cout << "Nama Prodi   : " << jt->getProdi().getNamaProdi() << endl;
            cout << "Kode Prodi   : " << jt->getProdi().getKode() << endl;
            cout << "Pend Terakhr : " << jt->getPendidikanTerakhir() << endl;
            cout << "Keahlian     : " << jt->getKeahlian() << endl;
            cout << "List Matkul  : " << endl;
            jt->getProdi().printCourseList();
            cout << endl;
        }
    }

    return 0;
}