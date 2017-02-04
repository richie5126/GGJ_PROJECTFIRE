import processing.pdf.*;

void setup()
{
size(1300,450);
background(120,120,120);
noStroke();

frameRate(5);

}

void draw()
{

}

void mousePressed()
{
  println("More mountains!");
  //background(0);
  fill(255, 255,255);
  float y = 0;
  while(y < width)
  {
    ellipse(y, height - random(0, 450), 10, 10);
    y += 50;
  }   
}

void myFunction(float x, float y, float radius)
{
  fill(255,255,255);
  ellipse(width - random(0, 1300), height - random(0, 450), 10, 10);
    y += 50;
}

void keyPressed()
{

 if (key=='g')
  {
    
beginRecord(PDF, "Mountainthings6.pdf");
    
background(0, 0, 0);

for(int i=0; i < 100; i++)
{
  myFunction(width / 2 + random(-200, 200), height / 2 + random(-200, 200), random(100, 400));
}

    float x = 0;
  while(x < width)
  {
    x += 500;
  
fill(random(0,255), random(0,255), random(0,255));

beginShape();

vertex(0, 450);
vertex(0, random(0,400));
vertex(50, random(0,400));
vertex(100, random(0,400));
vertex(200, random(0,400));
vertex(300, random(0,400));
vertex(400, random(0,400));
vertex(500, random(0,400));
vertex(600, random(0,400));
vertex(700, random(0,400));
vertex(800, random(0,400));
vertex(900, random(0,400));
vertex(1000, random(0,400));
vertex(1100, random(0,400));
vertex(1200, random(0,400));
vertex(1300, random(0,400));
vertex(1300, 450);

endShape(CLOSE);

  }
}
    else if (key=='s')
  {
    endRecord();
  }
}