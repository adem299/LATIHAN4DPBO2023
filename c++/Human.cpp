class Human {
    private:
        /* data */
        int NIK;
        string nama;
        string jenis_kelamin;
        
    public:
        Human() {};

        Human(int NIK, string nama, string jenisK) {
            this->NIK = NIK;
            this->nama = nama;
            this->jenis_kelamin = jenisK;
        }

        /* Setter */
        void setNIK(int nik) {
            this->NIK = nik;
        }

        void setNama(string nama) {
            this->nama = nama;
        }

        void setJenisK(string jenisK) {
            this->jenis_kelamin =jenisK;
        }

        /* Getter */
        int getNIK() {
            return NIK;
        }

        string getNama() {
            return nama;
        }

        string getJenisK() {
            return jenis_kelamin;
        } 

        // Destruktor
        ~Human() {}

};