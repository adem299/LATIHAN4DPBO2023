from Human import Human

class CivitasAkademik(Human):
# kelas yang digunakan unutk mengimplementasikan kelas CivitasAkademik

    # inisialisasi attribute
    __asal_universitas =""
    __email_edu = ""

    def __init__(self, nik=0, nama="", jenis_kelamin="", asal_univ="", email=""):
    # konstruktor
        super().__init__(nik, nama, jenis_kelamin)
        self.__asal_universitas = asal_univ
        self.__email_edu = email

    # setter & getter methods

    def setAsalUniv(self, asal_univ):
    # mengset nilai atribut asal_universitas
        self.__asal_universitas = asal_univ

    def setEmail(self, email):
    # mengset nilai atribut email_edu
        self.__email_edu = email

    def getAsalUniv(self):
    # mengembalikan nilai atribut asal_universitas
        return self.__asal_universitas
    
    def getEmail(self):
    # mengembailkan nilai atribut email_edu
        return self.__email_edu

