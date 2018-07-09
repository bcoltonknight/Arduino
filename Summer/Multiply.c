int running = 1, ptr = 0, ptl = 0;
int sense_inputr = 0, sense_inputl = 0, powerincrease = 50;

void follow()
{
	motor(1, 75);
	motor(3, 75);
	while(digital(8) == 0){
		sense_inputr = analog(2);
		sense_inputl = analog(1);
		printf("Left sensor: %d\n", sense_inputl);
		printf("Right sensor: %d\n", sense_inputr);
		
		if(sense_inputl >= 799 && sense_inputr >= 799){
			printf("Both found");
			return;
			
		}
			
		else if(sense_inputr > 920){
			if(powerincrease != 50){
				powerincrease = 50;
			}
			else{
				motor(3, (75 + powerincrease));
				ptl = 1;
				if(ptr == 1){
					motor(1, 75);
					powerincrease += 20;
				}
				else{
					powerincrease += 20;
				}
			}
		}
		else if(sense_inputl > 920){
			if(powerincrease != 50){
				powerincrease = 50;
			}
			else{
				motor(1, (75 + powerincrease));
				ptr = 1;
				if(ptl == 1){
					motor(3, 75);
					powerincrease += 20;
				}
				else{
					powerincrease += 20;
				}
			}
		}

		else
			{
			motor(1, 75);
			motor(3, 75);
		}
	}
	return;
}

int main(){
	
	follow();
	motor(1, -50);
	motor(3, -50);
	msleep(1000);
	motor(1, -50);
	motor(3,50);
	msleep(1500);
	follow();
	return 0;
}
