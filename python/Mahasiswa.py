from CivitasAkademik import CivitasAkademik
from ProgramStudi import ProgramStudi

class Mahasiswa(CivitasAkademik):
# kelas yang digunakan untuk mengimplemntasikan kelas Mahasiswa
    
    # inisialisasi atribut
    __NIM = 0
    __fakultas = ""
    __prodi = ProgramStudi("","","") # has a

    def __init__(self, nik=0, nama="", jenis_kelamin="", asal_univ="", email="", nim=0, fakultas="", prodi=""):
    # konstruktor
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email)
        self.__NIM = nim
        self.__fakultas = fakultas
        self.__prodi = prodi

    # setter & getter methods

    def setNIM(self, nim):
    # mengset nilai atribut NIM
        self.__NIM = nim

    def setFakultas(self, fakultas):
    # mengset nilai atribut fakultas
        self.__fakultas = fakultas
        
    def setProdi(self, prodi):
        self.__prodi = prodi
    
    def getNIM(self):
    # mengmbalikan nilai atribut NIM
        return self.__NIM

    def getFakultas(self):
    # mengmbalikan nilai atribut fakultas
        return self.__fakultas

    def getProdi(self):
    # mengmbalikan nilai atribut prodi
        return self.__prodi