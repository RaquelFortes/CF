#define 1 A3 
#define
#define


//=============================
//        Função Controlo
//=============================

void setup() {
  // put your setup code here, to run once:

}


int control(){
  if (C1==0 && C0==0){
    state= ADD
    }
  if (C1==0 && C0==1){
    state= SUB
    }
  if (C1==1 && C0==0){
    state= ASR
    }
  if (C1==1 && C0==1){
    state= NOR
    }

  switch(state){
    case ADD:
      // chamar função ADD
      break;
    case SUB:
      // chamar função SUB
      break;
    case ASR:
      // chamar funçaõ ASR
      break;
    case NOR:
      // chamar função NOR
      break;
    }
  }


void loop() {
  // put your main code here, to run repeatedly:

}
