
/* Code automatically generated by Vult https://github.com/modlfo/vult */
#include "TrigGate.h"

void TrigGate__ctx_type_1_init(TrigGate__ctx_type_1 &_output_){
   TrigGate__ctx_type_1 _ctx;
   _ctx.state = 0;
   _ctx.dur = 0.0f;
   TrigGate__ctx_type_0_init(_ctx._inst691);
   TrigGate__ctx_type_0_init(_ctx._inst291);
   _output_ = _ctx;
   return ;
}

float TrigGate_trig2gate(TrigGate__ctx_type_1 &_ctx, float trig, float len, float st){
   uint8_t bgate;
   bgate = (trig > 0.0f);
   if(_ctx.state == 0){
      if(TrigGate_edge(_ctx._inst291,bgate)){
         _ctx.state = 1;
         _ctx.dur = (_ctx.dur + st);
      }
   }
   if(_ctx.state == 1){
      if(_ctx.dur < len){
         _ctx.dur = (_ctx.dur + st);
      }
      if(TrigGate_edge(_ctx._inst691,bgate)){
         _ctx.dur = 0.0f;
      }
      if(_ctx.dur > len){
         _ctx.state = 0;
         _ctx.dur = 0.0f;
      }
   }
   float _if_15;
   if(_ctx.state == 1){
      _if_15 = 1.f;
   }
   else
   {
      _if_15 = 0.0f;
   }
   return _if_15;
}

void TrigGate__ctx_type_2_init(TrigGate__ctx_type_2 &_output_){
   TrigGate__ctx_type_2 _ctx;
   _ctx.process_ret_1 = 0.0f;
   _ctx.process_ret_0 = 0.0f;
   _ctx.gateLen2 = 0.0f;
   _ctx.gateLen1 = 0.0f;
   TrigGate__ctx_type_1_init(_ctx._inst2da);
   TrigGate__ctx_type_1_init(_ctx._inst1da);
   _output_ = _ctx;
   return ;
}

void TrigGate_process(TrigGate__ctx_type_2 &_ctx, float trig1, float trig2, float st){
   float gate1;
   gate1 = TrigGate_trig2gate(_ctx._inst1da,trig1,_ctx.gateLen1,st);
   float gate2;
   gate2 = TrigGate_trig2gate(_ctx._inst2da,trig2,_ctx.gateLen2,st);
   _ctx.process_ret_0 = gate1;
   _ctx.process_ret_1 = gate2;
   return ;
}


