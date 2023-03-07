#include "CivitasAkademik.cpp"
#include "ProgramStudi.cpp"

class Mahasiswa : public CivitasAkademik {
    private:
        int NIM;
        string fakultas;
        ProgramStudi prodi;

    public:
        Mahasiswa() {}

        Mahasiswa(int NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu, int NIM, string fakultas, ProgramStudi prodi) : CivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu) {
            this->NIM = NIM;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }

        /* setter */
        void setNIM(int nim) {
            this->NIM = nim;
        }

        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }

        void setProdi(ProgramStudi prodi) {
            this->prodi = prodi;
        }

        /* getter */
        int getNIM() {
            return NIM;
        }

        string getFakultas() {
            return fakultas;
        }

        ProgramStudi getProdi() {
            return prodi;
        }

        ~Mahasiswa() {}
};