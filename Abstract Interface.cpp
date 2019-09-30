<?php 
//Kelas Abstract
abstract class Binatang
{
    protected $nama;
    protected $jmlKaki;
    public function __construct($nama, $jmlKaki)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
    }      
    
    public function SetNama($nama)
    {
        $this->nama = $nama;
    }
    public function GetNama()
    {
        return $this->nama;
    }
    public function SetKaki($jmlKaki)
    {
        $this->jmlKaki = $jmlKaki;
    }
    public function GetKaki()
    {
        return $this->jmlKaki;
    }
    public function displayBinatang()
    {
        echo "Binatang : ". $this->Nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
    }
}
//interface 1
interface Herbifora 
{
    public function displayMakan();
}
//interface 2
interface Karnifora 
{
    public function displayMakan();
}
//inheritance 1 : Singa
class Kucing extends Binatang implements Karnifora
{
    protected $suara;<?php 
//abstract class
abstract class Binatang
{
    protected $nama;
    protected $jmlKaki;
    public function __construct($nama, $jmlKaki)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
    }      
    
    public function SetNama($nama)
    {
        $this->nama = $nama;
    }
    public function GetNama()
    {
        return $this->nama;
    }
    public function SetKaki($jmlKaki)
    {
        $this->jmlKaki = $jmlKaki;
    }
    public function GetKaki()
    {
        return $this->jmlKaki;
    }
    public function displayBinatang()
    {
        echo "Binatang : ". $this->Nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
    }
}
//interface 1
interface Herbifora 
{
    public function displayMakan();
}
//interface 2
interface Karnifora 
{
    public function displayMakan();
}
//inheritance 1 : kucing
class Kucing extends Binatang implements Karnifora
{
    protected $suara;
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "tipe : karnifora";
        echo "Makanan : hewan lain";
    }
    public function displayBinatang()
    {
        echo "Binatang : Kucing". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Kucing ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>tipe : Karnifora<br> Makanan : hewan lain";
    }
}
//inheritance 2 : gajah
class Gajah extends Binatang implements Herbifora
{
    protected $suara;
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "tipe : Herbifora";
        echo "Makanan : tanaman";
    }
    public function displayBinatang()
    {
        echo "Binatang : Gajah". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Gajah ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>tipe : Herbifora <br> Makanan : tanaman";
    }
}
//inheritance 3 : beruang
class Beruang extends Binatang implements Karnifora,Herbifora
{
    protected $suara;
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "Jenis : omnivora";
        echo "Makanan : hewan lain dan tanaman";
    }
    public function displayBinatang()
    {
        echo "Binatang : Beruang". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Beruang ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>Jenis :omnivora <br> Makanan : hewan lain dan tanaman";
    }
}
//main
$Kucing = new Kucing("si belang", 4, "meong", "belang");
$Gajah = new Gajah("gedhe",4, "bengok","hitam");
$Beruang = new Beruang("garang",4, "meraung","coklat, hitam");
$Kucing->DisplayData();
$Gajah->DisplayData();
$Beruang->DisplayData();
 ?>
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "tipe : Karnifora";
        echo "Makanan : hewan lain";
    }
    public function displayBinatang()
    {
        echo "Binatang : Singa". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Singa ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>tipe : Karnifora<br> Makanan : hewan lain";
    }
}
//inheritance 2 : Brontosaurus
class Gajah extends Binatang implements Herbifora
{
    protected $suara;
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "tipe : Herbifora";
        echo "Makanan : tanaman";
    }
    public function displayBinatang()
    {
        echo "Binatang : Brontosaurus". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Brontosaurus ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>tipe : Herbifora <br> Makanan : tanaman";
    }
}
//inheritance 3 : Ayam
class Beruang extends Binatang implements Karnifora,Herbifora
{
    protected $suara;
    protected $warnaBulu;
    public function __construct($nama, $jmlKaki, $suara, $warnaBulu)
    {
        $this->nama = $nama;
        $this->jmlKaki = $jmlKaki;
        $this->suara = $suara;
        $this->warnaBulu = $warnaBulu;
    }
    public function displayMakan()
    {
        echo "Jenis : Omnivora";
        echo "Makanan : hewan lain dan tanaman";
    }
    public function displayBinatang()
    {
        echo "Binatang : Ayam". $this->Nama."<br>"."Jumlah Kaki : ".$this->Kaki;
    }
    public function displayData()
    {
        echo "<br><br>Binatang : Ayam ". $this->nama."<br>"."Jumlah Kaki : ".$this->jmlKaki;
        echo "<br>Suara : ".$this->suara."<br>"."Warna : ".$this->warnaBulu;
        echo "<br>Jenis :omnivora <br> Makanan : hewan lain dan tanaman";
    }
}
//main
$Singa = new Kucing("Raja Hutan", 4, "Mengaum", "Crem Polos");
$Brontosaurus = new Gajah("Besar",4, "Argghhh","Hijau");
$Ayam = new Beruang("Hewan Ternak",4, "Petok petok","coklat, hitam, dll");
$Singa->DisplayData();
$Brontosaurus->DisplayData();
$Ayam->DisplayData();
 ?>