var balls=[];


function setup() {
  createCanvas(500, 500);
  for(var i=0; i<100; i++){
   balls[i] = new Pelota();
}
}

function draw() {
  background(250);
  
  for(var i=0; i<balls.length; i++){
  balls[i].mostrar();
  balls[i].movery();
  balls[i].moverx();
  balls[i].down();
  balls[i].up();
  balls[i].right();
  balls[i].left();
  }
}