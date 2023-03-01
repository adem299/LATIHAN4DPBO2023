from Mahasiswa import Mahasiswa
from Dosen import Dosen
from ProgramStudi import ProgramStudi
from Course import Course

# tampung data Mahasiswa
listMhs = []

# tampung data dosen
listDosen = []

## input Mahasiswa
matkul = Course("DPBO")
# prodi = ProgramStudi("ILKOM", "ILK", Course("DPBO"))
mhs1 = Mahasiswa(123, "Lisa", "Female", "UPI", "l1sa@upi.edu", 321, "FPMIPA", ProgramStudi("ILKOM", "ILK", matkul))
mhs2 = Mahasiswa(543, "Amber", "Female", "Genshin", "amber@gi.com", 321, "Anemo", ProgramStudi("Monstad", "MTD", Course("Flying far away")))

## input dosen
dsn1 = Dosen(987, "Luffy", "Male", "UPI", "luffy@upi.edu", 669, "FPMIPA", ProgramStudi("ILKOM", "ILK", Course("DPBO")), "S3", "Computer Engineering")

prodi = ProgramStudi("Bahasa sastra", "SBS", Course("Sastra Jepang"))
dsn2 = Dosen(987, "Marco", "Male", "Stanford Univ", "mar@stand.edu", 669, "Culture", prodi, "S3", "Pelaut Handal")

## tambahkan data ke list
listMhs.append(mhs1)
listMhs.append(mhs2)
listDosen.append(dsn1)
listDosen.append(dsn2)


print("1. Tampilkan data Mahasiswa")
print("2. Tampilkan data Dosen")

## Menampilkan secara spesifik
x = int(input("Masukan nomer.. "))

if(x == 1):
    # print data mahasiswa yang di tersedia di listMhs
    for i, data in enumerate(listMhs):
        print(">>=== Mahasiswa " + str(i+1) + " ===<<")
        print("NIK          : " + str(data.getNIK()))
        print("Nama         : " + str(data.getNama()))
        print("JenisKelamin : " + str(data.getJenisK()))
        print("Asal Univ    : " + str(data.getAsalUniv()))
        print("Email        : " + str(data.getEmail()))
        print("NIM          : " + str(data.getNIM()))
        print("Fakultas     : " + str(data.getFakultas()))
        print("Prodi        : " + str(data.getProdi().getNamaProdi()))
        print("Kode         : " + str(data.getProdi().getKode()))
        print("CourseName   : " + str(data.getProdi().getCourse().getNamaMataKuliah()))
        print("")
else:
    # print data mahasiswa yang di tersedia di listDosen
    for i, data in enumerate(listDosen):
        print(">>=== Dosen " + str(i+1) + " ===<<")
        print("NIK          : " + str(data.getNIK()))
        print("Nama         : " + str(data.getNama()))
        print("JenisKelamin : " + str(data.getJenisK()))
        print("Asal Univ    : " + str(data.getAsalUniv()))
        print("Email        : " + str(data.getEmail()))
        print("NIP          : " + str(data.getNIP()))
        print("Fakultas     : " + str(data.getFakultas()))
        print("Prodi        : " + str(data.getProdi().getNamaProdi()))
        print("Kode         : " + str(data.getProdi().getKode()))
        print("CourseName   : " + str(data.getProdi().getCourse().getNamaMataKuliah()))
        print("")