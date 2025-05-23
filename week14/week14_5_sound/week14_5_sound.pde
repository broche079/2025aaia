//week14_5_sound
//選單 Sketch - Library -Manage Librarises...
//安裝Sound 後,  開始寫
//選單File - Examples 選 Librarises核心函式庫 Sound-Soundfile-JumbleSounfile
//再自己寫
import processing.sound.*; //JAVA使用Sound外掛
SoundFile music, sword, monkey, intro; //宣告一個變數music
void setup(){
  size(640, 360); //記得要把音檔拉進程式
  music = new SoundFile(this, "In Game Music.mp3"); //小心檔名不要寫錯
  monkey = new SoundFile(this, "Monkey 1.mp3");
  intro = new SoundFile(this, "Intro Song_Final,mp3");// 今天沒用到
  music = new SoundFile(this, "In Game Music.mp3");
  music.play(); //play()播放
}
void draw(){
  //裡面是空白
}
