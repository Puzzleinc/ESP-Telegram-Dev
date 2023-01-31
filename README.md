Device:
Esp 8266 / Esp 32

PEnjelasan:
Program untuk mengontrol device ESP melalui API telegram BOT dengan menggunakan library CTBot, berdasarkan kode dari alarm pompa, kode untuk koneksi dijadikan library terpisah dalam folder include

LittleFS
Library LittleFS digunakan untuk menyimpan serta membaca settingan waktu yang tersimpan dalam flash memory ESP

Telegram library menggunakan CTBot 2.1.9 dengan Arduino Json 6.19.0 ( Arduino JSon Wajib dibawah 6.2.0 karena error, kecuali CTBot sudah di upgrade diatas 2.1.9)