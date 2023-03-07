class Course {
    private:
        /* data */
        string nama_matakuliah;
    public:
        Course() {};
        Course(string namaMatkul) {
            this->nama_matakuliah = namaMatkul;
        }

        void setNamaMatkul(string namaMatkul) {
            this->nama_matakuliah = namaMatkul;
        }

        string getNamaMatkul() {
            return nama_matakuliah;
        }
        ~Course(){}
};
