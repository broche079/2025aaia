//week06_4b_array_x_y_int_N_for_mousePressed_recycle_for_k
//�qweek04_5 �����L�� �Q��for�j�� + �}�C�A���X�ܦh�}�Ƥ��|��
void setup(){
  size(600, 400);
}
float [] x = new float[100]; //��100��X 100��Y
float [] y = new float[100]; //JAVA�}�C�ŧi
int N = 0; //�}�Ʀ�N��
void draw(){
  background( #C0FFEE );  //�@�ثC�� 0���Oo
  for(int i=0; i<N; i++){
    ellipse(x[i], y[i], 8, 8);
    y[i] += 2;
    if(y[i]>400){ //�}�Ʊ���~��/�ݤ���
      for(int k=i; k<N-1; k++){ //�n�^��
        x[k] = x[k+1]; //�k��h�쥪��
        y[k] = y[k+1];
      }
      N--; //�^����1���}��
    }
    println(N); //��N�b�p�¤��L�X��
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++; //�W�[1���}��
}
