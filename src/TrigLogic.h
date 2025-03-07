
/* Code automatically generated by Vult https://github.com/modlfo/vult */
#ifndef TRIGLOGIC_H
#define TRIGLOGIC_H
#include <stdint.h>
#include <math.h>
#include "vultin.h"
#include "TrigLogic.tables.h"

typedef struct _tuple___real_real__ {
   float field_0;
   float field_1;
} _tuple___real_real__;

typedef struct TrigLogic__ctx_type_0 {
   float pre;
} TrigLogic__ctx_type_0;

typedef TrigLogic__ctx_type_0 TrigLogic_direction_type;

static_inline void TrigLogic__ctx_type_0_init(TrigLogic__ctx_type_0 &_output_){
   TrigLogic__ctx_type_0 _ctx;
   _ctx.pre = 0.0f;
   _output_ = _ctx;
   return ;
}

static_inline void TrigLogic_direction_init(TrigLogic__ctx_type_0 &_output_){
   TrigLogic__ctx_type_0_init(_output_);
   return ;
}

int TrigLogic_direction(TrigLogic__ctx_type_0 &_ctx, float x);

int TrigLogic_sign(float x);

typedef struct TrigLogic__ctx_type_2 {
   TrigLogic__ctx_type_0 _inst2b9;
   TrigLogic__ctx_type_0 _inst1b9;
} TrigLogic__ctx_type_2;

typedef TrigLogic__ctx_type_2 TrigLogic_logic_type;

void TrigLogic__ctx_type_2_init(TrigLogic__ctx_type_2 &_output_);

static_inline void TrigLogic_logic_init(TrigLogic__ctx_type_2 &_output_){
   TrigLogic__ctx_type_2_init(_output_);
   return ;
}

uint8_t TrigLogic_logic(TrigLogic__ctx_type_2 &_ctx, float x1, float x2, uint8_t type1, uint8_t type2, int s1, int s2, uint8_t andOr);

typedef struct TrigLogic__ctx_type_3 {
   uint8_t type2;
   uint8_t type1;
   int s2;
   int s1;
   float process_ret_1;
   float process_ret_0;
   uint8_t inv;
   uint8_t andOr;
   TrigLogic__ctx_type_2 _inst129;
} TrigLogic__ctx_type_3;

typedef TrigLogic__ctx_type_3 TrigLogic_process_type;

void TrigLogic__ctx_type_3_init(TrigLogic__ctx_type_3 &_output_);

static_inline void TrigLogic_process_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

void TrigLogic_process(TrigLogic__ctx_type_3 &_ctx, float trig, float lfo1, float lfo2);

typedef TrigLogic__ctx_type_3 TrigLogic_process_ret_0_type;

static_inline void TrigLogic_process_ret_0_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline float TrigLogic_process_ret_0(TrigLogic__ctx_type_3 &_ctx){
   return _ctx.process_ret_0;
};

typedef TrigLogic__ctx_type_3 TrigLogic_process_ret_1_type;

static_inline void TrigLogic_process_ret_1_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline float TrigLogic_process_ret_1(TrigLogic__ctx_type_3 &_ctx){
   return _ctx.process_ret_1;
};

typedef TrigLogic__ctx_type_3 TrigLogic_setType1_type;

static_inline void TrigLogic_setType1_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setType1(TrigLogic__ctx_type_3 &_ctx, float value){
   _ctx.type1 = (value > 0.0f);
};

typedef TrigLogic__ctx_type_3 TrigLogic_setType2_type;

static_inline void TrigLogic_setType2_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setType2(TrigLogic__ctx_type_3 &_ctx, float value){
   _ctx.type2 = (value > 0.0f);
};

typedef TrigLogic__ctx_type_3 TrigLogic_setS1_type;

static_inline void TrigLogic_setS1_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setS1(TrigLogic__ctx_type_3 &_ctx, int value){
   _ctx.s1 = value;
};

typedef TrigLogic__ctx_type_3 TrigLogic_setS2_type;

static_inline void TrigLogic_setS2_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setS2(TrigLogic__ctx_type_3 &_ctx, int value){
   _ctx.s2 = value;
};

typedef TrigLogic__ctx_type_3 TrigLogic_setAndOr_type;

static_inline void TrigLogic_setAndOr_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setAndOr(TrigLogic__ctx_type_3 &_ctx, float value){
   _ctx.andOr = (value > 0.0f);
};

typedef TrigLogic__ctx_type_3 TrigLogic_setInv_type;

static_inline void TrigLogic_setInv_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

static_inline void TrigLogic_setInv(TrigLogic__ctx_type_3 &_ctx, float value){
   _ctx.inv = (value > 0.0f);
};

typedef TrigLogic__ctx_type_3 TrigLogic_default_type;

static_inline void TrigLogic_default_init(TrigLogic__ctx_type_3 &_output_){
   TrigLogic__ctx_type_3_init(_output_);
   return ;
}

void TrigLogic_default(TrigLogic__ctx_type_3 &_ctx);



#endif // TRIGLOGIC_H
