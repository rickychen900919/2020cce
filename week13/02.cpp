void setup(){
size(1024,400);
}
void draw(){
  if(mousePressed)background(123,228,224);
   else background(15,162,249);
   textSize(50);
   text(a,100,100);
}
int a=0;
void mousePressed(){
  a++;
}
