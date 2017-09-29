int i,j,N;
//i&j are indecies, N is the total number of balls. 

//Struct Ball containing all of the parameters that a ball can have
typedef struct {
	//Will be initialized to the start point and start velocity
    int x;
    int y;
    int vx;
    int vy;
} ball;

//Array of balls
ball POS[N];
//Hitcount to prevent several simultaneous collisions
int hitCounter[N] = {5};
//Size of hitbox. Created in advance to prevent needless recalculating
hitbox = < (ball_radius<<2);

//ITERATE THROUGH ALL BALLS
for i<n {
	//SECOND LOOP TO PREVENT CALCULATING COLLISIONS TWICE
	j = i+1;
  	for j<=n { 
		//CALCULATE DX DY
    	int dx = POS[i].x - POS[j].x;
		int dy = POS[i].y - POS[j].y;
		if (dx < 4) && (dy < 4) {
     		if (((dx^2) < hitbox) && ((dy^2) < hitbox && (hitCounter[i] ==0) {
			
			//CALCULATE dvij
			dv_x_ij = POS[i].vx - POS[j].vx;
		    dv_y_ij = POS[i].vy - POS[j].vy;
			
			//UPDATE BALLS I & J WITH NEW VALUES
			POS[i].vx = POS[i].vx + dv_x_ij;
			POS[i].vy = POS[i].vy + dv_y_ij;

			POS[j].vx = POS[j].vx - dv_x_ij;
			POS[j].vy = POS[j].vy - dv_y_ij;

			//HIT COUNTER CAN BE DETERMINED EXPERIMENTALLY ON TFT
			hitCounter[i] = 5;
			}
			//DECREMENT HIT COUNTER SO COLLISIONS ARE LESS FREQUENT
			elseif (hitCounter[i]>0){
        	hitCounter[i] --;
			}
  }
}
