#include "Human.cpp"

class CivitasAkademik : public Human {
    private:
        string asal_universitas;
        string email_edu;
    
    public:
        CivitasAkademik() {}

        CivitasAkademik(int NIK, string nama, string jenis_kelamin, string asal_univ, string email_ed)
        : Human(NIK, nama, jenis_kelamin) {
            this->asal_universitas = asal_univ;
            this->email_edu = email_ed;
        }

        /* setter */

        void setAsalUniv(string asalUniv) {
            this->asal_universitas = asalUniv;
        }

        void setEmailEdu(string email) {
            this->email_edu = email;
        }

        /* getter */

        string getAsalUniv() {
            return asal_universitas;
        }

        string getEmailEdu() {
            return email_edu;
        }

        ~CivitasAkademik() {}
};