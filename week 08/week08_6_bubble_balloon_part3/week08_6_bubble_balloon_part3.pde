//week08_6_bubble_balloon_part3
void setup(){
  size(500,400);
}
void draw(){
  background(204);
  for(int i=0; i<N; i++ ){
    ellipse(x[i], y[i]-s[i]/2, s[i]*0.75, s[i]);//畫氣球
    if(mousePressed && i ==N-1) s[i] += 2;//一直壓mouse就會變大
    if((mousePressed==false ||i!=N-1) &&  y[i]>s[i]) y[i] -= 2; //沒有按mouse就
  }
}
float[] x = new float[100];//java陣列宣告
float[] y = new float[100];
float[] s = new float[100];//可以放100個氣球
int N = 0;
void mousePressed(){
  x[N] = mouseX;//氣球的座標
  y[N] = mouseY;
  s[N] = 1;//氣球一開始大小是1(數字)
  N++;
}
