from CivitasAkademik import CivitasAkademik
from ProgramStudi import ProgramStudi

class Dosen(CivitasAkademik):
# kelas yang digunakan untuk mengimplemntasikan kelas Dosen
    
    # inisialisasi atribut
    __NIP = 0
    __fakultas = ""
    __prodi = ProgramStudi("","","")  # has a
    __pendidikan_terakhir = ""
    __keahlian = ""

    def __init__(self, nik=0, nama="", jenis_kelamin="", asal_univ="", email="", nip=0, fakultas="", prodi="", pendidikan_terakhir="", keahlian=""):
    # konstruktor
        super().__init__(nik, nama, jenis_kelamin, asal_univ, email)
        self.__NIP = nip
        self.__fakultas = fakultas
        self.__prodi = prodi
        self.__pendidikan_terakhir = pendidikan_terakhir
        self.__keahlian = keahlian

    # setter & getter methods

    def setNIP(self, nip):
    # mengset nilai atribut NIP
        self.__NIP = nip

    def setFakultas(self, fakultas):
    # mengset nilai atribut fakultas
        self.__fakultas = fakultas

    def setPendTerakhir(self, pendidikanTerakhir):
    # mengset nilai atribut pendidikan terakhir
        self.__pendidikan_terakhir = pendidikanTerakhir

    def setKeahlian(self, keahlian):
    # mengset nilai atribut keahlian
        self.__keahlian = keahlian

    def getNIP(self):
    # mengmbalikan nilai atribut NIP
        return self.__NIP

    def getFakultas(self):
    # mengmbalikan nilai atribut fakultas
        return self.__fakultas

    def getProdi(self):
    # mengmbalikan nilai atribut prodi
        return self.__prodi
    
    def getPendidikanTerahir(self):
    # mengmbalikan nilai atribut pendidikan terakhir
        return self.__pendidikan_terakhir
    
    def getKeahlian(self):
    # mengmbalikan nilai atribut keahlian
        return self.__keahlian