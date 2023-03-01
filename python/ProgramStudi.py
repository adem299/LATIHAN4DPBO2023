from Course import Course

class ProgramStudi:
# kelas yang digunakan untuk mengimplentasikan kelas ProgramStudi

    ## inisialiasasi attribute
    __nama_prodi =""
    __kode =""
    __course=Course("")

    # konstruktor
    def __init__(self, nama_prodi, kode, course):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course

    # setter & setter methods #

    def setNamaProdi(self, nama_prodi):
    # mengset nilai atribut nama
        self.__nama_prodi = nama_prodi

    def setKode(self, kode):
    # mengset nilai atribut kode
        self.__kode = kode

    def setCourse(self, course):
    # mengset nilai atribut kode
        self.__course = course

    def getNamaProdi(self):
    # mengembalikan nilai atribut nama_prodi
        return self.__nama_prodi

    def getKode(self):
    # mengembalikan nilai atribut kode
        return self.__kode
    
    def getCourse(self):
    # mengembalikan nilai atribut course
        return self.__course