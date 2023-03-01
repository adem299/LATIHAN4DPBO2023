class Human:
# kelas yang digunakan untuk mengimplentasikan kelas Human

    ## inisialiasasi attribute
    __NIK = 0
    __nama =""
    __jenis_kelamin =""

    # konstruktor
    def __init__(self, nik=0, nama="", jenis_kelamin=""):
        self.__NIK = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin

    # setter & setter methods #

    def setNIK(self, nik):
    # mengset nilai atribut NIK
        self.__NIK = nik

    def setNama(self, nama):
    # mengset nilai atribut nama
        self.__nama = nama

    def setJenisK(self, jnskl):
    # mengset nilai atribut jenis_kelamin
        self.__jenis_kelamin = jnskl

    def getNIK(self):
    # mengembalikan nilai atribut NIK
        return self.__NIK

    def getNama(self):
    # mengembalikan nilai atribut nama
        return self.__nama

    def getJenisK(self):
    # mengembalikan nilai atribut jenis_kelamin
        return self.__jenis_kelamin