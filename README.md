# LATIHAN4DPBO2023
Saya Ade Mulyana NIM 2108799 mengerjakan soal Latihan4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain Program
![ClassDiagramLat4-2](https://user-images.githubusercontent.com/100661834/223288466-23d618ec-8a2d-4d7b-b0d2-8cd692266628.png)

Berdasarkan diagram diatas dapat disimpulkan:
Tedapat 6 class dimana yang mempunyai atibut bebeda dan mempunyai method yang sama getter dan setter serta terdapat method printCourseList pada class ProgramStudi untuk menampilkan list Course yang di input.
Class Human menjadi Root Class di mana CivitasAkademik merupakan child class nya, menurut saya semua yang termasuk civitas akademik merupkan Human atau manusia. CivitasAkdemik mempunyai beberapa anak atau child class di mana dalam kasus ini terdapat 2 class child, class Mahasiswa dan class Dosen. Sudah jelas bahwa Mahasiswa dan dosen merupakan civitas akademik.
Selanjutnya class Mahasiswa dan dosen juga composite atau memiliki class ProgramStudi, tentunya bahwa Mahasiswa dan dosen mempunyai program studi, yang mana dalam diagram ini juga di tunjukan bahwa program studi juga mempunya class Course. Hal ini berarti Mahsiswa dan Dosen mempunyai Course atau matakuliah hanya jika Mahasiswa dan dosen tersebut mempunyai class ProgramStudi.

# Alur Program
Pertama input data Mahasiswa, dosen dan beberapa course/matkul berdasarkan hardcode
![Screenshot (254)](https://user-images.githubusercontent.com/100661834/223339377-9dbd7982-81e7-40b6-b478-89cca981abaf.png)

Untuk hasil data list mahasiswa
![Screenshot (250)](https://user-images.githubusercontent.com/100661834/223340162-44a2fd5d-cfdf-4cc1-ab0f-ad45dd6aaa7e.png)

Untuk hasil data list dosen
![Screenshot (252)](https://user-images.githubusercontent.com/100661834/223341265-0c69ba3b-874d-4180-b632-4a147a79ae5b.png)
