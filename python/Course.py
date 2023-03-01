class Course:
# kelas yang digunakan untuk mengimplentasikan kelas Course

    ## inisialiasasi attribute
    # __nama_matakuliah =""

    # konstruktor
    def __init__(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    # setter & setter methods #

    def setNamaMataKuliah(self, nama_matakuliah):
    # mengset nilai atribut nama
        self.__nama_matakuliah = nama_matakuliah

    def getNamaMataKuliah(self):
    # mengembalikan nilai atribut nama_matakuliah
        return self.__nama_matakuliah