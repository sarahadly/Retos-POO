class Pelota{
 constructor(){
   this.x=random(0,500);
   this.y=random(50,450);
   this.vely=random(1,5);
   this.velx=random(1,3);
   
 }
  
  mostrar(){
  
    fill(250,random(0,100),random(0,200));
   ellipse(this.x, this.y, 40, 40); 
  }
  
  movery(){
   this.y=this.y+this.vely;
  }
  
  moverx(){
   this.x=this.x+this.velx; 
  }
  
  
  up(){
   if(this.y>height){
    this.vely=-this.vely;
   }
  }
  
  down(){
   if(this.y<0){
     this.vely=-this.vely;
   }
  }
   
  right(){
   if(this.x>width){
    this.velx=-this.velx; 
   }
  }
  
  left(){
   if(this.x<0){
      this.velx=-this.velx;
      }
  }
}