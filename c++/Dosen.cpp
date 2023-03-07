class Dosen : public CivitasAkademik {
    private:
        int NIP;
        string fakultas;
        ProgramStudi prodi;
        string pendidikan_terakhir;
        string keahlian;

    public:
        Dosen() {}

        Dosen(int NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu, int NIP, string fakultas, ProgramStudi prodi, string pendidikan_terakhir, string keahlian) : CivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu) {
            this->NIP = NIP;
            this->fakultas = fakultas;
            this->prodi = prodi;
            this->pendidikan_terakhir = pendidikan_terakhir;
            this->keahlian = keahlian;
        }

        /* setter */
        void setNIP(int nip) {
            this->NIP = nip;
        }

        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }

        void setProdi(ProgramStudi prodi) {
            this->prodi = prodi;
        }

        void setPendidikanTerakhir(string pendidikan_terakhir) {
            this->pendidikan_terakhir = pendidikan_terakhir;
        }

        void setKeahlian(string keahlian) {
            this->keahlian = keahlian;
        }

        /* getter */
        int getNIP() {
            return NIP;
        }

        string getFakultas() {
            return fakultas;
        }

        ProgramStudi getProdi() {
            return prodi;
        }

        string getPendidikanTerakhir() {
            return pendidikan_terakhir;
        }

        string getKeahlian() {
            return keahlian;
        }

        ~Dosen() {}
};
