# 1 "cordiccart2pol.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 375 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 158 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_ReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Read(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_WriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Write(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbReadReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_NbWriteReq(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_Return(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow)) __attribute__((overloadable));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow)) __attribute__((overloadable));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_Unroll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_Inline(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBindPort(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_DataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow)) __attribute__((overloadable));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow)) __attribute__((overloadable));

    void __xilinx_ip_top(...) __attribute__ ((nothrow)) __attribute__((overloadable));


}
# 2 "<built-in>" 2
# 1 "cordiccart2pol.cpp" 2
# 1 "./cordiccart2pol.h" 1



# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h" 1
# 55 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h" 1
# 57 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_decl.h" 1
# 100 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_decl.h"
enum ap_q_mode {
  AP_RND,
  AP_RND_ZERO,
  AP_RND_MIN_INF,
  AP_RND_INF,
  AP_RND_CONV,
  AP_TRN,
  AP_TRN_ZERO,
};
# 122 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_decl.h"
enum ap_o_mode {
  AP_SAT,
  AP_SAT_ZERO,
  AP_SAT_SYM,
  AP_WRAP,
  AP_WRAP_SM,
};
# 179 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_decl.h"
template <int _AP_W, bool _AP_S>
struct ap_int_base;

template <int _AP_W>
struct ap_int;

template <int _AP_W>
struct ap_uint;

template <int _AP_W, bool _AP_S>
struct ap_range_ref;

template <int _AP_W, bool _AP_S>
struct ap_bit_ref;

template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2>
struct ap_concat_ref;

template <int _AP_W, int _AP_I, bool _AP_S = true, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_fixed_base;

template <int _AP_W, int _AP_I, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_fixed;

template <int _AP_W, int _AP_I, ap_q_mode _AP_Q = AP_TRN,
          ap_o_mode _AP_O = AP_WRAP, int _AP_N = 0>
struct ap_ufixed;

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_range_ref;

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_bit_ref;


enum BaseMode { AP_BIN = 2, AP_OCT = 8, AP_DEC = 10, AP_HEX = 16 };
# 233 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_decl.h"
typedef signed long long ap_slong;
typedef unsigned long long ap_ulong;


enum {
  _AP_SIZE_char = 8,
  _AP_SIZE_short = sizeof(short) * 8,
  _AP_SIZE_int = sizeof(int) * 8,
  _AP_SIZE_long = sizeof(long) * 8,
  _AP_SIZE_ap_slong = sizeof(ap_slong) * 8
};
# 58 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h" 2
# 169 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
enum { CHAR_IS_SIGNED = (char)-1 < 0 };


namespace _ap_type {
template <typename _Tp>
struct is_signed {
  static const bool value = _Tp(-1) < _Tp(1);
};

template <typename _Tp>
struct is_integral {
  static const bool value = false;
};





template <> struct is_integral<bool> { static const bool value = true; };
template <> struct is_integral<char> { static const bool value = true; };
template <> struct is_integral<signed char> { static const bool value = true; };
template <> struct is_integral<unsigned char> { static const bool value = true; };
template <> struct is_integral<short> { static const bool value = true; };
template <> struct is_integral<unsigned short> { static const bool value = true; };
template <> struct is_integral<int> { static const bool value = true; };
template <> struct is_integral<unsigned int> { static const bool value = true; };
template <> struct is_integral<long> { static const bool value = true; };
template <> struct is_integral<unsigned long> { static const bool value = true; };
template <> struct is_integral<ap_slong> { static const bool value = true; };
template <> struct is_integral<ap_ulong> { static const bool value = true; };


template <bool, typename _Tp = void>
struct enable_if {};

template <typename _Tp>
struct enable_if<true, _Tp> {
  typedef _Tp type;
};

template <typename _Tp>
struct remove_const {
  typedef _Tp type;
};

template <typename _Tp>
struct remove_const<_Tp const> {
  typedef _Tp type;
};
}
# 508 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
template <int _AP_N, bool _AP_S>
struct ssdm_int;

template <int _AP_N>
struct ssdm_int<_AP_N, true> {
  int V __attribute__((bitwidth(_AP_N)));
  inline __attribute__((always_inline)) ssdm_int<_AP_N, true>(){};
};

template <int _AP_N>
struct ssdm_int<_AP_N, false> {
  unsigned V __attribute__((bitwidth(_AP_N)));
  inline __attribute__((always_inline)) ssdm_int<_AP_N, false>(){};
};
# 574 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/etc/autopilot_ssdm_bits.h" 1
# 575 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h" 2

extern "C" void _ssdm_string2bits(...);
# 586 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
static inline unsigned char guess_radix(const char* s) {
  unsigned char rd = 10;
  const char* p = s;

  if (p[0] == '-' || p[0] == '+') ++p;

  if (p[0] == '0') {
    if (p[1] == 'b' || p[1] == 'B') {
      rd = 2;
    } else if (p[1] == 'o' || p[1] == 'O') {
      rd = 8;
    } else if (p[1] == 'x' || p[1] == 'X') {
      rd = 16;
    } else if (p[1] == 'd' || p[1] == 'D') {
      rd = 10;
    }
  }
  return rd;
}







typedef __fp16 half;
# 703 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_common.h"
inline __attribute__((always_inline)) ap_ulong doubleToRawBits(double pf) {
  union {
    ap_ulong __L;
    double __D;
  } LD;
  LD.__D = pf;
  return LD.__L;
}

inline __attribute__((always_inline)) unsigned int floatToRawBits(float pf) {
  union {
    unsigned int __L;
    float __D;
  } LD;
  LD.__D = pf;
  return LD.__L;
}

inline __attribute__((always_inline)) unsigned short halfToRawBits(half pf) {

  union {
    unsigned short __L;
    half __D;
  } LD;
  LD.__D = pf;
  return LD.__L;



}


inline __attribute__((always_inline)) double rawBitsToDouble(ap_ulong pi) {
  union {
    ap_ulong __L;
    double __D;
  } LD;
  LD.__L = pi;
  return LD.__D;
}


inline __attribute__((always_inline)) float rawBitsToFloat(unsigned long pi) {
  union {
    unsigned int __L;
    float __D;
  } LD;
  LD.__L = pi;
  return LD.__D;
}


inline __attribute__((always_inline)) half rawBitsToHalf(unsigned short pi) {

  union {
    unsigned short __L;
    half __D;
  } LD;
  LD.__L = pi;
  return LD.__D;






}
# 56 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h" 1
# 62 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h" 1
# 56 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h" 1
# 79 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_N, bool _AP_S>
struct retval;


template <int _AP_N>
struct retval<_AP_N, true> {
  typedef ap_slong Type;
};

template <int _AP_N>
struct retval<_AP_N, false> {
  typedef ap_ulong Type;
};


template <>
struct retval<1, true> {
  typedef signed char Type;
};

template <>
struct retval<1, false> {
  typedef unsigned char Type;
};


template <>
struct retval<2, true> {
  typedef short Type;
};

template <>
struct retval<2, false> {
  typedef unsigned short Type;
};


template <>
struct retval<3, true> {
  typedef long Type;
};

template <>
struct retval<3, false> {
  typedef unsigned long Type;
};

template <>
struct retval<4, true> {
  typedef long Type;
};

template <>
struct retval<4, false> {
  typedef unsigned long Type;
};




template <int _AP_W2, bool _AP_S2>
struct _ap_int_factory;
template <int _AP_W2>
struct _ap_int_factory<_AP_W2,true> { typedef ap_int<_AP_W2> type; };
template <int _AP_W2>
struct _ap_int_factory<_AP_W2,false> { typedef ap_uint<_AP_W2> type; };

template <int _AP_W, bool _AP_S>
struct ap_int_base : public ssdm_int<_AP_W, _AP_S> {
 private:
  inline __attribute__((always_inline)) int countLeadingOnes() const {




    return 0;

  }

 public:
  typedef ssdm_int<_AP_W, _AP_S> Base;







  typedef typename retval<(((_AP_W + 7) / 8) > (8) ? ((_AP_W + 7) / 8) : (8)), _AP_S>::Type RetType;

  static const int width = _AP_W;
  static const bool sign_flag = _AP_S;

  template <int _AP_W2, bool _AP_S2>
  struct RType {
    enum {
      mult_w = _AP_W + _AP_W2,
      mult_s = _AP_S || _AP_S2,
      plus_w =
          ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))) + 1,
      plus_s = _AP_S || _AP_S2,
      minus_w =
          ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))) + 1,
      minus_s = true,
      div_w = _AP_W + _AP_S2,
      div_s = _AP_S || _AP_S2,
      mod_w = ((_AP_W) < (_AP_W2 + (!_AP_S2 && _AP_S)) ? (_AP_W) : (_AP_W2 + (!_AP_S2 && _AP_S))),
      mod_s = _AP_S,
      logic_w = ((_AP_W + (_AP_S2 && !_AP_S)) > (_AP_W2 + (_AP_S && !_AP_S2)) ? (_AP_W + (_AP_S2 && !_AP_S)) : (_AP_W2 + (_AP_S && !_AP_S2))),
      logic_s = _AP_S || _AP_S2
    };


    typedef ap_int_base<mult_w, mult_s> mult_base;
    typedef ap_int_base<plus_w, plus_s> plus_base;
    typedef ap_int_base<minus_w, minus_s> minus_base;
    typedef ap_int_base<logic_w, logic_s> logic_base;
    typedef ap_int_base<div_w, div_s> div_base;
    typedef ap_int_base<mod_w, mod_s> mod_base;
    typedef ap_int_base<_AP_W, _AP_S> arg1_base;

    typedef typename _ap_int_factory<mult_w, mult_s>::type mult;
    typedef typename _ap_int_factory<plus_w, plus_s>::type plus;
    typedef typename _ap_int_factory<minus_w, minus_s>::type minus;
    typedef typename _ap_int_factory<logic_w, logic_s>::type logic;
    typedef typename _ap_int_factory<div_w, div_s>::type div;
    typedef typename _ap_int_factory<mod_w, mod_s>::type mod;
    typedef typename _ap_int_factory<_AP_W, _AP_S>::type arg1;
    typedef bool reduce;
  };





  inline __attribute__((always_inline)) ap_int_base() {





  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const ap_int_base<_AP_W2, _AP_S2>& op) {
    Base::V = op.V;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const volatile ap_int_base<_AP_W2, _AP_S2>& op) {
    Base::V = op.V;
  }
# 247 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_int_base(const bool op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const char op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const signed char op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned char op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const short op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned short op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const int op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned int op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const long op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const unsigned long op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const ap_slong op) { Base::V = op; }
  inline __attribute__((always_inline)) ap_int_base(const ap_ulong op) { Base::V = op; }




  inline __attribute__((always_inline)) ap_int_base(half op) {
    ap_int_base<_AP_W, _AP_S> t((float)op);
    Base::V = t.V;
  }


  inline __attribute__((always_inline)) ap_int_base(float op) {
    const int BITS = 23 + 8 + 1;
    ap_int_base<BITS, false> reg;
    reg.V = floatToRawBits(op);
    bool is_neg = ({ typeof(reg.V) __Val2__ = reg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), BITS - 1); __Result__; });

    ap_int_base<8 + 1, true> exp = 0;
    exp.V = ({ typename _ap_type::remove_const<typeof(reg.V)>::type __Result__ = 0; typeof(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 23, BITS - 2); __Result__; });
    exp = exp - ((1L << (8 - 1L)) - 1L);

    ap_int_base<23 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<typeof(reg.V)>::type __Result__ = 0; typeof(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 23 - 1); __Result__; });

    (static_cast<void>(0));


    man.V = ({ typename _ap_type::remove_const<typeof(man.V)>::type __Result__ = 0; typeof(man.V) __Val2__ = man.V; typeof(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 23, 23); __Result__; });


    if ((reg.V & 0x7ffffffful) == 0) {
      Base::V = 0;
    } else {
      int sh_amt = 23 - exp.V;
      if (sh_amt == 0) {
        Base::V = man.V;
      } else if (sh_amt > 0) {
        if (sh_amt < 23 + 2) {
          ap_int_base<23 + 2, true> man_shift;
          man_shift.V = (man.V >> sh_amt);






          Base::V = man_shift.V;
        } else {



            Base::V = 0;
        }
      } else {
        sh_amt = -sh_amt;
        if (sh_amt < _AP_W) {
          Base::V = man.V;
          Base::V <<= sh_amt;
        } else {



          Base::V = 0;
        }
      }
    }
    if (is_neg) *this = -(*this);
  }


  inline __attribute__((always_inline)) ap_int_base(double op) {
    const int BITS = 52 + 11 + 1;
    ap_int_base<BITS, false> reg;
    reg.V = doubleToRawBits(op);
    bool is_neg = ({ typeof(reg.V) __Val2__ = reg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), BITS - 1); __Result__; });

    ap_int_base<11 + 1, true> exp = 0;
    exp.V = ({ typename _ap_type::remove_const<typeof(reg.V)>::type __Result__ = 0; typeof(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 52, BITS - 2); __Result__; });
    exp = exp - ((1L << (11 - 1L)) - 1L);

    ap_int_base<52 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<typeof(reg.V)>::type __Result__ = 0; typeof(reg.V) __Val2__ = reg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 52 - 1); __Result__; });

    (static_cast<void>(0));


    man.V = ({ typename _ap_type::remove_const<typeof(man.V)>::type __Result__ = 0; typeof(man.V) __Val2__ = man.V; typeof(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52); __Result__; });


    if ((reg.V & 0x7fffffffffffffffull) == 0) {
      Base::V = 0;
    } else {
      int sh_amt = 52 - exp.V;
      if (sh_amt == 0) {
        Base::V = man.V;
      } else if (sh_amt > 0) {
        if (sh_amt < 52 + 2) {
          ap_int_base<23 + 2, true> man_shift;
          man_shift.V = (man.V >> sh_amt);






          Base::V = man_shift.V;
        } else {



           Base::V = 0;
        }
      } else {
        sh_amt = -sh_amt;
        if (sh_amt < _AP_W) {
          Base::V = man.V;
          Base::V <<= sh_amt;
        } else {



          Base::V = 0;
        }
      }
    }
    if (is_neg) *this = -(*this);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    op.checkOverflowCsimFix(_AP_W, _AP_S);
    Base::V = op.to_ap_int_base().V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const ap_range_ref<_AP_W2, _AP_S2>& ref) {
    Base::V = (ref.get()).V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base(const ap_bit_ref<_AP_W2, _AP_S2>& ref) {
    Base::V = ref.operator bool();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref) {
    const ap_int_base<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>::_AP_WR,
                      false>
        tmp = ref.get();
    Base::V = tmp.V;
  }
# 424 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_int_base(const char* s) {
    typeof(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), 10, _AP_W, _AP_S,
                      AP_TRN, AP_WRAP, 0, true);
    Base::V = t;
  }
  inline __attribute__((always_inline)) ap_int_base(const char* s, signed char rd) {
    typeof(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), rd, _AP_W, _AP_S,
                      AP_TRN, AP_WRAP, 0, true);
    Base::V = t;
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    Base::V = (val.get()).V;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    Base::V = val.operator bool();
  }

  inline __attribute__((always_inline)) ap_int_base read() volatile {

    ap_int_base ret;
    ret.V = Base::V;
    return ret;
  }

  inline __attribute__((always_inline)) void write(const ap_int_base<_AP_W, _AP_S>& op2) volatile {

    Base::V = op2.V;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) void operator=(
      const volatile ap_int_base<_AP_W2, _AP_S2>& op2) volatile {
    Base::V = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(
      const volatile ap_int_base<_AP_W, _AP_S>& op2) volatile {
    Base::V = op2.V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) void operator=(const ap_int_base<_AP_W2, _AP_S2>& op2) volatile {
    Base::V = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(const ap_int_base<_AP_W, _AP_S>& op2) volatile {
    Base::V = op2.V;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const volatile ap_int_base<_AP_W2, _AP_S2>& op2) {
    Base::V = op2.V;
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(const ap_int_base<_AP_W2, _AP_S2>& op2) {
    Base::V = op2.V;
    return *this;
  }

  inline __attribute__((always_inline)) ap_int_base& operator=(const volatile ap_int_base<_AP_W, _AP_S>& op2) {
    Base::V = op2.V;
    return *this;
  }

  ap_int_base& operator=(const ap_int_base<_AP_W, _AP_S>& op2) = default;







  inline __attribute__((always_inline)) ap_int_base& operator=(bool op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(signed char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned char op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(short op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned short op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(int op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned int op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(long op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(unsigned long op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(ap_slong op) { Base::V = op; return *this; }
  inline __attribute__((always_inline)) ap_int_base& operator=(ap_ulong op) { Base::V = op; return *this; }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& op2) {
    Base::V = (bool)op2;
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int_base& operator=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    Base::V = (ap_int_base<_AP_W2, false>(op2)).V;
    return *this;
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op2) {
    Base::V = op2.get().V;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = op.to_ap_int_base().V;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = (bool)op;
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int_base& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    Base::V = ((const ap_int_base<_AP_W2, false>)(op)).V;
    return *this;
  }





  inline __attribute__((always_inline)) operator RetType() const { return (RetType)(Base::V); }




  inline __attribute__((always_inline)) bool to_bool() const { return (bool)(Base::V); }
  inline __attribute__((always_inline)) char to_char() const { return (char)(Base::V); }
  inline __attribute__((always_inline)) signed char to_schar() const { return (signed char)(Base::V); }
  inline __attribute__((always_inline)) unsigned char to_uchar() const { return (unsigned char)(Base::V); }
  inline __attribute__((always_inline)) short to_short() const { return (short)(Base::V); }
  inline __attribute__((always_inline)) unsigned short to_ushort() const { return (unsigned short)(Base::V); }
  inline __attribute__((always_inline)) int to_int() const { return (int)(Base::V); }
  inline __attribute__((always_inline)) unsigned to_uint() const { return (unsigned)(Base::V); }
  inline __attribute__((always_inline)) long to_long() const { return (long)(Base::V); }
  inline __attribute__((always_inline)) unsigned long to_ulong() const { return (unsigned long)(Base::V); }
  inline __attribute__((always_inline)) ap_slong to_int64() const { return (ap_slong)(Base::V); }
  inline __attribute__((always_inline)) ap_ulong to_uint64() const { return (ap_ulong)(Base::V); }
  inline __attribute__((always_inline)) half to_half() const { return (float)(Base::V); }
  inline __attribute__((always_inline)) float to_float() const { return (float)(Base::V); }
  inline __attribute__((always_inline)) double to_double() const { return (double)(Base::V); }
# 616 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) int length() const volatile { return _AP_W; }


  inline __attribute__((always_inline)) bool iszero() const { return Base::V == 0; }


  inline __attribute__((always_inline)) bool is_zero() const { return Base::V == 0; }


  inline __attribute__((always_inline)) bool sign() const {
    if (_AP_S &&
        ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }))
      return true;
    else
      return false;
  }


  inline __attribute__((always_inline)) void clear(int i) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(0) __Repl2__ = !!0; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) void invert(int i) {
                                                           ;
    bool val = ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    if (val)
      Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(0) __Repl2__ = !!0; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
    else
      Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }

  inline __attribute__((always_inline)) bool test(int i) const {
                                                           ;
    return ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
  }


  inline __attribute__((always_inline)) ap_int_base& get() { return *this; }


  inline __attribute__((always_inline)) void set(int i) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) void set(int i, bool v) {
                                                           ;
    Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(v) __Repl2__ = !!v; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }



  inline __attribute__((always_inline)) ap_int_base& lrotate(int n) {
                                                              ;


    typeof(Base::V) l_p = Base::V << n;
    typeof(Base::V) r_p = Base::V >> (_AP_W - n);
    Base::V = l_p | r_p;



    return *this;
  }



  inline __attribute__((always_inline)) ap_int_base& rrotate(int n) {
                                                              ;


    typeof(Base::V) l_p = Base::V << (_AP_W - n);
    typeof(Base::V) r_p = Base::V >> n;
    Base::V = l_p | r_p;



    return *this;
  }



  inline __attribute__((always_inline)) ap_int_base& reverse() {
    Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
    return *this;
  }


  inline __attribute__((always_inline)) void set_bit(int i, bool v) {
    Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(v) __Repl2__ = !!v; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), i, i); __Result__; });
  }


  inline __attribute__((always_inline)) bool get_bit(int i) const {
    return (bool)({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
  }


  inline __attribute__((always_inline)) void b_not() { Base::V = ~Base::V; }

  template<typename T>
  inline __attribute__((always_inline)) void checkOverflowBaseC(T val) {
# 786 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
    (void)val;

    return;
  }

  inline __attribute__((always_inline)) bool checkOverflowCsim(int _ap_w2, bool _ap_s2,
          bool print = true) const {
# 836 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
      (void)_ap_w2;
      (void)_ap_s2;

      return 0;
  }
# 869 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator *=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V *= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator +=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V += op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator -=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V -= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator /=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V /= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator %=(const ap_int_base<_AP_W2, _AP_S2>& op2) { Base::V %= op2.V; return *this; }
# 887 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator &=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V &= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator |=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V |= op2.V; return *this; }
  template <int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base& operator ^=(const ap_int_base<_AP_W2, _AP_S2>& op2) { (static_cast<void>(0)); Base::V ^= op2.V; return *this; }





  inline __attribute__((always_inline)) ap_int_base& operator++() {
    operator+=((ap_int_base<1, false>)1);
    return *this;
  }
  inline __attribute__((always_inline)) ap_int_base& operator--() {
    operator-=((ap_int_base<1, false>)1);
    return *this;
  }




  inline __attribute__((always_inline)) const typename RType<_AP_W,_AP_S>::arg1 operator++(int) {
    ap_int_base t = *this;
    operator+=((ap_int_base<1, false>)1);
    return t;
  }
  inline __attribute__((always_inline)) const typename RType<_AP_W,_AP_S>::arg1 operator--(int) {
    ap_int_base t = *this;
    operator-=((ap_int_base<1, false>)1);
    return t;
  }




  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator+() const { return *this; }


  inline __attribute__((always_inline)) typename RType<1, false>::minus operator-() const {
    return ap_int_base<1, false>(0) - *this;
  }




  inline __attribute__((always_inline)) bool operator!() const { return Base::V == 0; }





  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator~() const {
    ap_int_base<_AP_W, _AP_S> r;
    r.V = ~Base::V;
    return r;
  }




  template <int _AP_W2>
  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator<<(const ap_int_base<_AP_W2, true>& op2) const {
    bool isNeg = ({ typeof(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator>>(sh);
    } else
      return operator<<(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator<<(const ap_int_base<_AP_W2, false>& op2) const {
    ap_int_base r;
    r.V = Base::V << op2.to_uint();
    return r;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator>>(const ap_int_base<_AP_W2, true>& op2) const {
    bool isNeg = ({ typeof(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator<<(sh);
    }
    return operator>>(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) typename RType<_AP_W,_AP_S>::arg1 operator>>(const ap_int_base<_AP_W2, false>& op2) const {
    ap_int_base r;
    r.V = Base::V >> op2.to_uint();
    return r;
  }
# 998 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int_base& operator<<=(const ap_int_base<_AP_W2, true>& op2) {
    bool isNeg = ({ typeof(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator>>=(sh);
    } else
      return operator<<=(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int_base& operator<<=(const ap_int_base<_AP_W2, false>& op2) {
    Base::V <<= op2.to_uint();
    return *this;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int_base& operator>>=(const ap_int_base<_AP_W2, true>& op2) {
    bool isNeg = ({ typeof(op2.V) __Val2__ = op2.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    ap_int_base<_AP_W2, false> sh = op2;
    if (isNeg) {
      sh = -op2;
      return operator<<=(sh);
    }
    return operator>>=(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int_base& operator>>=(const ap_int_base<_AP_W2, false>& op2) {
    Base::V >>= op2.to_uint();
    return *this;
  }
# 1047 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V == op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return !(Base::V == op2.V);
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V < op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V >= op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V > op2.V;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<=(const ap_int_base<_AP_W2, _AP_S2>& op2) const {
    return Base::V <= op2.V;
  }




  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(int Hi, int Lo) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ap_range_ref<_AP_W, _AP_S>(this, Hi, Lo);
  }


  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(int Hi, int Lo) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ap_range_ref<_AP_W, _AP_S>(const_cast<ap_int_base*>(this), Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range() {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> range() const {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(int Hi, int Lo) {
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(int Hi, int Lo) const {
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }
# 1156 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> operator[](int index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index);
    return bvh;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> operator[](
      const ap_int_base<_AP_W2, _AP_S2>& index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index.to_int());
    return bvh;
  }

  inline __attribute__((always_inline)) bool operator[](int index) const {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index);
    return br.to_bool();
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator[](const ap_int_base<_AP_W2, _AP_S2>& index) const {
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index.to_int());
    return br.to_bool();
  }

  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> bit(int index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index);
    return bvh;
  }
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref<_AP_W, _AP_S> bit(
      const ap_int_base<_AP_W2, _AP_S2>& index) {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> bvh(this, index.to_int());
    return bvh;
  }

  inline __attribute__((always_inline)) bool bit(int index) const {
                                                                       ;
                                                                 ;
    ap_bit_ref<_AP_W, _AP_S> br(this, index);
    return br.to_bool();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool bit(const ap_int_base<_AP_W2, _AP_S2>& index) const {
    return bit(index.to_int());
  }
# 1223 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) int countLeadingZeros() const {

    if (_AP_W <= 32) {
      ap_int_base<32, false> t(-1UL), x;
      x.V = ({ typename _ap_type::remove_const<typeof(this->V)>::type __Result__ = 0; typeof(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
      t.V = ({ typename _ap_type::remove_const<typeof(t.V)>::type __Result__ = 0; typeof(t.V) __Val2__ = t.V; typeof(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, _AP_W - 1); __Result__; });
      return __builtin_ctz(t.V);
    } else if (_AP_W <= 64) {
      ap_int_base<64, false> t(-1ULL);
      ap_int_base<64, false> x;
      x.V = ({ typename _ap_type::remove_const<typeof(this->V)>::type __Result__ = 0; typeof(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - 1, 0); __Result__; });
      t.V = ({ typename _ap_type::remove_const<typeof(t.V)>::type __Result__ = 0; typeof(t.V) __Val2__ = t.V; typeof(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, _AP_W - 1); __Result__; });
      return __builtin_ctzll(t.V);
    } else {
      enum { __N = (_AP_W + 63) / 64 };
      int NZeros = 0;
      int i = 0;
      bool hitNonZero = false;
      VITIS_LOOP_1241_1: for (i = 0; i < __N - 1; ++i) {
        ap_int_base<64, false> t;
        t.V = ({ typename _ap_type::remove_const<typeof(this->V)>::type __Result__ = 0; typeof(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - i * 64 - 64, _AP_W - i * 64 - 1); __Result__; });
        NZeros += hitNonZero ? 0 : __builtin_clzll(t.V);
        hitNonZero |= (t.V != 0);
      }
      if (!hitNonZero) {
        ap_int_base<64, false> t(-1ULL);
        enum { REST = (_AP_W - 1) % 64 };
        ap_int_base<64, false> x;
        x.V = ({ typename _ap_type::remove_const<typeof(this->V)>::type __Result__ = 0; typeof(this->V) __Val2__ = this->V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, REST); __Result__; });
        t.V = ({ typename _ap_type::remove_const<typeof(t.V)>::type __Result__ = 0; typeof(t.V) __Val2__ = t.V; typeof(x.V) __Repl2__ = x.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 63 - REST, 63); __Result__; });
        NZeros += __builtin_clzll(t.V);
      }
      return NZeros;
    }



  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  concat(const ap_int_base<_AP_W2, _AP_S2>& a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  concat(ap_int_base<_AP_W2, _AP_S2>& a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this), a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &a2) const {
    return ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, a2);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_int_base, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(*this,
                                                                         a2);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_int_base, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                &a2) const {
    return ap_concat_ref<
        _AP_W, ap_int_base, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_int_base, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        _AP_W, ap_int_base, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this,
                                                                       a2);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &a2) const {
    return ap_concat_ref<
        _AP_W, ap_int_base, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        const_cast<ap_int_base<_AP_W, _AP_S>&>(*this),
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_int_base, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(
          af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        _AP_W, ap_int_base, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this, a2);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator&(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this & a2.get();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator|(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this | a2.get();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_W2 + _AP_W3) > (_AP_W) ? (_AP_W2 + _AP_W3) : (_AP_W)), _AP_S> operator^(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& a2) {
    return *this ^ a2.get();
  }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    Base::V = val.V;
  }





  inline __attribute__((always_inline)) bool and_reduce() const { return ({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_and_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool nand_reduce() const { return ({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_nand_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool or_reduce() const { return ({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_or_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool nor_reduce() const { return !(({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_or_reduce((void*)(&__what2__)); })); }
  inline __attribute__((always_inline)) bool xor_reduce() const { return ({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_xor_reduce((void*)(&__what2__)); }); }
  inline __attribute__((always_inline)) bool xnor_reduce() const {
    return !(({ typeof(Base::V) __what2__ = Base::V; __builtin_bit_xor_reduce((void*)(&__what2__)); }));
  }
# 1463 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  inline __attribute__((always_inline)) char* to_string(signed char rd = 2, bool sign = _AP_S) const {
    (void)(rd);
    (void)(sign);
    return 0;
  }

};
# 1524 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mult_base ret; ret.V = lhs.V * rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::plus_base ret; ret.V = lhs.V + rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::minus_base ret; ret.V = lhs.V - rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret; ret.V = lhs.V & rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret; ret.V = lhs.V | rhs.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base lhs(op); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base rhs(op2); typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::logic_base ret; ret.V = lhs.V ^ rhs.V; return ret; }
# 1543 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::div_base ret; ret.V = op.V / op2.V; return ret; }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { typename ap_int_base<_AP_W, _AP_S>::template RType< _AP_W2, _AP_S2>::mod_base ret; ret.V = op.V % op2.V; return ret; }
# 1571 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator +(PTR_TYPE* i_op, const ap_int_base<_AP_W, _AP_S>& op) { ap_slong op2 = op.to_int64(); return i_op + op2; } template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator +(const ap_int_base<_AP_W, _AP_S>& op, PTR_TYPE* i_op) { ap_slong op2 = op.to_int64(); return op2 + i_op; }
template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator -(PTR_TYPE* i_op, const ap_int_base<_AP_W, _AP_S>& op) { ap_slong op2 = op.to_int64(); return i_op - op2; } template <typename PTR_TYPE, int _AP_W, bool _AP_S> inline __attribute__((always_inline)) PTR_TYPE* operator -(const ap_int_base<_AP_W, _AP_S>& op, PTR_TYPE* i_op) { ap_slong op2 = op.to_int64(); return op2 - i_op; }
# 1600 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator *(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator *(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator /(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator /(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator +(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator +(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator -(half i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half operator -(const ap_int_base<_AP_W, _AP_S>& op, half i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator *(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator *(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator /(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator /(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator +(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator +(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator -(float i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float operator -(const ap_int_base<_AP_W, _AP_S>& op, float i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator *(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op * op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator *(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 * i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator /(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op / op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator /(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 / i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator +(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op + op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator +(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 + i_op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator -(double i_op, const ap_int_base<_AP_W, _AP_S>& op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return i_op - op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double operator -(const ap_int_base<_AP_W, _AP_S>& op, double i_op) { typename ap_int_base<_AP_W, _AP_S>::RetType op2 = op; return op2 - i_op; }
# 1634 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mult operator *(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op * ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::plus operator +(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op + ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::minus operator -(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op - ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::div operator /(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op / ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mod operator %(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op % ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator &(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op & ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator |(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op | ap_int_base<1, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator ^(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<1, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, bool i_op) { return op ^ ap_int_base<1, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mult operator *(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op * ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::plus operator +(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op + ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::minus operator -(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op - ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::div operator /(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op / ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mod operator %(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op % ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator &(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op & ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator |(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op | ap_int_base<8, CHAR_IS_SIGNED>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator ^(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, CHAR_IS_SIGNED>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, char i_op) { return op ^ ap_int_base<8, CHAR_IS_SIGNED>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mult operator *(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op * ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::plus operator +(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op + ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::minus operator -(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op - ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::div operator /(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op / ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mod operator %(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op % ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator &(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op & ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator |(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op | ap_int_base<8, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator ^(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, signed char i_op) { return op ^ ap_int_base<8, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mult operator *(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op * ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::plus operator +(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op + ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::minus operator -(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op - ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::div operator /(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op / ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mod operator %(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op % ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator &(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op & ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator |(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op | ap_int_base<8, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator ^(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<8, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned char i_op) { return op ^ ap_int_base<8, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mult operator *(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op * ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::plus operator +(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op + ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::minus operator -(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op - ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::div operator /(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op / ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mod operator %(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op % ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator &(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op & ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator |(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op | ap_int_base<_AP_SIZE_short, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator ^(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, short i_op) { return op ^ ap_int_base<_AP_SIZE_short, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mult operator *(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op * ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::plus operator +(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op + ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::minus operator -(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op - ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::div operator /(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op / ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mod operator %(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op % ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator &(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op & ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator |(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op | ap_int_base<_AP_SIZE_short, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator ^(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_short, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned short i_op) { return op ^ ap_int_base<_AP_SIZE_short, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mult operator *(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op * ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::plus operator +(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op + ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::minus operator -(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op - ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::div operator /(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op / ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mod operator %(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op % ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator &(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op & ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator |(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op | ap_int_base<_AP_SIZE_int, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator ^(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, int i_op) { return op ^ ap_int_base<_AP_SIZE_int, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mult operator *(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op * ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::plus operator +(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op + ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::minus operator -(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op - ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::div operator /(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op / ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mod operator %(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op % ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator &(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op & ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator |(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op | ap_int_base<_AP_SIZE_int, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator ^(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_int, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned int i_op) { return op ^ ap_int_base<_AP_SIZE_int, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mult operator *(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op * ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::plus operator +(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op + ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::minus operator -(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op - ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::div operator /(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op / ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mod operator %(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op % ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator &(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op & ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator |(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op | ap_int_base<_AP_SIZE_long, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator ^(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, long i_op) { return op ^ ap_int_base<_AP_SIZE_long, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mult operator *(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op * ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::plus operator +(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op + ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::minus operator -(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op - ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::div operator /(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op / ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mod operator %(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op % ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator &(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op & ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator |(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op | ap_int_base<_AP_SIZE_long, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator ^(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_long, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, unsigned long i_op) { return op ^ ap_int_base<_AP_SIZE_long, false>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mult operator *(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op * ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::plus operator +(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op + ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::minus operator -(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op - ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::div operator /(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op / ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mod operator %(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op % ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator &(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op & ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator |(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op | ap_int_base<_AP_SIZE_ap_slong, true>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator ^(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, true>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, ap_slong i_op) { return op ^ ap_int_base<_AP_SIZE_ap_slong, true>(i_op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mult operator *(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) *(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mult operator *(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op * ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::plus operator +(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) +(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::plus operator +(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op + ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::minus operator -(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) -(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::minus operator -(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op - ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::div operator /(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) /(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::div operator /(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op / ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mod operator %(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) %(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::mod operator %(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op % ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator &(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) &(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator &(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op & ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator |(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) |(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator |(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op | ap_int_base<_AP_SIZE_ap_slong, false>(i_op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator ^(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) ^(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_SIZE_ap_slong, false>::logic operator ^(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong i_op) { return op ^ ap_int_base<_AP_SIZE_ap_slong, false>(i_op); }
# 1673 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, char op2) { ap_int_base<_AP_W, _AP_S> r; if (CHAR_IS_SIGNED) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, char op2) { ap_int_base<_AP_W, _AP_S> r; if (CHAR_IS_SIGNED) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, short op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, short op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, int op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, int op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, long op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, long op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V << op2) : (op.V >> (-op2)); else r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { ap_int_base<_AP_W, _AP_S> r; if (true) r.V = op2 >= 0 ? (op.V >> op2) : (op.V << (-op2)); else r.V = op.V >> op2; return r; }
# 1697 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, bool op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, bool op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator<<( const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V << op2; return r; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, _AP_S>::template RType<_AP_W,_AP_S>::arg1 operator>>( const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { ap_int_base<_AP_W, _AP_S> r; r.V = op.V >> op2; return r; }
# 1728 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op += ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op -= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op *= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op /= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op %= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op &= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op |= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op ^= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op >>= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op <<= ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op += ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op -= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op *= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op /= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op %= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op &= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op |= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op ^= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op >>= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, char op2) { return op <<= ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op += ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op -= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op *= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op /= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op %= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op &= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op |= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op ^= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op >>= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op <<= ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op += ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op -= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op *= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op /= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op %= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op &= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op |= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op ^= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op >>= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op <<= ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op += ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op -= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op *= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op /= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op %= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op &= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op |= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op ^= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op >>= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, short op2) { return op <<= ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op += ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op -= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op *= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op /= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op %= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op &= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op |= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op ^= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op >>= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op <<= ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op += ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op -= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op *= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op /= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op %= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op &= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op |= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op ^= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op >>= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, int op2) { return op <<= ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op += ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op -= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op *= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op /= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op %= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op &= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op |= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op ^= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op >>= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op <<= ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op += ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op -= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op *= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op /= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op %= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op &= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op |= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op ^= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op >>= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, long op2) { return op <<= ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op += ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op -= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op *= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op /= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op %= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op &= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op |= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op ^= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op >>= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op <<= ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op += ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op -= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op *= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op /= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op %= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op &= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op |= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op ^= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op >>= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op <<= ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator +=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op += ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator -=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op -= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator *=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op *= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator /=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op /= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator %=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op %= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator &=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op &= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator |=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op |= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator ^=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op ^= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator >>=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op >>= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W, _AP_S>& operator <<=( ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op <<= ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1761 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator +=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator -=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator *=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) half& operator /=( half& op2, ap_int_base<_AP_W, _AP_S>& op) { half op_rt = op.to_half(); return op2 /= op_rt; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator +=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator -=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator *=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) float& operator /=( float& op2, ap_int_base<_AP_W, _AP_S>& op) { float op_rt = op.to_float(); return op2 /= op_rt; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator +=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 += op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator -=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 -= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator *=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 *= op_rt; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) double& operator /=( double& op2, ap_int_base<_AP_W, _AP_S>& op) { double op_rt = op.to_double(); return op2 /= op_rt; }
# 1789 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op <= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(bool i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<1, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, bool op2) { return op != ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op <= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, CHAR_IS_SIGNED>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, char op2) { return op != ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op <= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(signed char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, signed char op2) { return op != ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op <= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned char i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<8, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned char op2) { return op != ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op <= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, short op2) { return op != ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op <= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned short i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_short, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned short op2) { return op != ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op <= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, int op2) { return op != ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op <= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned int i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_int, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned int op2) { return op != ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op <= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, long op2) { return op != ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op <= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned long i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_long, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, unsigned long op2) { return op != ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_slong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, true>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, ap_slong op2) { return op != ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) > op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) < op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) >= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) <= op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) == op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_ulong i_op, const ap_int_base<_AP_W, _AP_S>& op) { return ap_int_base<_AP_SIZE_ap_slong, false>(i_op) != op; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op, ap_ulong op2) { return op != ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1826 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() > op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 > op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() > op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 > op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() < op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 < op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() < op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 < op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() >= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 >= op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() >= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 >= op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() <= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 <= op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() <= op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 <= op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() == op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 == op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() == op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 == op2.to_double() ; }
  template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op1, double op2) { return op1.to_double() != op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(double op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 != op2.to_double() ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W, _AP_S>& op1, float op2) { return op1.to_double() != op2 ; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(float op1, const ap_int_base<_AP_W, _AP_S>& op2) { return op1 != op2.to_double() ; }
# 1856 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) + op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 + ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) - op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 - ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) * op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 * ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) / op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 / ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) % op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 % ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) & op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 & ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) | op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 | ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) ^ op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 ^ ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) >> op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 >> ap_int_base<_AP_W2, false>(op2); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1) << op2; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 << ap_int_base<_AP_W2, false>(op2); }
# 1887 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator +=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 += ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator +=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp += op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator -=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 -= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator -=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp -= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator *=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 *= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator *=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp *= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator /=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 /= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator /=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp /= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator %=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 %= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator %=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp %= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator >>=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 >>= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator >>=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp >>= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator <<=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1 <<= ap_int_base<_AP_W2, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator <<=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp <<= op2; op1 = tmp; return op1; }
# 1919 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator &=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V &= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator &=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V &= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator |=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V |= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator |=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V |= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator ^=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W2, false> tmp(op2); op1.V ^= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_range_ref<_AP_W1, _AP_S1>& operator ^=( ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<_AP_W1, false> tmp(op1); tmp.V ^= op2.V; op1 = tmp; return op1; }
# 1938 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator ==(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator ==(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator !=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator !=(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator >(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator >(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator >=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator >=(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator <(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator <(op2.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<_AP_W1, false>(op1).operator <=(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_range_ref<_AP_W2, _AP_S2>& op2) { return op1.operator <=(op2.operator ap_int_base<_AP_W2, false>()); }
# 1965 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::plus operator +(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 + ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::plus operator +(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) + op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::minus operator -(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 - ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::minus operator -(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) - op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::mult operator *(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 * ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::mult operator *(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) * op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::div operator /(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 / ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::div operator /(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) / op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::mod operator %(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 % ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::mod operator %(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) % op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator &(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 & ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator &(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) & op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator |(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 | ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator |(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) | op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::logic operator ^(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 ^ ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::logic operator ^(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) ^ op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::arg1 operator >>(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >> ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::arg1 operator >>(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) >> op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W1, _AP_S1>::template RType<1, false>::arg1 operator <<(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 << ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<1, false>::template RType<_AP_W2, _AP_S2>::arg1 operator <<(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) << op2; }
# 1996 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator +=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 += ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator +=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp += op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator -=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 -= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator -=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp -= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator *=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 *= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator *=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp *= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator /=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 /= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator /=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp /= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator %=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 %= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator %=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp %= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator >>=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >>= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator >>=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp >>= op2; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator <<=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 <<= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator <<=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp <<= op2; op1 = tmp; return op1; }
# 2028 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator &=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V &= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator &=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V &= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator |=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V |= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator |=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V |= op2.V; op1 = tmp; return op1; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W1, _AP_S1>& operator ^=( ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op2); op1.V ^= tmp.V; return op1; } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_bit_ref<_AP_W1, _AP_S1>& operator ^=( ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { ap_int_base<1, false> tmp(op1); tmp.V ^= op2.V; op1 = tmp; return op1; }
# 2047 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 == ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) == op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 != ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) != op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 > ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) > op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 >= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) >= op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 < ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) < op2; }
template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_int_base<_AP_W1, _AP_S1>& op1, const ap_bit_ref<_AP_W2, _AP_S2>& op2) { return op1 <= ap_int_base<1, false>(op2); } template <int _AP_W1, bool _AP_S1, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W1, _AP_S1>& op1, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op1) <= op2; }
# 2154 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_base.h"
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 == op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() == op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 != op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() != op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 > op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() > op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 >= op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() >= op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 < op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() < op2; }
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W3, _AP_S3>& op1, const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op2) { return op1 <= op2.get(); } template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2, int _AP_W3, bool _AP_S3> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& op1, const ap_int_base<_AP_W3, _AP_S3>& op2) { return op1.get() <= op2; }
# 57 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h" 1
# 73 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W1, typename _AP_T1, int _AP_W2, typename _AP_T2>
struct ap_concat_ref {
  enum {
    _AP_WR = _AP_W1 + _AP_W2,
  };

  _AP_T1& mbv1;
  _AP_T2& mbv2;

  inline __attribute__((always_inline)) ap_concat_ref(const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& ref)
      : mbv1(ref.mbv1), mbv2(ref.mbv2) {}

  inline __attribute__((always_inline)) ap_concat_ref(_AP_T1& bv1, _AP_T2& bv2) : mbv1(bv1), mbv2(bv2) {}

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_int_base<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> vval(val);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W1, false> Part1;
    Part1.V = ({ typename _ap_type::remove_const<typeof(vval.V)>::type __Result__ = 0; typeof(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    mbv1.set(Part1);
    ap_int_base<_AP_W2, false> Part2;
    Part2.V = ({ typename _ap_type::remove_const<typeof(vval.V)>::type __Result__ = 0; typeof(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, W_ref2 - 1); __Result__; });
    mbv2.set(Part2);
    return *this;
  }
# 116 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_concat_ref& operator=(bool val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(signed char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned char val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(short val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned short val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(int val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned int val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(long val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(unsigned long val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(ap_slong val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(ap_ulong val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(half val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(float val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }
  inline __attribute__((always_inline)) ap_concat_ref& operator=(double val) { ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val); return operator=(tmpVal); }





  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_concat_ref<_AP_W1, _AP_T1, _AP_W2, _AP_T2>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, typename _AP_T3, int _AP_W4, typename _AP_T4>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_bit_ref<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }
  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(const ap_range_ref<_AP_W3, _AP_S3>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> tmpVal(val);
    return operator=(tmpVal);
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>& val) {
    return operator=((const ap_int_base<_AP_W3, false>)(val));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const ap_fixed_base<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&
          val) {
    return operator=(val.to_ap_int_base());
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref& operator=(
      const af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>& val) {
    return operator=((ap_ulong)(bool)(val));
  }

  inline __attribute__((always_inline)) operator ap_int_base<_AP_WR, false>() const { return get(); }

  inline __attribute__((always_inline)) operator ap_ulong() const { return get().to_uint64(); }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                       ap_range_ref<_AP_W3, _AP_S3> >
  operator,(const ap_range_ref<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_range_ref<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_range_ref<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(*this, a2);
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(volatile ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(const ap_int_base<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3, ap_int_base<_AP_W3, _AP_S3> >
      operator,(const volatile ap_int_base<_AP_W3, _AP_S3> &a2) {

    ap_int_base<_AP_W3, _AP_S3> op(a2);
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3,
                         ap_int_base<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_int_base<_AP_W3, _AP_S3>&>(op));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, 1, ap_bit_ref<_AP_W3, _AP_S3> >
  operator,(const ap_bit_ref<_AP_W3, _AP_S3> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, 1, ap_bit_ref<_AP_W3, _AP_S3> >(
        *this, const_cast<ap_bit_ref<_AP_W3, _AP_S3>&>(a2));
  }

  template <int _AP_W3, typename _AP_T3, int _AP_W4, typename _AP_T4>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3 + _AP_W4,
                       ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> >
  operator,(const ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> &a2) {
    return ap_concat_ref<_AP_WR, ap_concat_ref, _AP_W3 + _AP_W4,
                         ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4> >(
        *this, const_cast<ap_concat_ref<_AP_W3, _AP_T3, _AP_W4, _AP_T4>&>(a2));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_WR, ap_concat_ref, _AP_W3,
      af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >
  operator,(
      const af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> &a2) {
    return ap_concat_ref<
        _AP_WR, ap_concat_ref, _AP_W3,
        af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >(
        *this,
        const_cast<
            af_range_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&>(a2));
  }

  template <int _AP_W3, int _AP_I3, bool _AP_S3, ap_q_mode _AP_Q3,
            ap_o_mode _AP_O3, int _AP_N3>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_WR, ap_concat_ref, 1,
                    af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >
      operator,(const af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>
                    &a2) {
    return ap_concat_ref<
        _AP_WR, ap_concat_ref, 1,
        af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3> >(
        *this,
        const_cast<af_bit_ref<_AP_W3, _AP_I3, _AP_S3, _AP_Q3, _AP_O3, _AP_N3>&>(
            a2));
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator&(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() & a2;
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator|(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() | a2;
  }

  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) ap_int_base<((_AP_WR) > (_AP_W3) ? (_AP_WR) : (_AP_W3)), _AP_S3> operator^(
      const ap_int_base<_AP_W3, _AP_S3>& a2) {
    return get() ^ a2;
  }
# 304 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_int_base<_AP_WR, false> get() const {
    ap_int_base<_AP_WR, false> tmpVal(0);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W2, false> v2(mbv2);
    ap_int_base<_AP_W1, false> v1(mbv1);
    tmpVal.V = ({ typename _ap_type::remove_const<typeof(tmpVal.V)>::type __Result__ = 0; typeof(tmpVal.V) __Val2__ = tmpVal.V; typeof(v2.V) __Repl2__ = v2.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 0, W_ref2 - 1); __Result__; });
    tmpVal.V =
        ({ typename _ap_type::remove_const<typeof(tmpVal.V)>::type __Result__ = 0; typeof(tmpVal.V) __Val2__ = tmpVal.V; typeof(v1.V) __Repl2__ = v1.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    return tmpVal;
  }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    ap_int_base<_AP_W1 + _AP_W2, false> vval(val);
    int W_ref1 = mbv1.length();
    int W_ref2 = mbv2.length();
    ap_int_base<_AP_W1, false> tmpVal1;
    tmpVal1.V = ({ typename _ap_type::remove_const<typeof(vval.V)>::type __Result__ = 0; typeof(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), W_ref2, W_ref1 + W_ref2 - 1); __Result__; });
    mbv1.set(tmpVal1);
    ap_int_base<_AP_W2, false> tmpVal2;
    tmpVal2.V = ({ typename _ap_type::remove_const<typeof(vval.V)>::type __Result__ = 0; typeof(vval.V) __Val2__ = vval.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, W_ref2 - 1); __Result__; });
    mbv2.set(tmpVal2);
  }

  inline __attribute__((always_inline)) int length() const { return mbv1.length() + mbv2.length(); }
};




template <int _AP_W, bool _AP_S>
struct ap_range_ref {



  typedef ap_int_base<_AP_W, _AP_S> ref_type;
  ref_type& d_bv;
  int l_index;
  int h_index;

 public:
  inline __attribute__((always_inline)) ap_range_ref(const ap_range_ref<_AP_W, _AP_S>& ref)
      : d_bv(ref.d_bv), l_index(ref.l_index), h_index(ref.h_index) {}

  inline __attribute__((always_inline)) ap_range_ref(ref_type* bv, int h, int l)
      : d_bv(*bv), l_index(l), h_index(h) {}

  inline __attribute__((always_inline)) ap_range_ref(const ref_type* bv, int h, int l)
      : d_bv(*const_cast<ref_type*>(bv)), l_index(l), h_index(h) {}

  inline __attribute__((always_inline)) operator ap_int_base<_AP_W, false>() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) operator ap_ulong() const { return to_uint64(); }
# 385 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_range_ref& operator=(bool val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(signed char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned char val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(short val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned short val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(int val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned int val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(long val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(unsigned long val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(ap_slong val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(ap_ulong val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(half val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(float val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_range_ref& operator=(double val) { ap_int_base<_AP_W, false> tmp(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }




  inline __attribute__((always_inline)) ap_range_ref& operator=(const char* val) {
    const ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }




  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_range_ref& val) {
    return operator=((const ap_int_base<_AP_W, false>)val);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(bool)(val));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          val) {
    return operator=(val.to_ap_int_base());
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((ap_ulong)(bool)(val));
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_range_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& val) {
    return operator=((const ap_int_base<_AP_W2 + _AP_W3, false>)(val));
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
      operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, a2);
  }

  inline __attribute__((always_inline))
  ap_concat_ref<_AP_W, ap_range_ref, _AP_W, ap_int_base<_AP_W, _AP_S> >
  operator,(ap_int_base<_AP_W, _AP_S>& a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W,
                         ap_int_base<_AP_W, _AP_S> >(*this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(const volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, ap_range_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<_AP_W, ap_range_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      _AP_W, ap_range_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> a2) {
    return ap_concat_ref<
        _AP_W, ap_range_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, ap_range_ref, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &a2) {
    return ap_concat_ref<
        _AP_W, ap_range_ref, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop == hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop < hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> hop(op2);
    return lop <= hop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<=(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator|=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V |= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator|=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V |= op2.V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator&=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V &= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator&=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V &= op2.V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator^=(
      const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V ^= (op2.d_bv).V;
    return *this;
  };

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_range_ref<_AP_W, _AP_S>& operator^=(
      const ap_int_base<_AP_W2, _AP_S2>& op2) {
    (this->d_bv).V ^= op2.V;
    return *this;
  };



  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator~() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (~ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator!() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (!ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator+() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator-() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (-ret);
  }


  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> get() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W2, false>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
  }

  inline __attribute__((always_inline)) int length() const {
    return h_index >= l_index ? h_index - l_index + 1 : l_index - h_index + 1;
  }

  inline __attribute__((always_inline)) int to_int() const {
    return (int)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned to_uint() const {
    return (unsigned)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) long to_long() const {
    return (long)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned long to_ulong() const {
    return (unsigned long)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_slong to_int64() const {
    return (ap_slong)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_ulong to_uint64() const {
    return (ap_ulong)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) bool and_reduce() const {
    bool ret = true;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_716_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret &= ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }

  inline __attribute__((always_inline)) bool or_reduce() const {
    bool ret = false;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_730_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret |= ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }

  inline __attribute__((always_inline)) bool xor_reduce() const {
    bool ret = false;
    bool reverse = l_index > h_index;
    unsigned low = reverse ? h_index : l_index;
    unsigned high = reverse ? l_index : h_index;
    VITIS_LOOP_744_1: for (unsigned i = low; i != high; ++i) {

#pragma HLS unroll

 ret ^= ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), i); __Result__; });
    }
    return ret;
  }
# 760 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) char* to_string(signed char radix = 2) const {
    (void)(radix);
    return 0;
  }

};
# 800 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S>
struct ap_bit_ref {



  typedef ap_int_base<_AP_W, _AP_S> ref_type;
  ref_type& d_bv;
  int d_index;

 public:

  inline __attribute__((always_inline)) ap_bit_ref(const ap_bit_ref<_AP_W, _AP_S>& ref)
      : d_bv(ref.d_bv), d_index(ref.d_index) {}

  inline __attribute__((always_inline)) ap_bit_ref(ref_type* bv, int index = 0) : d_bv(*bv), d_index(index) {}

  inline __attribute__((always_inline)) ap_bit_ref(const ref_type* bv, int index = 0)
      : d_bv(*const_cast<ref_type*>(bv)), d_index(index) {}

  inline __attribute__((always_inline)) operator bool() const { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }
  inline __attribute__((always_inline)) bool to_bool() const { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }
# 838 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_bit_ref& operator=(bool val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(char val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(signed char val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned char val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(short val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned short val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(int val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned int val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(long val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(unsigned long val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(ap_slong val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(ap_ulong val) { d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
# 860 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
  inline __attribute__((always_inline)) ap_bit_ref& operator=(half val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(float val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) ap_bit_ref& operator=(double val) { bool tmp_val = val; d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp_val) __Repl2__ = !!tmp_val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; }); return *this; }




  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(val.V != 0));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_int_base<_AP_W2, false>)val);
  }



  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_bit_ref& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((const ap_int_base<_AP_W2, false>)val);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=((ap_ulong)(bool)val);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_bit_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    return operator=((const ap_int_base<_AP_W2 + _AP_W3, false>)val);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, a2);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const ap_int_base<_AP_W2, _AP_S2> &a2) {
    ap_int_base<_AP_W2, _AP_S2> op(a2);
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(op));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(const volatile ap_int_base<_AP_W2, _AP_S2> &a2) {
    ap_int_base<_AP_W2, _AP_S2> op(a2);
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_int_base<_AP_W2, _AP_S2>&>(op));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> > operator,(
      const ap_bit_ref<_AP_W2, _AP_S2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(a2));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &a2) {
    return ap_concat_ref<1, ap_bit_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      1, ap_bit_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<
        1, ap_bit_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<
            af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(a2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<1, ap_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                    _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &a2) {
    return ap_concat_ref<1, ap_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                      _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            a2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    return get() == op.get();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    return get() != op.get();
  }

  inline __attribute__((always_inline)) bool get() const { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  inline __attribute__((always_inline)) bool get() { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  template <int _AP_W3>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W3, false>& val) {
    operator=(val);
  }

  inline __attribute__((always_inline)) bool operator~() const {
    bool bit = ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; });
    return bit ? false : true;
  }

  inline __attribute__((always_inline)) int length() const { return 1; }





  inline __attribute__((always_inline)) char* to_string() const { return 0; }

};
# 1058 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) > op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 > bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) > ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) < op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 < bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) < ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) >= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator >=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 >= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator >=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) >= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) <= op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator <=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 <= bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator <=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) <= ap_int_base<_AP_SIZE_ap_slong, false>(op2); }






template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<1, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, bool op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(bool op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, bool op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<1, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, CHAR_IS_SIGNED>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, CHAR_IS_SIGNED>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, signed char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(signed char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, signed char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<8, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned char op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned char op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned char op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<8, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_short, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, short op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_short, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_short, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned short op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned short op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned short op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_short, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_int, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, int op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_int, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_int, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned int op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned int op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned int op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_int, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_long, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, long op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_long, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_long, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, unsigned long op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(unsigned long op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, unsigned long op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_long, false>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_ap_slong, true>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_slong op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_slong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_slong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_ap_slong, true>(op2); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) == op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator ==(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 == bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator ==( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) == ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<_AP_SIZE_ap_slong, false>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(const ap_bit_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return bool(op) != op2; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) bool operator !=(ap_ulong op2, const ap_bit_ref<_AP_W, _AP_S>& op) { return op2 != bool(op); } template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) bool operator !=( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1>& op, ap_ulong op2) { return ap_int_base<_AP_W + _AP_W1, false>(op) != ap_int_base<_AP_SIZE_ap_slong, false>(op2); }
# 1117 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::plus operator +(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::minus operator -(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::mult operator *(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::div operator /(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::mod operator %(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::plus operator +(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::minus operator -(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::mult operator *(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::div operator /(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::mod operator %(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::plus operator +(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::minus operator -(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::mult operator *(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::div operator /(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::mod operator %(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::plus operator +(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::minus operator -(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::mult operator *(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::div operator /(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::mod operator %(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::plus operator +(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::minus operator -(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::mult operator *(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::div operator /(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::mod operator %(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::plus operator +(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::minus operator -(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::mult operator *(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::div operator /(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::mod operator %(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::plus operator +(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::minus operator -(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::mult operator *(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::div operator /(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::mod operator %(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::plus operator +(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::minus operator -(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::mult operator *(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::div operator /(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::mod operator %(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::plus operator +(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::minus operator -(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::mult operator *(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::div operator /(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::mod operator %(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::plus operator +(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::minus operator -(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::mult operator *(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::div operator /(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::mod operator %(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::plus operator +(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::minus operator -(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::mult operator *(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::div operator /(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::mod operator %(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) % ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) + ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::plus operator +(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) + ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) - ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::minus operator -(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) - ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) * ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::mult operator *(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) * ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::div operator /(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) / ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::div operator /(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) / ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) % ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::mod operator %(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) % ap_int_base<_AP_W, false>(op); }
# 1140 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator &(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator |(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::logic operator ^(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::arg1 operator >>(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(1), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, bool op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(1), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(1), (false)>::template RType<_AP_W, false>::arg1 operator <<(bool op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(1), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator &(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator |(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::logic operator ^(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::arg1 operator >>(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (CHAR_IS_SIGNED)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (CHAR_IS_SIGNED)>::template RType<_AP_W, false>::arg1 operator <<(char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator &(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator |(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::logic operator ^(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::arg1 operator >>(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (true)>::template RType<_AP_W, false>::arg1 operator <<(signed char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator &(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator |(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(8), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(8), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(8), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned char op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(8), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator &(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator |(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::logic operator ^(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::arg1 operator >>(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, short op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (true)>::template RType<_AP_W, false>::arg1 operator <<(short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator &(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator |(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_short), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_short), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned short op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator &(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator |(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::logic operator ^(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::arg1 operator >>(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, int op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (true)>::template RType<_AP_W, false>::arg1 operator <<(int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator &(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator |(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_int), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_int), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned int op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator &(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator |(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::logic operator ^(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::arg1 operator >>(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, long op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (true)>::template RType<_AP_W, false>::arg1 operator <<(long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator &(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator |(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::logic operator ^(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::arg1 operator >>(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_long), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_long), (false)>::template RType<_AP_W, false>::arg1 operator <<(unsigned long op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator &(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator |(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::logic operator ^(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::arg1 operator >>(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (true)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (true)>::template RType<_AP_W, false>::arg1 operator <<(ap_slong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) << ap_int_base<_AP_W, false>(op); }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) & ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator &(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) & ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) | ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator |(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) | ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) ^ ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::logic operator ^(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) ^ ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >> ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::arg1 operator >>(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) >> ap_int_base<_AP_W, false>(op); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<(_AP_SIZE_ap_slong), (false)>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) << ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) typename ap_int_base<(_AP_SIZE_ap_slong), (false)>::template RType<_AP_W, false>::arg1 operator <<(ap_ulong op2, const ap_range_ref<_AP_W, _AP_S>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) << ap_int_base<_AP_W, false>(op); }
# 1168 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::plus operator +(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())+( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::minus operator -(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())-( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::mult operator *(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())*( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::div operator /(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())/( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::mod operator %(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())%( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator &(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())&( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator |(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())|( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::logic operator ^(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())^( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::arg1 operator >>(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())>>( rhs.operator ap_int_base<_AP_W2, false>()); }
template <int _AP_W, bool _AP_S, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_int_base<_AP_W, false>::template RType<_AP_W2, false>::arg1 operator <<(const ap_range_ref<_AP_W, _AP_S>& lhs, const ap_range_ref<_AP_W2, _AP_S2>& rhs) { return (lhs.operator ap_int_base<_AP_W, false>())<<( rhs.operator ap_int_base<_AP_W2, false>()); }
# 1217 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::plus operator +( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() + rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::minus operator -( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() - rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::mult operator *( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() * rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::div operator /( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() / rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::mod operator %( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() % rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator &( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() & rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator |( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() | rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::logic operator ^( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() ^ rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::arg1 operator >>( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() >> rhs.get(); }
template <int _AP_LW1, typename _AP_LT1, int _AP_LW2, typename _AP_LT2, int _AP_RW1, typename _AP_RT1, int _AP_RW2, typename _AP_RT2> inline __attribute__((always_inline)) typename ap_int_base<_AP_LW1 + _AP_LW2, false>::template RType< _AP_RW1 + _AP_RW2, false>::arg1 operator <<( const ap_concat_ref<_AP_LW1, _AP_LT1, _AP_LW2, _AP_LT2>& lhs, const ap_concat_ref<_AP_RW1, _AP_RT1, _AP_RW2, _AP_RT2>& rhs) { return lhs.get() << rhs.get(); }
# 1364 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); ret <<= 1; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 1; ret >>= 1; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); ret <<= 1; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, bool op2) { ap_int_base<1 + 1, false> val(op2); val[1] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( bool op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<1 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 1, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, bool op2) { ap_int_base<1 + _AP_W + _AP_W2, false> val(op2); ap_int_base<1 + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 1; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 1, false> operator,( bool op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<1 + _AP_W + _AP_W2, false> val(op1); ap_int_base<1 + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, bool op2) { ap_int_base<1 + _AP_W, false> val(op2); ap_int_base<1 + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= 1; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 1, false> operator,( bool op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<1 + _AP_W, false> val(op1); ap_int_base<1 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, bool op2) { ap_int_base<1 + 1, false> val(op2); val[1] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 1, false> operator,( bool op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<1 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, char op2) { ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> val(op2); ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> ret(op1); if (CHAR_IS_SIGNED) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> val(op1); ap_int_base<8 + _AP_W + _AP_W2, CHAR_IS_SIGNED> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (CHAR_IS_SIGNED) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, char op2) { ap_int_base<8 + 1, CHAR_IS_SIGNED> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, CHAR_IS_SIGNED> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, signed char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( signed char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, signed char op2) { ap_int_base<8 + _AP_W + _AP_W2, true> val(op2); ap_int_base<8 + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( signed char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, true> val(op1); ap_int_base<8 + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, signed char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( signed char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, signed char op2) { ap_int_base<8 + 1, true> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( signed char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); if (_AP_S) { ret <<= 8; ret >>= 8; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); ret <<= 8; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<8 + 1, false> operator,( unsigned char op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned char op2) { ap_int_base<8 + _AP_W + _AP_W2, false> val(op2); ap_int_base<8 + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + 8, false> operator,( unsigned char op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<8 + _AP_W + _AP_W2, false> val(op1); ap_int_base<8 + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned char op2) { ap_int_base<8 + _AP_W, false> val(op2); ap_int_base<8 + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= 8; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + 8, false> operator,( unsigned char op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + _AP_W, false> val(op1); ap_int_base<8 + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned char op2) { ap_int_base<8 + 1, false> val(op2); val[8] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + 8, false> operator,( unsigned char op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<8 + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_short; ret >>= _AP_SIZE_short; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( short op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( short op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( short op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, short op2) { ap_int_base<_AP_SIZE_short + 1, true> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( short op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_short; ret >>= _AP_SIZE_short; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); ret <<= _AP_SIZE_short; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_short + 1, false> operator,( unsigned short op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_short, false> operator,( unsigned short op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_short; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_short, false> operator,( unsigned short op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_short + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned short op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op2); val[_AP_SIZE_short] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_short, false> operator,( unsigned short op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_short + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_int; ret >>= _AP_SIZE_int; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( int op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( int op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( int op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, int op2) { ap_int_base<_AP_SIZE_int + 1, true> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( int op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_int; ret >>= _AP_SIZE_int; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); ret <<= _AP_SIZE_int; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_int + 1, false> operator,( unsigned int op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_int, false> operator,( unsigned int op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_int; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_int, false> operator,( unsigned int op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_int + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned int op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op2); val[_AP_SIZE_int] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_int, false> operator,( unsigned int op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_int + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_long; ret >>= _AP_SIZE_long; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( long op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( long op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( long op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, long op2) { ap_int_base<_AP_SIZE_long + 1, true> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( long op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_long; ret >>= _AP_SIZE_long; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); ret <<= _AP_SIZE_long; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_long + 1, false> operator,( unsigned long op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_long, false> operator,( unsigned long op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_long; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_long, false> operator,( unsigned long op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_long + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, unsigned long op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op2); val[_AP_SIZE_long] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_long, false> operator,( unsigned long op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_long + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_ap_slong; ret >>= _AP_SIZE_ap_slong; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (true) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( ap_slong op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> ret(op1); if (true) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, true> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); if (true) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_slong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, true> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( ap_slong op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, true> val(op1); val <<= 1; val[0] = op2; return val; }
template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_int_base<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_int_base<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); if (_AP_S) { ret <<= _AP_SIZE_ap_slong; ret >>= _AP_SIZE_ap_slong; } ret |= val << _AP_W; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const ap_range_ref<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); ret <<= _AP_SIZE_ap_slong; if (false) { val <<= _AP_W; val >>= _AP_W; } ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_range_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( const ap_bit_ref<_AP_W, _AP_S> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, bool _AP_S> inline __attribute__((always_inline)) ap_int_base<_AP_SIZE_ap_slong + 1, false> operator,( ap_ulong op1, const ap_bit_ref<_AP_W, _AP_S> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> ret(op1); if (false) { val <<= _AP_W + _AP_W2; val >>= _AP_W + _AP_W2; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, typename _AP_T, int _AP_W2, typename _AP_T2> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_W2 + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const ap_concat_ref<_AP_W, _AP_T, _AP_W2, _AP_T2> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W + _AP_W2, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op2); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op1); if (false) { val <<= _AP_W; val >>= _AP_W; } ret <<= _AP_SIZE_ap_slong; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<_AP_W + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> val(op1); ap_int_base<_AP_SIZE_ap_slong + _AP_W, false> ret(op2); int len = op2.length(); val <<= len; ret |= val; return ret; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op1, ap_ulong op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op2); val[_AP_SIZE_ap_slong] = op1; return val; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_int_base<1 + _AP_SIZE_ap_slong, false> operator,( ap_ulong op1, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> &op2) { ap_int_base<_AP_SIZE_ap_slong + 1, false> val(op1); val <<= 1; val[0] = op2; return val; }
# 1388 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_ref.h"
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_slong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator <<( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_ulong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() << int(rhs); }

template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned int rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, unsigned long rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_slong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
template <int _AP_W, typename _AP_T, int _AP_W1, typename _AP_T1> inline __attribute__((always_inline)) ap_uint<_AP_W + _AP_W1> operator >>( const ap_concat_ref<_AP_W, _AP_T, _AP_W1, _AP_T1> lhs, ap_ulong rhs) { return ap_uint<_AP_W + _AP_W1>(lhs).get() >> int(rhs); }
# 58 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h" 2




template <int _AP_W>
struct ap_int : ap_int_base<_AP_W, true> {
  typedef ap_int_base<_AP_W, true> Base;

  inline __attribute__((always_inline)) ap_int() : Base() {}
  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int(const ap_int<_AP_W2>& op) {
    op.checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int(const volatile ap_int<_AP_W2>& op) {
    const_cast<const ap_int<_AP_W2>& >(op).checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int(const ap_uint<_AP_W2>& op) {
    op.checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_int(const volatile ap_uint<_AP_W2>& op) {
    const_cast<const ap_uint<_AP_W2>& >(op).checkOverflowCsim(_AP_W, true);
    Base::V = op.V;
  }




  inline __attribute__((always_inline)) ap_int(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int(const ap_range_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int(const ap_bit_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_int(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref)
      : Base(ref) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_int(const ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_int(const ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_int(
      const volatile ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_int(
      const volatile ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_int(const ap_int_base<_AP_W2, _AP_S2>& op) {
    Base::V = op.V;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_int(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}





  inline __attribute__((always_inline)) ap_int(bool val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(signed char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(unsigned char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(short val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(unsigned short val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(int val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(unsigned int val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(long val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(unsigned long val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(ap_slong val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_int(ap_ulong val) { this->checkOverflowBaseC(val); Base::V = val; }

  ap_int(double val) : Base(val) {}
  ap_int(float val) : Base(val) {}
  ap_int(half val) : Base(val) {}


  inline __attribute__((always_inline)) ap_int(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) ap_int(const char* s, signed char rd) : Base(s, rd) {}




  ap_int &operator=(const ap_int<_AP_W> &op2) = default;


  inline __attribute__((always_inline)) ap_int& operator=(const volatile ap_int<_AP_W>& op2) {
    Base::V = op2.V;
    return *this;
  }


  inline __attribute__((always_inline)) void operator=(const ap_int<_AP_W>& op2) volatile {
    Base::V = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(const volatile ap_int<_AP_W>& op2) volatile {
    Base::V = op2.V;
  }

};




template <int _AP_W>
struct ap_uint : ap_int_base<_AP_W, false> {
  typedef ap_int_base<_AP_W, false> Base;

  inline __attribute__((always_inline)) ap_uint() : Base() {}
  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_uint(const ap_uint<_AP_W2>& op) {
    op.checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_uint(const ap_int<_AP_W2>& op) {
    op.checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_uint(const volatile ap_uint<_AP_W2>& op) {
    const_cast<const ap_uint<_AP_W2>& >(op).checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_uint(const volatile ap_int<_AP_W2>& op) {
    const_cast<const ap_int<_AP_W2>& >(op).checkOverflowCsim(_AP_W, false);
    Base::V = op.V;
  }




  inline __attribute__((always_inline)) ap_uint(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }



  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_uint(const ap_range_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_uint(const ap_bit_ref<_AP_W2, _AP_S2>& ref) : Base(ref) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_uint(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& ref)
      : Base(ref) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(const ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(const ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(
      const volatile ap_fixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, true, _AP_Q2, _AP_O2, _AP_N2>)op) {}

  template <int _AP_W2, int _AP_I2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2,
            int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(
      const volatile ap_ufixed<_AP_W2, _AP_I2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base((ap_fixed_base<_AP_W2, _AP_I2, false, _AP_Q2, _AP_O2, _AP_N2>)op) {
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_uint(const ap_int_base<_AP_W2, _AP_S2>& op) {
    Base::V = op.V;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_uint(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}





  inline __attribute__((always_inline)) ap_uint(bool val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(signed char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(unsigned char val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(short val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(unsigned short val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(int val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(unsigned int val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(long val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(unsigned long val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(ap_slong val) { this->checkOverflowBaseC(val); Base::V = val; }
  inline __attribute__((always_inline)) ap_uint(ap_ulong val) { this->checkOverflowBaseC(val); Base::V = val; }

  ap_uint(double val) : Base(val) {}
  ap_uint(float val) : Base(val) {}
  ap_uint(half val) : Base(val) {}


  inline __attribute__((always_inline)) ap_uint(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) ap_uint(const char* s, signed char rd) : Base(s, rd) {}




  ap_uint &operator=(const ap_uint<_AP_W> &op2) = default;


  inline __attribute__((always_inline)) ap_uint& operator=(const volatile ap_uint<_AP_W>& op2) {
    Base::V = op2.V;
    return *this;
  }


  inline __attribute__((always_inline)) void operator=(const ap_uint<_AP_W>& op2) volatile {
    Base::V = op2.V;
  }

  inline __attribute__((always_inline)) void operator=(const volatile ap_uint<_AP_W>& op2) volatile {
    Base::V = op2.V;
  }

};
# 372 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_special.h" 1
# 61 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_special.h"
namespace std {
template<typename _Tp> class complex;
}







namespace std {
# 89 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_special.h"
template <int _AP_W>
class complex<ap_int<_AP_W> > {
 public:
  typedef ap_int<_AP_W> _Tp;
  typedef _Tp value_type;




  complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const _Tp& real() const { return _M_real; }
  const _Tp& imag() const { return _M_imag; }







  void real(_Tp __val) { _M_real = __val; }

  void imag(_Tp __val) { _M_imag = __val; }



  complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  complex<_Tp> &operator=(const complex<_Up> &__z) {
    _M_real = __z.real();
    _M_imag = __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 222 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int_special.h"
template <int _AP_W>
inline bool operator==(const complex<ap_int<_AP_W> > &__x, const ap_int<_AP_W> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W>
inline bool operator==(const ap_int<_AP_W> &__x, const complex<ap_int<_AP_W> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W>
inline bool operator!=(const complex<ap_int<_AP_W> > &__x, const ap_int<_AP_W> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W>
inline bool operator!=(const ap_int<_AP_W> &__x, const complex<ap_int<_AP_W> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}

}
# 373 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_int.h" 2
# 63 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h" 2
# 133 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W2, int _AP_I2, bool _AP_S2>
struct _ap_fixed_factory;
template <int _AP_W2, int _AP_I2>
struct _ap_fixed_factory<_AP_W2, _AP_I2, true> {
  typedef ap_fixed<_AP_W2, _AP_I2> type;
};
template <int _AP_W2, int _AP_I2>
struct _ap_fixed_factory<_AP_W2, _AP_I2, false> {
  typedef ap_ufixed<_AP_W2, _AP_I2> type;
};
# 154 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct ap_fixed_base : ssdm_int<_AP_W, _AP_S> {
 public:
  typedef ssdm_int<_AP_W, _AP_S> Base;
  static const int width = _AP_W;
  static const int iwidth = _AP_I;
  static const ap_q_mode qmode = _AP_Q;
  static const ap_o_mode omode = _AP_O;


  template <int _AP_W2, int _AP_I2, bool _AP_S2>
  struct RType {
    enum {
      _AP_F = _AP_W - _AP_I,
      F2 = _AP_W2 - _AP_I2,
      mult_w = _AP_W + _AP_W2,
      mult_i = _AP_I + _AP_I2,
      mult_s = _AP_S || _AP_S2,
      plus_w = ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) +
               1 + ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      plus_i =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1,
      plus_s = _AP_S || _AP_S2,
      minus_w =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1 +
          ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      minus_i =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) + 1,
      minus_s = true,

      div_w = _AP_S2 + _AP_W + ((F2) > (0) ? (F2) : (0)),



      div_i = _AP_S2 + _AP_I + F2,
      div_s = _AP_S || _AP_S2,
      logic_w =
          ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))) +
          ((_AP_F) > (F2) ? (_AP_F) : (F2)),
      logic_i = ((_AP_I + (_AP_S2 && !_AP_S)) > (_AP_I2 + (_AP_S && !_AP_S2)) ? (_AP_I + (_AP_S2 && !_AP_S)) : (_AP_I2 + (_AP_S && !_AP_S2))),
      logic_s = _AP_S || _AP_S2
    };

    typedef ap_fixed_base<_AP_W, _AP_I, _AP_S> lhs;
    typedef ap_fixed_base<_AP_W2, _AP_I2, _AP_S2> rhs;

    typedef ap_fixed_base<mult_w, mult_i, mult_s> mult_base;
    typedef ap_fixed_base<plus_w, plus_i, plus_s> plus_base;
    typedef ap_fixed_base<minus_w, minus_i, minus_s> minus_base;
    typedef ap_fixed_base<logic_w, logic_i, logic_s> logic_base;
    typedef ap_fixed_base<div_w, div_i, div_s> div_base;
    typedef ap_fixed_base<_AP_W, _AP_I, _AP_S> arg1_base;

    typedef typename _ap_fixed_factory<mult_w, mult_i, mult_s>::type mult;
    typedef typename _ap_fixed_factory<plus_w, plus_i, plus_s>::type plus;
    typedef typename _ap_fixed_factory<minus_w, minus_i, minus_s>::type minus;
    typedef typename _ap_fixed_factory<logic_w, logic_i, logic_s>::type logic;
    typedef typename _ap_fixed_factory<div_w, div_i, div_s>::type div;
    typedef typename _ap_fixed_factory<_AP_W, _AP_I, _AP_S>::type arg1;
  };

 private:
# 333 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) void report() {}




  inline __attribute__((always_inline)) void overflow_adjust(bool underflow, bool overflow, bool lD,
                              bool sign) {
    if (!underflow && !overflow) return;
    if (_AP_O == AP_WRAP) {
      if (_AP_N == 0) return;
      if (_AP_S) {


        Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(sign) __Repl2__ = !!sign; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
        if (_AP_N > 1) {

          ap_int_base<_AP_W, false> mask(-1);
          if (sign) mask.V = 0;
          Base::V =
              ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 2); __Result__; });
        }
      } else {

        ap_int_base<_AP_W, false> mask(-1);
        Base::V =
            ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 1); __Result__; });
      }
    } else if (_AP_O == AP_SAT_ZERO) {
      Base::V = 0;
    } else if (_AP_O == AP_WRAP_SM && _AP_S) {
      bool Ro = ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
      if (_AP_N == 0) {
        if (lD != Ro) {
          Base::V = ~Base::V;
          Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(lD) __Repl2__ = !!lD; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
        }
      } else {
        if (_AP_N == 1 && sign != Ro) {
          Base::V = ~Base::V;
        } else if (_AP_N > 1) {
          bool lNo = ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - _AP_N); __Result__; });
          if (lNo == sign) Base::V = ~Base::V;
          ap_int_base<_AP_W, false> mask(-1);
          if (sign) mask.V = 0;
          Base::V =
              ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(mask.V) __Repl2__ = mask.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - _AP_N, _AP_W - 2); __Result__; });
        }
        Base::V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; typeof(sign) __Repl2__ = !!sign; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), _AP_W - 1, _AP_W - 1); __Result__; });
      }
    } else {
      if (_AP_S) {
        if (overflow) {
          Base::V = 1;
          Base::V <<= _AP_W - 1;
          Base::V = ~Base::V;
        } else if (underflow) {
          Base::V = 1;
          Base::V <<= _AP_W - 1;
          if (_AP_O == AP_SAT_SYM) Base::V |= 1;
        }
      } else {
        if (overflow)
          Base::V = ~(ap_int_base<_AP_W, false>(0).V);
        else if (underflow)
          Base::V = 0;
      }
    }
  }

  inline __attribute__((always_inline)) bool quantization_adjust(bool qb, bool r, bool s) {
    bool carry = (bool)({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    if (_AP_Q == AP_TRN) return false;
    if (_AP_Q == AP_RND_ZERO)
      qb &= s || r;
    else if (_AP_Q == AP_RND_MIN_INF)
      qb &= r;
    else if (_AP_Q == AP_RND_INF)
      qb &= !s || r;
    else if (_AP_Q == AP_RND_CONV)
      qb &= ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 0); __Result__; }) || r;
    else if (_AP_Q == AP_TRN_ZERO)
      qb = s && (qb || r);
    Base::V += qb;
    return carry && (!(bool)({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }));
  }


  inline __attribute__((always_inline)) int countLeadingOnes() const {




    return 0;

  }

 public:



  inline __attribute__((always_inline)) ap_fixed_base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    operator=(op);
    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    operator=(op);
    report();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const ap_int_base<_AP_W2, _AP_S2>& op) {
    ap_fixed_base<_AP_W2, _AP_W2, _AP_S2> tmp;
    tmp.V = op.V;
    operator=(tmp);
    report();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const volatile ap_int_base<_AP_W2, _AP_S2>& op) {
    ap_fixed_base<_AP_W2, _AP_W2, _AP_S2> tmp;
    tmp.V = op.V;
    operator=(tmp);
    report();
  }
# 486 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) ap_fixed_base(const char* s) {
    typeof(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), 10, _AP_I, _AP_S, _AP_Q,
                      _AP_O, _AP_N, true);
    Base::V = t;
  }
  inline __attribute__((always_inline)) ap_fixed_base(const char* s, signed char rd) {
    typeof(Base::V) t;
    _ssdm_string2bits((void*)(&t), (const char*)(s), rd, _AP_I, _AP_S, _AP_Q,
                      _AP_O, _AP_N, true);
    Base::V = t;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const ap_bit_ref<_AP_W2, _AP_S2>& op) {
    *this = ((bool)op);
    report();
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base(const ap_range_ref<_AP_W2, _AP_S2>& op) {
    *this = (ap_int_base<_AP_W2, false>(op));
    report();
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_fixed_base(
      const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op) {
    *this = (ap_int_base<_AP_W2 + _AP_W3, false>(op));
    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    *this = (bool(op));
    report();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    *this = (ap_int_base<_AP_W2, false>(op));
    report();
  }
# 544 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) ap_fixed_base(const bool x) { ap_fixed_base<(1), (1), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const char x) { ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const signed char x) { ap_fixed_base<(8), (8), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned char x) { ap_fixed_base<(8), (8), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const short x) { ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned short x) { ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const int x) { ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned int x) { ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const long x) { ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const unsigned long x) { ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const ap_slong x) { ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)> tmp; tmp.V = x; *this = tmp; }
  inline __attribute__((always_inline)) ap_fixed_base(const ap_ulong x) { ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)> tmp; tmp.V = x; *this = tmp; }







          ap_fixed_base(double d) {
    ap_int_base<64, false> ireg;
    ireg.V = doubleToRawBits(d);
    bool isneg = ({ typeof(ireg.V) __Val2__ = ireg.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 63); __Result__; });

    ap_int_base<11 + 1, true> exp;
    ap_int_base<11, false> exp_tmp;
    exp_tmp.V =
        ({ typename _ap_type::remove_const<typeof(ireg.V)>::type __Result__ = 0; typeof(ireg.V) __Val2__ = ireg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 52, 52 + 11 - 1); __Result__; });
    exp = exp_tmp - ((1L << (11 - 1L)) - 1L);
    ap_int_base<52 + 2, true> man;
    man.V = ({ typename _ap_type::remove_const<typeof(ireg.V)>::type __Result__ = 0; typeof(ireg.V) __Val2__ = ireg.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, 52 - 1); __Result__; });

    (static_cast<void>(0));

    man.V = ({ typename _ap_type::remove_const<typeof(man.V)>::type __Result__ = 0; typeof(man.V) __Val2__ = man.V; typeof(1) __Repl2__ = !!1; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52); __Result__; });
    if (isneg) man = -man;
    if ((ireg.V & 0x7fffffffffffffffLL) == 0) {
      Base::V = 0;
    } else {
      int _AP_W2 = 52 + 2, _AP_I2 = exp.V + 2, _AP_F = _AP_W - _AP_I,
          F2 = _AP_W2 - _AP_I2;
      bool _AP_S2 = true,
           QUAN_INC = F2 > _AP_F &&
                      !(_AP_Q == AP_TRN || (_AP_Q == AP_TRN_ZERO && !_AP_S2));
      bool carry = false;

      unsigned sh_amt = (F2 > _AP_F) ? F2 - _AP_F : _AP_F - F2;
      if (F2 == _AP_F)
        Base::V = man.V;
      else if (F2 > _AP_F) {
        if (sh_amt < 52 + 2)
          Base::V = man.V >> sh_amt;
        else {
          Base::V = isneg ? -1 : 0;
        }
        if ((_AP_Q != AP_TRN) && !((_AP_Q == AP_TRN_ZERO) && !_AP_S2)) {
          bool qb = (F2 - _AP_F > _AP_W2) ? isneg : (bool)({ typeof(man.V) __Val2__ = man.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), F2 - _AP_F - 1); __Result__; });

          bool r =
              (F2 > _AP_F + 1)
                  ? ({ typename _ap_type::remove_const<typeof(man.V)>::type __Result__ = 0; typeof(man.V) __Val2__ = man.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, (F2 - _AP_F - 2 < _AP_W2) ? (F2 - _AP_F - 2) : (_AP_W2 - 1)); __Result__; }) != 0


                  : false;
          carry = quantization_adjust(qb, r, isneg);
        }
      } else {
        Base::V = man.V;
        if (sh_amt < _AP_W)
          Base::V = Base::V << sh_amt;
        else
          Base::V = 0;
      }

      if ((_AP_O != AP_WRAP || _AP_N != 0) &&
          ((!_AP_S && _AP_S2) ||
           _AP_I - _AP_S <
               _AP_I2 - _AP_S2 +
                   (QUAN_INC ||
                    (_AP_S2 && (_AP_O == AP_SAT_SYM))))) {
        bool deleted_zeros = _AP_S2 ? true : !carry, deleted_ones = true;
        bool neg_src = isneg;
        bool lD = false;
        int pos1 = F2 - _AP_F + _AP_W;
        int pos2 = F2 - _AP_F + _AP_W + 1;
        bool newsignbit = ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
        if (pos1 < _AP_W2 && pos1 >= 0)

          lD = (man.V >> pos1) & 1;
        if (pos1 < _AP_W2) {
          bool Range1_all_ones = true;
          bool Range1_all_zeros = true;
          bool Range2_all_ones = true;
          ap_int_base<52 + 2, false> Range2;
          ap_int_base<52 + 2, false> all_ones(-1);

          if (pos2 >= 0 && pos2 < _AP_W2) {


            Range2.V = man.V;
            Range2.V >>= pos2;
            Range2_all_ones = Range2 == (all_ones >> pos2);
          } else if (pos2 < 0)
            Range2_all_ones = false;
          if (pos1 >= 0 && pos2 < _AP_W2) {
            Range1_all_ones = Range2_all_ones && lD;
            Range1_all_zeros = !Range2.V && !lD;
          } else if (pos2 == _AP_W2) {
            Range1_all_ones = lD;
            Range1_all_zeros = !lD;
          } else if (pos1 < 0) {
            Range1_all_zeros = !man.V;
            Range1_all_ones = false;
          }

          deleted_zeros =
              deleted_zeros && (carry ? Range1_all_ones : Range1_all_zeros);
          deleted_ones =
              carry ? Range2_all_ones && (pos1 < 0 || !lD) : Range1_all_ones;
          neg_src = isneg && !(carry && Range1_all_ones);
        } else
          neg_src = isneg && newsignbit;
        bool neg_trg = _AP_S && newsignbit;
        bool overflow = (neg_trg || !deleted_zeros) && !isneg;
        bool underflow = (!neg_trg || !deleted_ones) && neg_src;
        if ((_AP_O == AP_SAT_SYM) && _AP_S2 && _AP_S)
          underflow |=
              neg_src &&
              (_AP_W > 1 ? ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 2); __Result__; }) == 0
                         : true);
        overflow_adjust(underflow, overflow, lD, neg_src);
      }
    }
    report();
  }


  inline __attribute__((always_inline)) ap_fixed_base(float d) { *this = ap_fixed_base(double(d)); }


  inline __attribute__((always_inline)) ap_fixed_base(half d) { *this = ap_fixed_base(double(d)); }
# 697 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {

    const int _AP_F = _AP_W - _AP_I;
    const int F2 = _AP_W2 - _AP_I2;
    const int QUAN_INC =
          F2 > _AP_F && !(_AP_Q == AP_TRN || (_AP_Q == AP_TRN_ZERO && !_AP_S2));

    if (!op) Base::V = 0;
    bool carry = false;
    bool signbit = ({ typeof(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W2 - 1); __Result__; });
    bool isneg = signbit && _AP_S2;
    if (F2 == _AP_F)
      Base::V = op.V;
    else if (F2 > _AP_F) {
      unsigned int sh_amt = F2 - _AP_F;

      if (sh_amt < _AP_W2) {
        Base::V = op.V >> sh_amt;
      } else {
        Base::V = isneg ? -1 : 0;
      }
      if (_AP_Q != AP_TRN && !(_AP_Q == AP_TRN_ZERO && !_AP_S2)) {
        bool qbit = ({ typeof(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), F2 - _AP_F - 1); __Result__; });

        bool qb = (F2 - _AP_F > _AP_W2) ? _AP_S2 && signbit : qbit;
        enum { hi = ((F2 - _AP_F - 2) < _AP_W2) ? (F2 - _AP_F - 2) : (_AP_W2 - 1) };

        bool r = (F2 > _AP_F + 1) ? (({ typename _ap_type::remove_const<typeof(op.V)>::type __Result__ = 0; typeof(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, hi); __Result__; }) != 0) : false;
        carry = quantization_adjust(qb, r, isneg);
      }
    } else {
      unsigned sh_amt = _AP_F - F2;

      if (sh_amt < _AP_W) {
        if (_AP_W > _AP_W2) {

          Base::V = op.V;
          Base::V <<= sh_amt;
        } else {

          Base::V = op.V << sh_amt;
        }
      } else {
        Base::V = 0;
      }
    }

    if ((_AP_O != AP_WRAP || _AP_N != 0) &&
        ((!_AP_S && _AP_S2) ||
         _AP_I - _AP_S <
             _AP_I2 - _AP_S2 +
                 (QUAN_INC || (_AP_S2 && _AP_O == AP_SAT_SYM)))) {
      bool deleted_zeros = _AP_S2 ? true : !carry;
      bool deleted_ones = true;
      bool neg_src = isneg;
      bool newsignbit = ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
      enum { pos1 = F2 - _AP_F + _AP_W, pos2 = F2 - _AP_F + _AP_W + 1 };
      bool lD = (pos1 < _AP_W2 && pos1 >= 0) ? ({ typeof(op.V) __Val2__ = op.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), pos1); __Result__; })
                                             : false;
      if (pos1 < _AP_W2) {
        bool Range1_all_ones = true;
        bool Range1_all_zeros = true;
        bool Range2_all_ones = true;
        ap_int_base<_AP_W2, false> all_ones(-1);

        if (pos2 < _AP_W2 && pos2 >= 0) {
          ap_int_base<_AP_W2, false> Range2;
          Range2.V = ({ typename _ap_type::remove_const<typeof(op.V)>::type __Result__ = 0; typeof(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), pos2, _AP_W2 - 1); __Result__; });
          Range2_all_ones = Range2 == (all_ones >> pos2);
        } else if (pos2 < 0) {
          Range2_all_ones = false;
        }

        if (pos1 >= 0 && pos2 < _AP_W2) {
          ap_int_base<_AP_W2, false> Range1;
          Range1.V = ({ typename _ap_type::remove_const<typeof(op.V)>::type __Result__ = 0; typeof(op.V) __Val2__ = op.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), pos1, _AP_W2 - 1); __Result__; });
          Range1_all_ones = Range1 == (all_ones >> pos1);
          Range1_all_zeros = !Range1.V;
        } else if (pos2 == _AP_W2) {
          Range1_all_ones = lD;
          Range1_all_zeros = !lD;
        } else if (pos1 < 0) {
          Range1_all_zeros = !op.V;
          Range1_all_ones = false;
        }

        deleted_zeros =
            deleted_zeros && (carry ? Range1_all_ones : Range1_all_zeros);
        deleted_ones =
            carry ? Range2_all_ones && (pos1 < 0 || !lD) : Range1_all_ones;
        neg_src = isneg && !(carry && Range1_all_ones);
      } else
        neg_src = isneg && newsignbit;
      bool neg_trg = _AP_S && newsignbit;
      bool overflow = (neg_trg || !deleted_zeros) && !isneg;
      bool underflow = (!neg_trg || !deleted_ones) && neg_src;
      if ((_AP_O == AP_SAT_SYM) && _AP_S2 && _AP_S)
        underflow |=
            neg_src &&
            (_AP_W > 1 ? ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 2); __Result__; }) == 0
                       : true);

      overflow_adjust(underflow, overflow, lD, neg_src);
    }
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base& operator=(
      const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    operator=(const_cast<const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(op));
    return *this;
  }


  inline __attribute__((always_inline)) ap_fixed_base& setBits(ap_ulong bv) {

    Base::V = bv;
    return *this;
  }


  static inline __attribute__((always_inline)) ap_fixed_base bitsToFixed(ap_ulong bv) {

    ap_fixed_base t;

    t.V = bv;



    return t;
  }

  inline __attribute__((always_inline)) void checkOverflowCsimFix(int _ap_w2, bool _ap_s2) const {
# 870 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
      (void)_ap_w2;
      (void)_ap_s2;

      return;
  }





  inline __attribute__((always_inline)) ap_int_base<((_AP_I) > (1) ? (_AP_I) : (1)), _AP_S> to_ap_int_base(
      bool Cnative = true) const {
    ap_int_base<((_AP_I) > (1) ? (_AP_I) : (1)), _AP_S> ret;
    if (_AP_I == 0) {
      ret.V = 0;
    } else if (_AP_I > 0 && _AP_I <= _AP_W) {
      ret.V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), _AP_W - _AP_I, _AP_W - 1); __Result__; });
    } else if (_AP_I > _AP_W) {
      ret.V = ({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_W - 1); __Result__; });
      ret.V <<= (_AP_I - _AP_W);
    }
# 899 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
    if (Cnative && _AP_I < _AP_W) {

      if (_AP_S && ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; }) && (_AP_I < _AP_W) &&
          (({ typename _ap_type::remove_const<typeof(Base::V)>::type __Result__ = 0; typeof(Base::V) __Val2__ = Base::V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, _AP_I < 0 ? _AP_W - 1 : _AP_W - _AP_I - 1); __Result__; }) != 0))

        ++ret;
    } else {

    }
    return ret;
  };

 public:
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) operator ap_int_base<_AP_W2, _AP_S2>() const {
    return ap_int_base<_AP_W2, _AP_S2>(to_ap_int_base());
  }


  inline __attribute__((always_inline)) char to_char() const { return to_ap_int_base().to_char(); }

  inline __attribute__((always_inline)) int to_int() const { return to_ap_int_base().to_int(); }

  inline __attribute__((always_inline)) unsigned to_uint() const { return to_ap_int_base().to_uint(); }

  inline __attribute__((always_inline)) ap_slong to_int64() const { return to_ap_int_base().to_int64(); }

  inline __attribute__((always_inline)) ap_ulong to_uint64() const { return to_ap_int_base().to_uint64(); }

  inline __attribute__((always_inline)) ap_int<_AP_I> to_ap_int() const { return ap_int<_AP_I>(to_ap_int_base()); }



  inline __attribute__((always_inline)) double to_double() const {




    enum { BITS = 52 + 11 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp;
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (11 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 52;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<typeof(tmp.V)>::type __Result__ = 0; typeof(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ typeof(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    ap_ulong m;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (ap_ulong)(tmp.V >> (lsb_index - 1))
                           : (ap_ulong)(tmp.V << (1 - lsb_index));
    } else {
      m = (ap_ulong)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;


    if (({ typeof(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 52 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });

    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 52, 52 + 11 - 1); __Result__; });


    return rawBitsToDouble(m);
  }



  inline __attribute__((always_inline)) float to_float() const {




    enum { BITS = 23 + 8 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp;
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (8 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 23;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<typeof(tmp.V)>::type __Result__ = 0; typeof(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ typeof(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    unsigned long m;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (unsigned long)(tmp.V >> (lsb_index - 1))
                           : (unsigned long)(tmp.V << (1 - lsb_index));
    } else {
      m = (unsigned long)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;

    if (({ typeof(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 23 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });
    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 23, 23 + 8 - 1); __Result__; });

    return rawBitsToFloat(m);
  }



  inline __attribute__((always_inline)) half to_half() const {




    enum { BITS = 10 + 5 + 1 };
    if (!Base::V) return 0.0f;
    bool s = _AP_S && ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; });
    ap_int_base<_AP_W, false> tmp;
    if (s)
      tmp.V = -Base::V;
    else
      tmp.V = Base::V;
    int l = tmp.countLeadingZeros();
    int e = _AP_I - l - 1 + ((1L << (5 - 1L)) - 1L);
    int lsb_index = _AP_W - l - 1 - 10;

    bool a = (lsb_index >=2) ?
        (({ typename _ap_type::remove_const<typeof(tmp.V)>::type __Result__ = 0; typeof(tmp.V) __Val2__ = tmp.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), 0, lsb_index - 2); __Result__; }) != 0) : 0;

    a |= (lsb_index >=0) ? ({ typeof(tmp.V) __Val2__ = tmp.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), lsb_index); __Result__; }) : 0;

    unsigned short m;

    if (_AP_W > BITS) {
      m = (lsb_index >= 1) ? (unsigned short)(tmp.V >> (lsb_index - 1))
                           : (unsigned short)(tmp.V << (1 - lsb_index));
    } else {
      m = (unsigned short)tmp.V;
      m = (lsb_index >= 1) ? (m >> (lsb_index - 1))
                           : (m << (1 - lsb_index));
    }
    m += a;
    m >>= 1;

    if (({ typeof(m) __Val2__ = m; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), 10 + 1); __Result__; })) {
      e += 1;
    }

    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(s) __Repl2__ = !!s; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), BITS - 1, BITS - 1); __Result__; });
    m = ({ typename _ap_type::remove_const<typeof(m)>::type __Result__ = 0; typeof(m) __Val2__ = m; typeof(e) __Repl2__ = e; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), 10, 10 + 5 - 1); __Result__; });

    return rawBitsToHalf(m);
  }


  inline __attribute__((always_inline)) operator long double() const { return (long double)to_double(); }

  inline __attribute__((always_inline)) operator double() const { return to_double(); }

  inline __attribute__((always_inline)) operator float() const { return to_float(); }

  inline __attribute__((always_inline)) operator half() const { return to_half(); }

  inline __attribute__((always_inline)) operator bool() const { return (bool)Base::V != 0; }

  inline __attribute__((always_inline)) operator char() const { return (char)to_int(); }

  inline __attribute__((always_inline)) operator signed char() const { return (signed char)to_int(); }

  inline __attribute__((always_inline)) operator unsigned char() const { return (unsigned char)to_uint(); }

  inline __attribute__((always_inline)) operator short() const { return (short)to_int(); }

  inline __attribute__((always_inline)) operator unsigned short() const { return (unsigned short)to_uint(); }

  inline __attribute__((always_inline)) operator int() const { return to_int(); }

  inline __attribute__((always_inline)) operator unsigned int() const { return to_uint(); }



  inline __attribute__((always_inline)) operator long() const { return (long)to_int64(); }

  inline __attribute__((always_inline)) operator unsigned long() const { return (unsigned long)to_uint64(); }






  inline __attribute__((always_inline)) operator ap_ulong() const { return to_uint64(); }

  inline __attribute__((always_inline)) operator ap_slong() const { return to_int64(); }

  inline __attribute__((always_inline)) int length() const { return _AP_W; };
# 1127 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) int countLeadingZeros() const {


    if (_AP_W <= 32) {
      ap_int_base<32, false> t(-1ULL);
      t.range(_AP_W - 1, 0) = this->range(0, _AP_W - 1);
      return __builtin_ctz(t.V);
    } else if (_AP_W <= 64) {
      ap_int_base<64, false> t(-1ULL);
      t.range(_AP_W - 1, 0) = this->range(0, _AP_W - 1);
      return __builtin_ctzll(t.V);
    } else {
      enum {__N = (_AP_W + 63) / 64};
      int NZeros = 0;
      int i = 0;
      bool hitNonZero = false;
      VITIS_LOOP_1143_1: for (i = 0; i < __N - 1; ++i) {
        ap_int_base<64, false> t;
        t.range(0, 63) = this->range(_AP_W - i * 64 - 64, _AP_W - i * 64 - 1);
        NZeros += hitNonZero ? 0 : __builtin_clzll(t.V);
        hitNonZero |= (t != 0);
      }
      if (!hitNonZero) {
        ap_int_base<64, false> t(-1ULL);
        t.range(63 - (_AP_W - 1) % 64, 63) = this->range(0, (_AP_W - 1) % 64);
        NZeros += __builtin_clzll(t.V);
      }
      return NZeros;
    }



  }



  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::mult operator*(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2)
      const {
    typename RType<_AP_W2, _AP_I2, _AP_S2>::mult_base r, t;
    r.V = Base::V;
    t.V = op2.V;
    r.V *= op2.V;
    return r;
  }



  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::div operator/(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2)
      const {
    typename RType<_AP_W2, _AP_I2, _AP_S2>::div_base r;
# 1197 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
        ap_fixed_base<_AP_W + ((_AP_W2 - _AP_I2) > (0) ? (_AP_W2 - _AP_I2) : (0)),_AP_I, _AP_S> t(*this);



        r.V = t.V / op2.V;
# 1230 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }
# 1245 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::plus operator +( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::plus_base ret, lhs(*this), rhs(op2); ret.V = lhs.V + rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::minus operator -( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::minus_base ret, lhs(*this), rhs(op2); ret.V = lhs.V - rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator &( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret, lhs(*this), rhs(op2); ret.V = lhs.V & rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator |( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret, lhs(*this), rhs(op2); ret.V = lhs.V | rhs.V; return ret; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) typename RType<_AP_W2, _AP_I2, _AP_S2>::logic operator ^( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { typename RType<_AP_W2, _AP_I2, _AP_S2>::logic_base ret, lhs(*this), rhs(op2); ret.V = lhs.V ^ rhs.V; return ret; }
# 1263 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator *=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator *(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator /=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator /(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator +=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator +(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator -=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator -(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator &=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator &(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator |=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator |(op2); return *this; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) ap_fixed_base& operator ^=( const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) { *this = operator ^(op2); return *this; }





  inline __attribute__((always_inline)) ap_fixed_base& operator++() {
    operator+=(ap_fixed_base<_AP_W - _AP_I + 1, 1, false>(1));
    return *this;
  }


  inline __attribute__((always_inline)) ap_fixed_base& operator--() {
    operator-=(ap_fixed_base<_AP_W - _AP_I + 1, 1, false>(1));
    return *this;
  }


  inline __attribute__((always_inline)) const ap_fixed_base operator++(int) {
    ap_fixed_base r(*this);
    operator++();
    return r;
  }


  inline __attribute__((always_inline)) const ap_fixed_base operator--(int) {
    ap_fixed_base r(*this);
    operator--();
    return r;
  }



  inline __attribute__((always_inline)) ap_fixed_base operator+() { return *this; }

  inline __attribute__((always_inline)) ap_fixed_base<_AP_W + 1, _AP_I + 1, true> operator-() const {
    ap_fixed_base<_AP_W + 1, _AP_I + 1, true> r(*this);
    r.V = -r.V;
    return r;
  }

  inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> getNeg() {
    ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> r(*this);
    r.V = -r.V;
    return r;
  }



  inline __attribute__((always_inline)) bool operator!() const { return Base::V == 0; }




  inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S> operator~() const {
    ap_fixed_base<_AP_W, _AP_I, _AP_S> r;
    r.V = ~Base::V;
    return r;
  }




  template <int _AP_SHIFT>
  inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I + _AP_SHIFT, _AP_S> lshift() const {
    ap_fixed_base<_AP_W, _AP_I + _AP_SHIFT, _AP_S> r;
    r.V = Base::V;
    return r;
  }

  template <int _AP_SHIFT>
  inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I - _AP_SHIFT, _AP_S> rshift() const {
    ap_fixed_base<_AP_W, _AP_I - _AP_SHIFT, _AP_S> r;
    r.V = Base::V;
    return r;
  }





  inline __attribute__((always_inline)) ap_fixed_base operator<<(unsigned int sh) const {
    ap_fixed_base r;
    r.V = Base::V << sh;
# 1381 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }

  inline __attribute__((always_inline)) ap_fixed_base operator>>(unsigned int sh) const {
    ap_fixed_base r;
    r.V = Base::V >> sh;
# 1403 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
    return r;
  }


  inline __attribute__((always_inline)) ap_fixed_base operator<<(int sh) const {
    ap_fixed_base r;
    bool isNeg = sh < 0;
    unsigned int ush = isNeg ? -sh : sh;
    if (isNeg) {
      return operator>>(ush);
    } else {
      return operator<<(ush);
    }
  }

  inline __attribute__((always_inline)) ap_fixed_base operator>>(int sh) const {
    bool isNeg = sh < 0;
    unsigned int ush = isNeg ? -sh : sh;
    if (isNeg) {
      return operator<<(ush);
    } else {
      return operator>>(ush);
    }
  }


  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_fixed_base operator<<(const ap_int_base<_AP_W2, true>& op2) const {


    int sh = op2.to_int();
    return operator<<(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_fixed_base operator>>(const ap_int_base<_AP_W2, true>& op2) const {
    int sh = op2.to_int();
    return operator>>(sh);
  }


  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_fixed_base operator<<(const ap_int_base<_AP_W2, false>& op2) const {
    unsigned int sh = op2.to_uint();
    return operator<<(sh);
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) ap_fixed_base operator>>(const ap_int_base<_AP_W2, false>& op2) const {
    unsigned int sh = op2.to_uint();
    return operator>>(sh);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base operator<<(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          op2) {
    return operator<<(op2.to_ap_int_base());
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base operator>>(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          op2) {
    return operator>>(op2.to_ap_int_base());
  }





  inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const int sh) {
    *this = operator<<(sh);
    return *this;
  }

  inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const unsigned int sh) {
    *this = operator<<(sh);
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base& operator<<=(const ap_int_base<_AP_W2, _AP_S2>& sh) {
    *this = operator<<(sh.to_int());
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base& operator<<=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          sh) {
    *this = operator<<(sh.to_int());
    return *this;
  }


  inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const int sh) {
    *this = operator>>(sh);
    return *this;
  }

  inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const unsigned int sh) {
    *this = operator>>(sh);
    return *this;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed_base& operator>>=(const ap_int_base<_AP_W2, _AP_S2>& sh) {
    *this = operator>>(sh.to_int());
    return *this;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed_base& operator>>=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          sh) {
    *this = operator>>(sh.to_int());
    return *this;
  }
# 1547 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator >(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V > op2.V; else if (_AP_F > F2) return Base::V > ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V > op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator <(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V < op2.V; else if (_AP_F > F2) return Base::V < ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V < op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator >=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V >= op2.V; else if (_AP_F > F2) return Base::V >= ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V >= op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator <=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V <= op2.V; else if (_AP_F > F2) return Base::V <= ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V <= op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator ==(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V == op2.V; else if (_AP_F > F2) return Base::V == ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V == op2.V; return false; }
  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2, ap_o_mode _AP_O2, int _AP_N2> inline __attribute__((always_inline)) bool operator !=(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) const { enum { _AP_F = _AP_W - _AP_I, F2 = _AP_W2 - _AP_I2 }; if (_AP_F == F2) return Base::V != op2.V; else if (_AP_F > F2) return Base::V != ap_fixed_base<((_AP_W2 + _AP_F - F2) > (1) ? (_AP_W2 + _AP_F - F2) : (1)), _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>(op2).V; else return ap_fixed_base<((_AP_W + F2 - _AP_F + 1) > (1) ? (_AP_W + F2 - _AP_F + 1) : (1)), _AP_I + 1, _AP_S, _AP_Q, _AP_O, _AP_N>(*this).V != op2.V; return false; }





  inline __attribute__((always_inline)) bool operator >(double d) const { return to_double() > d; }
  inline __attribute__((always_inline)) bool operator <(double d) const { return to_double() < d; }
  inline __attribute__((always_inline)) bool operator >=(double d) const { return to_double() >= d; }
  inline __attribute__((always_inline)) bool operator <=(double d) const { return to_double() <= d; }
  inline __attribute__((always_inline)) bool operator ==(double d) const { return to_double() == d; }
  inline __attribute__((always_inline)) bool operator !=(double d) const { return to_double() != d; }


  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator[](
      unsigned index) {
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, index);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator[](
      const ap_int_base<_AP_W2, _AP_S2>& index) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this,
                                                                index.to_int());
  }

  inline __attribute__((always_inline)) bool operator[](unsigned index) const {
    (static_cast<void>(0));
    return ({ typeof(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index); __Result__; });
  }

  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> bit(
      unsigned index) {
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, index);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> bit(
      const ap_int_base<_AP_W2, _AP_S2>& index) {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this,
                                                                index.to_int());
  }

  inline __attribute__((always_inline)) bool bit(unsigned index) const {
    (static_cast<void>(0));
    return ({ typeof(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index); __Result__; });
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> get_bit(
      const ap_int_base<_AP_W2, true>& index) {
    (static_cast<void>(0));

    (static_cast<void>(0));
    return af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(
        this, index.to_int() + _AP_W - _AP_I);
  }

  inline __attribute__((always_inline)) bool get_bit(int index) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ({ typeof(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index + _AP_W - _AP_I); __Result__; });

  }
# 1633 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  template <int _AP_W2>
  inline __attribute__((always_inline)) bool get_bit(const ap_int_base<_AP_W2, true>& index) const {
    (static_cast<void>(0));
    (static_cast<void>(0));
    return ({ typeof(const_cast<ap_fixed_base*>(this)->V) __Val2__ = const_cast<ap_fixed_base*>(this)->V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), index.to_int() + _AP_W - _AP_I); __Result__; });

  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(int Hi,
                                                                      int Lo) {
    (static_cast<void>(0));
    return af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(this, Hi, Lo);
  }


  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      int Hi, int Lo) const {
    (static_cast<void>(0));
    return af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>(
        const_cast<ap_fixed_base*>(this), Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range() {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> range() const {
    return this->range(_AP_W - 1, 0);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      int Hi, int Lo) {
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      int Hi, int Lo) const {
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  template <int _AP_W2, bool _AP_S2, int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> operator()(
      const ap_int_base<_AP_W2, _AP_S2>& HiIdx,
      const ap_int_base<_AP_W3, _AP_S3>& LoIdx) const {
    int Hi = HiIdx.to_int();
    int Lo = LoIdx.to_int();
    return this->range(Hi, Lo);
  }

  inline __attribute__((always_inline)) bool is_zero() const { return Base::V == 0; }

  inline __attribute__((always_inline)) bool is_neg() const {
    if (_AP_S && ({ typeof(Base::V) __Val2__ = Base::V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), _AP_W - 1); __Result__; })) return true;
    return false;
  }

  inline __attribute__((always_inline)) int wl() const { return _AP_W; }

  inline __attribute__((always_inline)) int iwl() const { return _AP_I; }

  inline __attribute__((always_inline)) ap_q_mode q_mode() const { return _AP_Q; }

  inline __attribute__((always_inline)) ap_o_mode o_mode() const { return _AP_O; }

  inline __attribute__((always_inline)) int n_bits() const { return _AP_N; }
# 1816 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
  inline __attribute__((always_inline)) char* to_string(unsigned char radix = 2, bool sign = _AP_S) const {
    (void)(radix);
    (void)(sign);
    return 0;
  }

};

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) void b_not(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) {
  ret.V = ~op.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) void b_and(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V & op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) void b_or(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V | op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) void b_xor(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  ret.V = op1.V ^ op2.V;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
inline __attribute__((always_inline)) void neg(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
  ap_fixed_base<_AP_W2 + !_AP_S2, _AP_I2 + !_AP_S2, true, _AP_Q2, _AP_O2,
                _AP_N2>
      t;
  t.V = -op.V;
  ret = t;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
inline __attribute__((always_inline)) void lshift(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op,
    int i) {
  enum {
    F2 = _AP_W2 - _AP_I2,
    _AP_I3 = ((_AP_I) > (_AP_I2) ? (_AP_I) : (_AP_I2)),
    _AP_W3 = _AP_I3 + F2,
  };

  ap_fixed_base<_AP_W3, _AP_I3, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> t;
  t.V = op.V;
  t.V <<= i;

  ret = t;
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N, int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
          ap_o_mode _AP_O2, int _AP_N2>
inline __attribute__((always_inline)) void rshift(
    ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ret,
    const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op,
    int i) {
  enum {
    F = _AP_W - _AP_I,
    F2 = _AP_W2 - _AP_I2,
    F3 = ((F) > (F2) ? (F) : (F2)),
    _AP_W3 = _AP_I2 + F3,
    sh = F - F2,
  };

  ap_fixed_base<_AP_W3, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> t;
  t.V = op.V;
  if (sh >= 0)
    t.V <<= (int) sh;
  t.V >>= i;

  ret = t;
}
# 2268 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator +(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::plus operator +( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator -(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::minus operator -( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator *(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::mult operator *( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator /(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::div operator /( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator &(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator &( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator |(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator |( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ^(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::logic operator ^( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >>(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (1), (1), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <<(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator +=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator -=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator *=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator /=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator &=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator |=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ^=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >>=(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <<=(ap_int_base<(1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator >=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator <=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator ==(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool i_op) { return op.operator !=(ap_fixed_base<(1), (1), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(1), (1), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator +(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::plus operator +( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator -(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::minus operator -( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator *(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::mult operator *( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator /(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::div operator /( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator &(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator &( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator |(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator |( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::logic operator ^( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >>(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (CHAR_IS_SIGNED)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <<(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >>=(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <<=(ap_int_base<(8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (CHAR_IS_SIGNED)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator +(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::plus operator +( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator -(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::minus operator -( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator *(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::mult operator *( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator /(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::div operator /( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator &(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator &( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator |(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator |( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::logic operator ^( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >>(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <<(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >>=(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <<=(ap_int_base<(8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator +(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::plus operator +( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator -(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::minus operator -( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator *(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::mult operator *( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator /(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::div operator /( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator &(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator &( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator |(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator |( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ^(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::logic operator ^( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >>(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (8), (8), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <<(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator +=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator -=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator *=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator /=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator &=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator |=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ^=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >>=(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <<=(ap_int_base<(8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator >=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator <=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator ==(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char i_op) { return op.operator !=(ap_fixed_base<(8), (8), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(8), (8), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::plus operator +( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::minus operator -( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::mult operator *( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::div operator /( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator &( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator |( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::logic operator ^( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::plus operator +( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::minus operator -( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::mult operator *( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::div operator /( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator &( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator |( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::logic operator ^( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_short), (_AP_SIZE_short), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_short), (_AP_SIZE_short), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::plus operator +( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::minus operator -( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::mult operator *( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::div operator /( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator &( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator |( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::logic operator ^( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::plus operator +( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::minus operator -( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::mult operator *( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::div operator /( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator &( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator |( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::logic operator ^( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_int), (_AP_SIZE_int), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_int), (_AP_SIZE_int), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::plus operator +( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::minus operator -( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::mult operator *( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::div operator /( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator &( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator |( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::logic operator ^( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::plus operator +( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::minus operator -( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::mult operator *( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::div operator /( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator &( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator |( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::logic operator ^( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_long), (_AP_SIZE_long), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_long), (_AP_SIZE_long), (false)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::plus operator +( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::minus operator -( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::mult operator *( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::div operator /( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator &( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator |( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::logic operator ^( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (true)>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator +(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::plus operator +( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator -(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::minus operator -( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator *(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::mult operator *( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator /(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::div operator /( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator &(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator &( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator |(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator |( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ^(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::logic operator ^( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::lhs operator >>( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >>(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< (_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>::lhs operator <<( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <<(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator +=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator -=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator *=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator /=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator &=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator |=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ^=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator >>=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >>=(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator <<=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <<=(ap_int_base<(_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator >(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator <(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator >=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator >=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator <=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator <=(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator ==(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator ==(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong i_op) { return op.operator !=(ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<(_AP_SIZE_ap_slong), (_AP_SIZE_ap_slong), (false)>(i_op).operator !=(op); }
# 2356 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_base.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::plus operator +( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator +(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::plus operator +( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator +(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::minus operator -( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator -(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::minus operator -( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator -(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::mult operator *( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator *(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::mult operator *( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator *(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::div operator /( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator /(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::div operator /( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator /(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator &( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator &(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator &( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator &(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator |( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator |(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator |( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator |(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>::template RType< _AP_W, _AP_I, _AP_S>::logic operator ^( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator ^(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) typename ap_fixed_base<_AP_W, _AP_I, _AP_S>::template RType< _AP_W2, _AP_W2, _AP_S2>::logic operator ^( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ^(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); }



template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator +=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator +=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator +=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator +=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator -=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator -=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator -=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator -=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator *=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator *=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator *=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator *=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator /=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator /=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator /=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator /=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator &=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator &=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator &=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator &=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator |=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator |=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator |=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator |=(op.to_ap_int_base()); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& operator ^=( ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ^=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) ap_int_base<_AP_W2, _AP_S2>& operator ^=( ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return i_op.operator ^=(op.to_ap_int_base()); }



template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator ==(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator ==(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator !=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator !=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator >(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator >(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator >=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator >=(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator <(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator <(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& i_op) { return op.operator <=(ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op)); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& i_op, const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_fixed_base<_AP_W2, _AP_W2, _AP_S2>(i_op).operator <=(op); }




template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator==(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator==(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator!=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator!=(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator>(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator<(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator>=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator<=(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator<(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator>(op1);
}

template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
inline __attribute__((always_inline)) bool operator<=(
    double op1,
    const ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op2) {
  return op2.operator>=(op1);
}
# 57 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h" 2
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h" 1
# 71 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_bit_ref {



  typedef ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> ref_type;
  ref_type& d_bv;
  int d_index;

 public:
  inline __attribute__((always_inline)) af_bit_ref(
      const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ref)
      : d_bv(ref.d_bv), d_index(ref.d_index) {






  }

  inline __attribute__((always_inline)) af_bit_ref(ref_type* bv, int index = 0) : d_bv(*bv), d_index(index) {}

  inline __attribute__((always_inline)) af_bit_ref(const ref_type* bv, int index = 0)
      : d_bv(*const_cast<ref_type*>(bv)), d_index(index) {}


  inline __attribute__((always_inline)) operator bool() const { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }



  inline __attribute__((always_inline)) af_bit_ref& operator=(bool val) {
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val) __Repl2__ = !!val; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), d_index, d_index); __Result__; });
    return *this;
  }



  inline __attribute__((always_inline)) af_bit_ref& operator=(const af_bit_ref& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    return operator=(bool(val));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_int_base<_AP_W2, _AP_S2>& val) {
    return operator=(val != 0);
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    return operator=(ap_int_base<_AP_W2, false>(val));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    return operator=(ap_int_base<_AP_W2, false>(val));
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) af_bit_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    return operator=(ap_int_base<_AP_W2 + _AP_W3, false>(val));
  }




  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
  operator,(ap_int_base<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >(
        *this, op);
  }

  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> > operator,(
      const ap_bit_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(*this,
                                                                        op);
  }

  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >(
        *this, op);
  }

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &op) {
    return ap_concat_ref<1, af_bit_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(*this,
                                                                         op);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<
      1, af_bit_ref, _AP_W2,
      af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<
        1, af_bit_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(*this,
                                                                       op);
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_concat_ref<1, af_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                    _AP_Q2, _AP_O2, _AP_N2> >
  operator,(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<1, af_bit_ref, 1, af_bit_ref<_AP_W2, _AP_I2, _AP_S2,
                                                      _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }




  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator==(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    return get() == op.get();
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator!=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op) {
    return get() != op.get();
  }


  inline __attribute__((always_inline)) bool operator~() const {
    bool bit = ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; });
    return bit ? false : true;
  }

  inline __attribute__((always_inline)) bool get() const { return ({ typeof(d_bv.V) __Val2__ = d_bv.V; bool __Result__ = __builtin_bit_select((void*)(&__Val2__), d_index); __Result__; }); }

  inline __attribute__((always_inline)) int length() const { return 1; }





  inline __attribute__((always_inline)) char* to_string() const { return 0; }

};
# 258 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O,
          int _AP_N>
struct af_range_ref {



  typedef ap_fixed_base<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N> ref_type;
  ref_type& d_bv;
  int l_index;
  int h_index;

 public:

  inline __attribute__((always_inline)) af_range_ref(
      const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& ref)
      : d_bv(ref.d_bv), l_index(ref.l_index), h_index(ref.h_index) {}




  inline __attribute__((always_inline)) af_range_ref(ref_type* bv, int h, int l)
      : d_bv(*bv), l_index(l), h_index(h) {
# 288 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
  }

  inline __attribute__((always_inline)) af_range_ref(const ref_type* bv, int h, int l)
      : d_bv(*const_cast<ref_type*>(bv)), l_index(l), h_index(h) {
# 300 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
  }
# 312 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
  inline __attribute__((always_inline)) af_range_ref& operator=(const bool val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const signed char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned char val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const short val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned short val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const int val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned int val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const long val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const unsigned long val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_slong val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_ulong val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const half val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const float val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }
  inline __attribute__((always_inline)) af_range_ref& operator=(const double val) { ap_int_base<_AP_W, false> loc(val); d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(loc.V) __Repl2__ = loc.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; }); return *this; }



  inline __attribute__((always_inline)) af_range_ref& operator=(const char* val) {
    const ap_int_base<_AP_W, false> tmp(val);
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(tmp.V) __Repl2__ = tmp.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }



  template <int _AP_W3, bool _AP_S3>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_int_base<_AP_W3, _AP_S3>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_range_ref<_AP_W2, _AP_S2>& val) {
    const ap_int_base<_AP_W2, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) af_range_ref& operator=(const ap_bit_ref<_AP_W2, _AP_S2>& val) {
    const ap_int_base<1, false> tmp((bool)val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&
          val) {
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
    return *this;
  }




  inline __attribute__((always_inline)) af_range_ref& operator=(const af_range_ref& val) {
    ap_int_base<_AP_W, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    ap_int_base<_AP_W2, false> tmp(val);
    return operator=(tmp);
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& val) {
    ap_int_base<1, false> tmp((bool)val);
    return operator=(tmp);
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) af_range_ref& operator=(
      const ap_concat_ref<_AP_W2, _AP_T3, _AP_W3, _AP_T3>& val) {
    const ap_int_base<_AP_W2 + _AP_W3, false> tmp(val);
    return operator=(tmp);
  }




  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator==(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop == rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator!=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop < rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop > rop;
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator<=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator>(op2));
  }

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) bool operator>=(const ap_range_ref<_AP_W2, _AP_S2>& op2) {
    return !(operator<(op2));
  }




  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator==(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop == rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator!=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator==(op2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator<(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop < rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator>(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    ap_int_base<_AP_W, false> lop(*this);
    ap_int_base<_AP_W2, false> rop(op2);
    return lop > rop;
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator<=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator>(op2));
  }

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) bool operator>=(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op2) {
    return !(operator<(op2));
  }





  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, _AP_W2, ap_int_base<_AP_W2, _AP_S2> >
      operator,(ap_int_base<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                         ap_int_base<_AP_W2, _AP_S2> >(*this, op);
  }


  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >
  operator,(const ap_bit_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, 1, ap_bit_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_bit_ref<_AP_W2, _AP_S2>&>(op));
  }


  template <int _AP_W2, int _AP_S2>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, _AP_W2, ap_range_ref<_AP_W2, _AP_S2> >
  operator,(const ap_range_ref<_AP_W2, _AP_S2> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                         ap_range_ref<_AP_W2, _AP_S2> >(
        *this, const_cast<ap_range_ref<_AP_W2, _AP_S2>&>(op));
  }


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_concat_ref<_AP_W, af_range_ref, _AP_W2 + _AP_W3,
                       ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >
  operator,(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> &op) {
    return ap_concat_ref<_AP_W, af_range_ref, _AP_W2 + _AP_W3,
                         ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3> >(
        *this, const_cast<ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>&>(op));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, _AP_W2,
                    af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>
                    &op) {
    return ap_concat_ref<
        _AP_W, af_range_ref, _AP_W2,
        af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline))
      ap_concat_ref<_AP_W, af_range_ref, 1,
                    af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >
      operator,(
          const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> &op) {
    return ap_concat_ref<
        _AP_W, af_range_ref, 1,
        af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2> >(
        *this,
        const_cast<af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>&>(
            op));
  }


  inline __attribute__((always_inline)) operator ap_ulong() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret.to_uint64();
  }

  inline __attribute__((always_inline)) operator ap_int_base<_AP_W, false>() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> to_ap_int_base() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }


  inline __attribute__((always_inline)) char to_char() const {
    return (char)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) int to_int() const {
    return (int)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned to_uint() const {
    return (unsigned)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) long to_long() const {
    return (long)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) unsigned long to_ulong() const {
    return (unsigned long)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_slong to_int64() const {
    return (ap_slong)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }

  inline __attribute__((always_inline)) ap_ulong to_uint64() const {
    return (ap_ulong)(({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; }));
  }



  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator~() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (~ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator!() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (!ret);
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator+() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> operator-() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return (-ret);
  }


  inline __attribute__((always_inline)) ap_int_base<_AP_W, false> get() const {
    ap_int_base<_AP_W, false> ret;
    ret.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; __builtin_bit_part_select((void*)(&__Result__), (void*)(&__Val2__), l_index, h_index); __Result__; });
    return ret;
  }

  template <int _AP_W2>
  inline __attribute__((always_inline)) void set(const ap_int_base<_AP_W2, false>& val) {
    d_bv.V = ({ typename _ap_type::remove_const<typeof(d_bv.V)>::type __Result__ = 0; typeof(d_bv.V) __Val2__ = d_bv.V; typeof(val.V) __Repl2__ = val.V; __builtin_bit_part_set((void*)(&__Result__), (void*)(&__Val2__), (void*)(&__Repl2__), l_index, h_index); __Result__; });
  }

  inline __attribute__((always_inline)) int length() const {
    return h_index >= l_index ? h_index - l_index + 1 : l_index - h_index + 1;
  }
# 661 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
  inline __attribute__((always_inline)) char* to_string(signed char rd = 2) const {
     (void)(rd);
    return 0;
  }

};
# 725 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(1), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(1), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, bool op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( bool op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (CHAR_IS_SIGNED)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (CHAR_IS_SIGNED)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, signed char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( signed char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(8), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(8), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned char op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned char op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_short), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, short op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_short), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_short), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned short op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned short op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_int), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, int op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_int), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_int), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned int op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned int op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_long), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, long op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_long), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_long), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, unsigned long op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( unsigned long op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (true)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_slong op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_slong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) > ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) < ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) >= ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator >=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) <= ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator <=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) == ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator ==( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == bool(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return ap_int_base<_AP_W, false>(op) != ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return ap_int_base<(_AP_SIZE_ap_slong), (false)>(op2) != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, ap_ulong op2) { return bool(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N> inline __attribute__((always_inline)) bool operator !=( ap_ulong op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != bool(op); }
# 771 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_ref.h"
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) > op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 > ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) < op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 < ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) >= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator >=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 >= ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) <= op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator <=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 <= ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) == op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator ==( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 == ap_int_base<1, false>(op); }
template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S>& op2) { return ap_int_base<_AP_W, false>(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_range_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != ap_int_base<_AP_W, false>(op); } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op, const ap_int_base<_AP_W2, _AP_S2>& op2) { return ap_int_base<1, false>(op) != op2; } template <int _AP_W, int _AP_I, bool _AP_S, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N, int _AP_W2, bool _AP_S2> inline __attribute__((always_inline)) bool operator !=( const ap_int_base<_AP_W2, _AP_S2>& op2, const af_bit_ref<_AP_W, _AP_I, _AP_S, _AP_Q, _AP_O, _AP_N>& op) { return op2 != ap_int_base<1, false>(op); }
# 58 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h" 2





template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
struct ap_fixed : ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> {
  typedef ap_fixed_base<_AP_W, _AP_I, true, _AP_Q, _AP_O, _AP_N> Base;


  inline __attribute__((always_inline)) ap_fixed() : Base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                      _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed(const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                               _AP_O2, _AP_N2>& op)
      : Base(op) {}
# 112 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed(const ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed(const volatile ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}




  inline __attribute__((always_inline)) ap_fixed(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }
# 147 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed(const ap_bit_ref<_AP_W2, _AP_S2>& op) : Base(op) {}


  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_fixed(const ap_range_ref<_AP_W2, _AP_S2>& op) : Base(op) {}


  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_fixed(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_fixed(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}





  inline __attribute__((always_inline)) ap_fixed(bool v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(signed char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(unsigned char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(short v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(unsigned short v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(int v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(unsigned int v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(long v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(unsigned long v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(ap_slong v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(ap_ulong v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(half v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(float v) : Base(v) {}
  inline __attribute__((always_inline)) ap_fixed(double v) : Base(v) {}


  inline __attribute__((always_inline)) ap_fixed(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) ap_fixed(const char* s, signed char rd) : Base(s, rd) {}






  ap_fixed &
  operator=(const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &op) = default;

  inline __attribute__((always_inline)) void operator=(
      const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }

  inline __attribute__((always_inline)) ap_fixed& operator=(
      const volatile ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) {
    Base::V = op.V;
    return *this;
  }

  inline __attribute__((always_inline)) void operator=(
      const volatile ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }
};





template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
struct ap_ufixed : ap_fixed_base<_AP_W, _AP_I, false, _AP_Q, _AP_O, _AP_N> {
  typedef ap_fixed_base<_AP_W, _AP_I, false, _AP_Q, _AP_O, _AP_N> Base;


  inline __attribute__((always_inline)) ap_ufixed() : Base() {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_ufixed(const ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                       _AP_O2, _AP_N2>& op)
      : Base(op) {}


  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_ufixed(const volatile ap_fixed_base<_AP_W2, _AP_I2, _AP_S2, _AP_Q2,
                                                _AP_O2, _AP_N2>& op)
      : Base(op) {}
# 275 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_ufixed(const ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_ufixed(const volatile ap_int_base<_AP_W2, _AP_S2>& op) : Base(op) {}




  inline __attribute__((always_inline)) ap_ufixed(unsigned V __attribute__((bitwidth(_AP_W))), bool raw) {
    Base::V = V;
    (void)(raw);
  }
# 307 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_ufixed(const ap_bit_ref<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, bool _AP_S2>
  inline __attribute__((always_inline)) ap_ufixed(const ap_range_ref<_AP_W2, _AP_S2>& op) : Base(op) {}

  template <int _AP_W2, typename _AP_T2, int _AP_W3, typename _AP_T3>
  inline __attribute__((always_inline)) ap_ufixed(const ap_concat_ref<_AP_W2, _AP_T2, _AP_W3, _AP_T3>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_ufixed(
      const af_bit_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}

  template <int _AP_W2, int _AP_I2, bool _AP_S2, ap_q_mode _AP_Q2,
            ap_o_mode _AP_O2, int _AP_N2>
  inline __attribute__((always_inline)) ap_ufixed(
      const af_range_ref<_AP_W2, _AP_I2, _AP_S2, _AP_Q2, _AP_O2, _AP_N2>& op)
      : Base(op) {}




  inline __attribute__((always_inline)) ap_ufixed(bool v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(signed char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(unsigned char v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(short v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(unsigned short v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(int v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(unsigned int v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(long v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(unsigned long v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(ap_slong v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(ap_ulong v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(half v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(float v) : Base(v) {}
  inline __attribute__((always_inline)) ap_ufixed(double v) : Base(v) {}


  inline __attribute__((always_inline)) ap_ufixed(const char* s) : Base(s) {}

  inline __attribute__((always_inline)) ap_ufixed(const char* s, signed char rd) : Base(s, rd) {}


  ap_ufixed &
  operator=(const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &op) = default;

  inline __attribute__((always_inline)) void operator=(
      const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) volatile {
    Base::V = op.V;
  }

  inline __attribute__((always_inline)) ap_ufixed& operator=(
      const volatile ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N>& op) {
    Base::V = op.V;
    return *this;
  }

  inline __attribute__((always_inline)) void operator=(const volatile ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O,
                                                 _AP_N>& op) volatile {
    Base::V = op.V;
  }
};
# 395 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h"
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_special.h" 1
# 61 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_special.h"
namespace std {
template<typename _Tp> class complex;
}







namespace std {
# 89 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
class complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > {
 public:
  typedef ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> _Tp;
  typedef _Tp value_type;




  complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const _Tp& real() const { return _M_real; }
  const _Tp& imag() const { return _M_imag; }







  void real(_Tp __val) { _M_real = __val; }

  void imag(_Tp __val) { _M_imag = __val; }



  complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  complex<_Tp> &operator=(const complex<_Up> &__z) {
    _M_real = __z.real();
    _M_imag = __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 230 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
class complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > {
 public:
  typedef ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> _Tp;
  typedef _Tp value_type;




  complex() : _M_real(_Tp()), _M_imag(_Tp()) {}


  complex(const _Tp &__r, const _Tp &__i = _Tp(0))
      : _M_real(__r), _M_imag(__i) {}


  template <typename _Up>
  complex(const complex<_Up> &__z) : _M_real(__z.real()), _M_imag(__z.imag()) {}


  const _Tp& real() const { return _M_real; }
  const _Tp& imag() const { return _M_imag; }







  void real(_Tp __val) { _M_real = __val; }

  void imag(_Tp __val) { _M_imag = __val; }



  complex<_Tp> &operator=(const _Tp __t) {
    _M_real = __t;
    _M_imag = _Tp(0);
    return *this;
  }



  complex<_Tp> &operator+=(const _Tp &__t) {
    _M_real += __t;
    return *this;
  }



  complex<_Tp> &operator-=(const _Tp &__t) {
    _M_real -= __t;
    return *this;
  }



  complex<_Tp> &operator*=(const _Tp &__t) {
    _M_real *= __t;
    _M_imag *= __t;
    return *this;
  }



  complex<_Tp> &operator/=(const _Tp &__t) {
    _M_real /= __t;
    _M_imag /= __t;
    return *this;
  }


  template <typename _Up>
  complex<_Tp> &operator=(const complex<_Up> &__z) {
    _M_real = __z.real();
    _M_imag = __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator+=(const complex<_Up> &__z) {
    _M_real += __z.real();
    _M_imag += __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator-=(const complex<_Up> &__z) {
    _M_real -= __z.real();
    _M_imag -= __z.imag();
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator*=(const complex<_Up> &__z) {
    const _Tp __r = _M_real * __z.real() - _M_imag * __z.imag();
    _M_imag = _M_real * __z.imag() + _M_imag * __z.real();
    _M_real = __r;
    return *this;
  }



  template <typename _Up>
  complex<_Tp> &operator/=(const complex<_Up> &__z) {
    complex<_Tp> cj (__z.real(), -__z.imag());
    complex<_Tp> a = (*this) * cj;
    complex<_Tp> b = cj * __z;
    _M_real = a.real() / b.real();
    _M_imag = a.imag() / b.real();
    return *this;
  }

 private:
  _Tp _M_real;
  _Tp _M_imag;

};
# 362 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed_special.h"
template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator==(
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator==(
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator!=(
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator!=(
    const ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_fixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator==(
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() == __y &&
         __x.imag() == 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator==(
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x == __y.real() &&
         0 == __y.imag();
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator!=(
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__x,
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__y) {
  return __x.real() != __y ||
         __x.imag() != 0;
}


template <int _AP_W, int _AP_I, ap_q_mode _AP_Q, ap_o_mode _AP_O, int _AP_N>
inline bool operator!=(
    const ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> &__x,
    const complex<ap_ufixed<_AP_W, _AP_I, _AP_Q, _AP_O, _AP_N> > &__y) {
  return __x != __y.real() ||
         0 != __y.imag();
}

}
# 396 "/tools/Xilinx/Vitis_HLS/2021.1/common/technology/autopilot/ap_fixed.h" 2
# 5 "./cordiccart2pol.h" 2




typedef ap_fixed<6,3> data_t;






extern data_t my_LUT_r[(1 << (8 << 1))];
extern data_t my_LUT_th[(1 << (8 << 1))];

__attribute__((sdx_kernel("cordiccart2pol", 0))) void cordiccart2pol(data_t x, data_t y, data_t * r, data_t * theta);
void init_cart2pol_LUTs(data_t my_LUT_th[(1 << (8 << 1))], data_t my_LUT_r[(1 << (8 << 1))]);
# 2 "cordiccart2pol.cpp" 2
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/math.h" 1 3
# 36 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/math.h" 3
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 1 3
# 40 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3

# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 1 3
# 196 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 218 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 495 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 3
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 1 3
# 39 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 439 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 440 "/usr/include/features.h" 2 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 40 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/os_defines.h" 2 3
# 496 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3


# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/cpu_defines.h" 1 3
# 499 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/x86_64-pc-linux-gnu/bits/c++config.h" 2 3
# 42 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 2 3
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/bits/cpp_type_traits.h" 1 3
# 36 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/bits/cpp_type_traits.h" 3
# 67 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/bits/cpp_type_traits.h" 3
extern "C++" {

namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };



  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 261 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
# 278 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };



  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }


}
}
# 43 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 2 3
# 1 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/ext/type_traits.h" 1 3
# 33 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/ext/type_traits.h" 3




extern "C++" {

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }


  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
}
# 44 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 2 3

# 1 "/usr/include/math.h" 1 3 4
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/math.h" 2 3 4






extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 44 "/usr/include/math.h" 2 3 4
# 138 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
# 139 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
typedef float float_t;
typedef double double_t;
# 190 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
# 191 "/usr/include/math.h" 2 3 4
# 233 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
# 234 "/usr/include/math.h" 2 3 4



enum
  {
    FP_INT_UPWARD =

      0,
    FP_INT_DOWNWARD =

      1,
    FP_INT_TOWARDZERO =

      2,
    FP_INT_TONEARESTFROMZERO =

      3,
    FP_INT_TONEAREST =

      4,
  };
# 289 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));


extern int __isnan (double __value) throw () __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) throw ();


extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));
# 290 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


 extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

 extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();



 extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();





 extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


 extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();




extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();




extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();






 extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();



extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();




extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();






extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
# 182 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();






extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));




extern double nan (const char *__tagb) throw (); extern double __nan (const char *__tagb) throw ();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();





extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();




extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();







extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();






extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw (); extern double __nextafter (double __x, double __y) throw ();

extern double nexttoward (double __x, long double __y) throw (); extern double __nexttoward (double __x, long double __y) throw ();




extern double nextdown (double __x) throw (); extern double __nextdown (double __x) throw ();

extern double nextup (double __x) throw (); extern double __nextup (double __x) throw ();



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern long int llogb (double __x) throw (); extern long int __llogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));


extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();




extern double roundeven (double __x) throw () __attribute__ ((__const__)); extern double __roundeven (double __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfp (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) throw ();



extern double fmaxmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) throw () __attribute__ ((__const__));


extern double fminmag (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) throw () __attribute__ ((__const__));


extern int canonicalize (double *__cx, const double *__x) throw ();




extern int totalorder (const double *__x, const double *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermag (const double *__x, const double *__y) throw ()

     __attribute__ ((__pure__));


extern double getpayload (const double *__x) throw (); extern double __getpayload (const double *__x) throw ();


extern int setpayload (double *__x, double __payload) throw ();


extern int setpayloadsig (double *__x, double __payload) throw ();







extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 291 "/usr/include/math.h" 2 3 4
# 306 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));


extern int __isnanf (float __value) throw () __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) throw ();


extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));
# 307 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


 extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

 extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();



 extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();





 extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


 extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();




extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();




extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();






 extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();



extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();




extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();






extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinff (float __value) throw () __attribute__ ((__const__));




extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();






extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));




extern float nanf (const char *__tagb) throw (); extern float __nanf (const char *__tagb) throw ();
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanf (float __value) throw () __attribute__ ((__const__));





extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();





extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();




extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();







extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();






extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw (); extern float __nextafterf (float __x, float __y) throw ();

extern float nexttowardf (float __x, long double __y) throw (); extern float __nexttowardf (float __x, long double __y) throw ();




extern float nextdownf (float __x) throw (); extern float __nextdownf (float __x) throw ();

extern float nextupf (float __x) throw (); extern float __nextupf (float __x) throw ();



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern long int llogbf (float __x) throw (); extern long int __llogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();




extern float roundevenf (float __x) throw () __attribute__ ((__const__)); extern float __roundevenf (float __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) throw ();



extern float fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminmagf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) throw () __attribute__ ((__const__));


extern int canonicalizef (float *__cx, const float *__x) throw ();




extern int totalorderf (const float *__x, const float *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagf (const float *__x, const float *__y) throw ()

     __attribute__ ((__pure__));


extern float getpayloadf (const float *__x) throw (); extern float __getpayloadf (const float *__x) throw ();


extern int setpayloadf (float *__x, float __payload) throw ();


extern int setpayloadsigf (float *__x, float __payload) throw ();







extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 308 "/usr/include/math.h" 2 3 4
# 349 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 3 4
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));


extern int __isnanl (long double __value) throw () __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) throw ();


extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));
# 350 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


 extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

 extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();



 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();





 extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


 extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();




extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();




extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();






 extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();



extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();




extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();






extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
# 177 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isinfl (long double __value) throw () __attribute__ ((__const__));




extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();






extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));




extern long double nanl (const char *__tagb) throw (); extern long double __nanl (const char *__tagb) throw ();
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int isnanl (long double __value) throw () __attribute__ ((__const__));





extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();





extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();




extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();







extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();






extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw (); extern long double __nextafterl (long double __x, long double __y) throw ();

extern long double nexttowardl (long double __x, long double __y) throw (); extern long double __nexttowardl (long double __x, long double __y) throw ();




extern long double nextdownl (long double __x) throw (); extern long double __nextdownl (long double __x) throw ();

extern long double nextupl (long double __x) throw (); extern long double __nextupl (long double __x) throw ();



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long int llogbl (long double __x) throw (); extern long int __llogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();




extern long double roundevenl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundevenl (long double __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) throw ();



extern long double fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern int canonicalizel (long double *__cx, const long double *__x) throw ();




extern int totalorderl (const long double *__x, const long double *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagl (const long double *__x, const long double *__y) throw ()

     __attribute__ ((__pure__));


extern long double getpayloadl (const long double *__x) throw (); extern long double __getpayloadl (const long double *__x) throw ();


extern int setpayloadl (long double *__x, long double __payload) throw ();


extern int setpayloadsigl (long double *__x, long double __payload) throw ();







extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 351 "/usr/include/math.h" 2 3 4
# 389 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 acosf32 (_Float32 __x) throw (); extern _Float32 __acosf32 (_Float32 __x) throw ();

extern _Float32 asinf32 (_Float32 __x) throw (); extern _Float32 __asinf32 (_Float32 __x) throw ();

extern _Float32 atanf32 (_Float32 __x) throw (); extern _Float32 __atanf32 (_Float32 __x) throw ();

extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) throw (); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) throw ();


 extern _Float32 cosf32 (_Float32 __x) throw (); extern _Float32 __cosf32 (_Float32 __x) throw ();

 extern _Float32 sinf32 (_Float32 __x) throw (); extern _Float32 __sinf32 (_Float32 __x) throw ();

extern _Float32 tanf32 (_Float32 __x) throw (); extern _Float32 __tanf32 (_Float32 __x) throw ();




extern _Float32 coshf32 (_Float32 __x) throw (); extern _Float32 __coshf32 (_Float32 __x) throw ();

extern _Float32 sinhf32 (_Float32 __x) throw (); extern _Float32 __sinhf32 (_Float32 __x) throw ();

extern _Float32 tanhf32 (_Float32 __x) throw (); extern _Float32 __tanhf32 (_Float32 __x) throw ();



 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw (); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) throw ();





extern _Float32 acoshf32 (_Float32 __x) throw (); extern _Float32 __acoshf32 (_Float32 __x) throw ();

extern _Float32 asinhf32 (_Float32 __x) throw (); extern _Float32 __asinhf32 (_Float32 __x) throw ();

extern _Float32 atanhf32 (_Float32 __x) throw (); extern _Float32 __atanhf32 (_Float32 __x) throw ();





 extern _Float32 expf32 (_Float32 __x) throw (); extern _Float32 __expf32 (_Float32 __x) throw ();


extern _Float32 frexpf32 (_Float32 __x, int *__exponent) throw (); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) throw ();


extern _Float32 ldexpf32 (_Float32 __x, int __exponent) throw (); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) throw ();


 extern _Float32 logf32 (_Float32 __x) throw (); extern _Float32 __logf32 (_Float32 __x) throw ();


extern _Float32 log10f32 (_Float32 __x) throw (); extern _Float32 __log10f32 (_Float32 __x) throw ();


extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) throw (); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern _Float32 exp10f32 (_Float32 __x) throw (); extern _Float32 __exp10f32 (_Float32 __x) throw ();




extern _Float32 expm1f32 (_Float32 __x) throw (); extern _Float32 __expm1f32 (_Float32 __x) throw ();


extern _Float32 log1pf32 (_Float32 __x) throw (); extern _Float32 __log1pf32 (_Float32 __x) throw ();


extern _Float32 logbf32 (_Float32 __x) throw (); extern _Float32 __logbf32 (_Float32 __x) throw ();




extern _Float32 exp2f32 (_Float32 __x) throw (); extern _Float32 __exp2f32 (_Float32 __x) throw ();


extern _Float32 log2f32 (_Float32 __x) throw (); extern _Float32 __log2f32 (_Float32 __x) throw ();






 extern _Float32 powf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) throw ();


extern _Float32 sqrtf32 (_Float32 __x) throw (); extern _Float32 __sqrtf32 (_Float32 __x) throw ();



extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) throw ();




extern _Float32 cbrtf32 (_Float32 __x) throw (); extern _Float32 __cbrtf32 (_Float32 __x) throw ();






extern _Float32 ceilf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) throw () __attribute__ ((__const__));


extern _Float32 fabsf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) throw () __attribute__ ((__const__));


extern _Float32 floorf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) throw () __attribute__ ((__const__));


extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) throw ();
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));




extern _Float32 nanf32 (const char *__tagb) throw (); extern _Float32 __nanf32 (const char *__tagb) throw ();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 j0f32 (_Float32) throw (); extern _Float32 __j0f32 (_Float32) throw ();
extern _Float32 j1f32 (_Float32) throw (); extern _Float32 __j1f32 (_Float32) throw ();
extern _Float32 jnf32 (int, _Float32) throw (); extern _Float32 __jnf32 (int, _Float32) throw ();
extern _Float32 y0f32 (_Float32) throw (); extern _Float32 __y0f32 (_Float32) throw ();
extern _Float32 y1f32 (_Float32) throw (); extern _Float32 __y1f32 (_Float32) throw ();
extern _Float32 ynf32 (int, _Float32) throw (); extern _Float32 __ynf32 (int, _Float32) throw ();





extern _Float32 erff32 (_Float32) throw (); extern _Float32 __erff32 (_Float32) throw ();
extern _Float32 erfcf32 (_Float32) throw (); extern _Float32 __erfcf32 (_Float32) throw ();
extern _Float32 lgammaf32 (_Float32) throw (); extern _Float32 __lgammaf32 (_Float32) throw ();




extern _Float32 tgammaf32 (_Float32) throw (); extern _Float32 __tgammaf32 (_Float32) throw ();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) throw (); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) throw ();






extern _Float32 rintf32 (_Float32 __x) throw (); extern _Float32 __rintf32 (_Float32 __x) throw ();


extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) throw ();






extern _Float32 nextdownf32 (_Float32 __x) throw (); extern _Float32 __nextdownf32 (_Float32 __x) throw ();

extern _Float32 nextupf32 (_Float32 __x) throw (); extern _Float32 __nextupf32 (_Float32 __x) throw ();



extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) throw ();



extern _Float32 scalbnf32 (_Float32 __x, int __n) throw (); extern _Float32 __scalbnf32 (_Float32 __x, int __n) throw ();



extern int ilogbf32 (_Float32 __x) throw (); extern int __ilogbf32 (_Float32 __x) throw ();




extern long int llogbf32 (_Float32 __x) throw (); extern long int __llogbf32 (_Float32 __x) throw ();




extern _Float32 scalblnf32 (_Float32 __x, long int __n) throw (); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) throw ();



extern _Float32 nearbyintf32 (_Float32 __x) throw (); extern _Float32 __nearbyintf32 (_Float32 __x) throw ();



extern _Float32 roundf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) throw () __attribute__ ((__const__));



extern _Float32 truncf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) throw () __attribute__ ((__const__));




extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw (); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) throw ();






extern long int lrintf32 (_Float32 __x) throw (); extern long int __lrintf32 (_Float32 __x) throw ();
__extension__
extern long long int llrintf32 (_Float32 __x) throw (); extern long long int __llrintf32 (_Float32 __x) throw ();



extern long int lroundf32 (_Float32 __x) throw (); extern long int __lroundf32 (_Float32 __x) throw ();
__extension__
extern long long int llroundf32 (_Float32 __x) throw (); extern long long int __llroundf32 (_Float32 __x) throw ();



extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) throw (); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) throw ();


extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));


extern _Float32 fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));


extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw (); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) throw ();




extern _Float32 roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) throw ();



extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));


extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) throw () __attribute__ ((__const__));


extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) throw ();




extern int totalorderf32 (const _Float32 *__x, const _Float32 *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagf32 (const _Float32 *__x, const _Float32 *__y) throw ()

     __attribute__ ((__pure__));


extern _Float32 getpayloadf32 (const _Float32 *__x) throw (); extern _Float32 __getpayloadf32 (const _Float32 *__x) throw ();


extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) throw ();


extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) throw ();
# 390 "/usr/include/math.h" 2 3 4
# 406 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 acosf64 (_Float64 __x) throw (); extern _Float64 __acosf64 (_Float64 __x) throw ();

extern _Float64 asinf64 (_Float64 __x) throw (); extern _Float64 __asinf64 (_Float64 __x) throw ();

extern _Float64 atanf64 (_Float64 __x) throw (); extern _Float64 __atanf64 (_Float64 __x) throw ();

extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) throw (); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) throw ();


 extern _Float64 cosf64 (_Float64 __x) throw (); extern _Float64 __cosf64 (_Float64 __x) throw ();

 extern _Float64 sinf64 (_Float64 __x) throw (); extern _Float64 __sinf64 (_Float64 __x) throw ();

extern _Float64 tanf64 (_Float64 __x) throw (); extern _Float64 __tanf64 (_Float64 __x) throw ();




extern _Float64 coshf64 (_Float64 __x) throw (); extern _Float64 __coshf64 (_Float64 __x) throw ();

extern _Float64 sinhf64 (_Float64 __x) throw (); extern _Float64 __sinhf64 (_Float64 __x) throw ();

extern _Float64 tanhf64 (_Float64 __x) throw (); extern _Float64 __tanhf64 (_Float64 __x) throw ();



 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw (); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) throw ();





extern _Float64 acoshf64 (_Float64 __x) throw (); extern _Float64 __acoshf64 (_Float64 __x) throw ();

extern _Float64 asinhf64 (_Float64 __x) throw (); extern _Float64 __asinhf64 (_Float64 __x) throw ();

extern _Float64 atanhf64 (_Float64 __x) throw (); extern _Float64 __atanhf64 (_Float64 __x) throw ();





 extern _Float64 expf64 (_Float64 __x) throw (); extern _Float64 __expf64 (_Float64 __x) throw ();


extern _Float64 frexpf64 (_Float64 __x, int *__exponent) throw (); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) throw ();


extern _Float64 ldexpf64 (_Float64 __x, int __exponent) throw (); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) throw ();


 extern _Float64 logf64 (_Float64 __x) throw (); extern _Float64 __logf64 (_Float64 __x) throw ();


extern _Float64 log10f64 (_Float64 __x) throw (); extern _Float64 __log10f64 (_Float64 __x) throw ();


extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) throw (); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern _Float64 exp10f64 (_Float64 __x) throw (); extern _Float64 __exp10f64 (_Float64 __x) throw ();




extern _Float64 expm1f64 (_Float64 __x) throw (); extern _Float64 __expm1f64 (_Float64 __x) throw ();


extern _Float64 log1pf64 (_Float64 __x) throw (); extern _Float64 __log1pf64 (_Float64 __x) throw ();


extern _Float64 logbf64 (_Float64 __x) throw (); extern _Float64 __logbf64 (_Float64 __x) throw ();




extern _Float64 exp2f64 (_Float64 __x) throw (); extern _Float64 __exp2f64 (_Float64 __x) throw ();


extern _Float64 log2f64 (_Float64 __x) throw (); extern _Float64 __log2f64 (_Float64 __x) throw ();






 extern _Float64 powf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float64 sqrtf64 (_Float64 __x) throw (); extern _Float64 __sqrtf64 (_Float64 __x) throw ();



extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) throw ();




extern _Float64 cbrtf64 (_Float64 __x) throw (); extern _Float64 __cbrtf64 (_Float64 __x) throw ();






extern _Float64 ceilf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) throw () __attribute__ ((__const__));


extern _Float64 fabsf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) throw () __attribute__ ((__const__));


extern _Float64 floorf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) throw () __attribute__ ((__const__));


extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) throw ();
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));




extern _Float64 nanf64 (const char *__tagb) throw (); extern _Float64 __nanf64 (const char *__tagb) throw ();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 j0f64 (_Float64) throw (); extern _Float64 __j0f64 (_Float64) throw ();
extern _Float64 j1f64 (_Float64) throw (); extern _Float64 __j1f64 (_Float64) throw ();
extern _Float64 jnf64 (int, _Float64) throw (); extern _Float64 __jnf64 (int, _Float64) throw ();
extern _Float64 y0f64 (_Float64) throw (); extern _Float64 __y0f64 (_Float64) throw ();
extern _Float64 y1f64 (_Float64) throw (); extern _Float64 __y1f64 (_Float64) throw ();
extern _Float64 ynf64 (int, _Float64) throw (); extern _Float64 __ynf64 (int, _Float64) throw ();





extern _Float64 erff64 (_Float64) throw (); extern _Float64 __erff64 (_Float64) throw ();
extern _Float64 erfcf64 (_Float64) throw (); extern _Float64 __erfcf64 (_Float64) throw ();
extern _Float64 lgammaf64 (_Float64) throw (); extern _Float64 __lgammaf64 (_Float64) throw ();




extern _Float64 tgammaf64 (_Float64) throw (); extern _Float64 __tgammaf64 (_Float64) throw ();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) throw (); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) throw ();






extern _Float64 rintf64 (_Float64 __x) throw (); extern _Float64 __rintf64 (_Float64 __x) throw ();


extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) throw ();






extern _Float64 nextdownf64 (_Float64 __x) throw (); extern _Float64 __nextdownf64 (_Float64 __x) throw ();

extern _Float64 nextupf64 (_Float64 __x) throw (); extern _Float64 __nextupf64 (_Float64 __x) throw ();



extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) throw ();



extern _Float64 scalbnf64 (_Float64 __x, int __n) throw (); extern _Float64 __scalbnf64 (_Float64 __x, int __n) throw ();



extern int ilogbf64 (_Float64 __x) throw (); extern int __ilogbf64 (_Float64 __x) throw ();




extern long int llogbf64 (_Float64 __x) throw (); extern long int __llogbf64 (_Float64 __x) throw ();




extern _Float64 scalblnf64 (_Float64 __x, long int __n) throw (); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) throw ();



extern _Float64 nearbyintf64 (_Float64 __x) throw (); extern _Float64 __nearbyintf64 (_Float64 __x) throw ();



extern _Float64 roundf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) throw () __attribute__ ((__const__));



extern _Float64 truncf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) throw () __attribute__ ((__const__));




extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw (); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) throw ();






extern long int lrintf64 (_Float64 __x) throw (); extern long int __lrintf64 (_Float64 __x) throw ();
__extension__
extern long long int llrintf64 (_Float64 __x) throw (); extern long long int __llrintf64 (_Float64 __x) throw ();



extern long int lroundf64 (_Float64 __x) throw (); extern long int __lroundf64 (_Float64 __x) throw ();
__extension__
extern long long int llroundf64 (_Float64 __x) throw (); extern long long int __llroundf64 (_Float64 __x) throw ();



extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) throw (); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));


extern _Float64 fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));


extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw (); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) throw ();




extern _Float64 roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) throw ();



extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));


extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) throw () __attribute__ ((__const__));


extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) throw ();




extern int totalorderf64 (const _Float64 *__x, const _Float64 *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagf64 (const _Float64 *__x, const _Float64 *__y) throw ()

     __attribute__ ((__pure__));


extern _Float64 getpayloadf64 (const _Float64 *__x) throw (); extern _Float64 __getpayloadf64 (const _Float64 *__x) throw ();


extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) throw ();


extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) throw ();
# 407 "/usr/include/math.h" 2 3 4
# 440 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x acosf32x (_Float32x __x) throw (); extern _Float32x __acosf32x (_Float32x __x) throw ();

extern _Float32x asinf32x (_Float32x __x) throw (); extern _Float32x __asinf32x (_Float32x __x) throw ();

extern _Float32x atanf32x (_Float32x __x) throw (); extern _Float32x __atanf32x (_Float32x __x) throw ();

extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) throw (); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) throw ();


 extern _Float32x cosf32x (_Float32x __x) throw (); extern _Float32x __cosf32x (_Float32x __x) throw ();

 extern _Float32x sinf32x (_Float32x __x) throw (); extern _Float32x __sinf32x (_Float32x __x) throw ();

extern _Float32x tanf32x (_Float32x __x) throw (); extern _Float32x __tanf32x (_Float32x __x) throw ();




extern _Float32x coshf32x (_Float32x __x) throw (); extern _Float32x __coshf32x (_Float32x __x) throw ();

extern _Float32x sinhf32x (_Float32x __x) throw (); extern _Float32x __sinhf32x (_Float32x __x) throw ();

extern _Float32x tanhf32x (_Float32x __x) throw (); extern _Float32x __tanhf32x (_Float32x __x) throw ();



 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw (); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) throw ();





extern _Float32x acoshf32x (_Float32x __x) throw (); extern _Float32x __acoshf32x (_Float32x __x) throw ();

extern _Float32x asinhf32x (_Float32x __x) throw (); extern _Float32x __asinhf32x (_Float32x __x) throw ();

extern _Float32x atanhf32x (_Float32x __x) throw (); extern _Float32x __atanhf32x (_Float32x __x) throw ();





 extern _Float32x expf32x (_Float32x __x) throw (); extern _Float32x __expf32x (_Float32x __x) throw ();


extern _Float32x frexpf32x (_Float32x __x, int *__exponent) throw (); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) throw ();


extern _Float32x ldexpf32x (_Float32x __x, int __exponent) throw (); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) throw ();


 extern _Float32x logf32x (_Float32x __x) throw (); extern _Float32x __logf32x (_Float32x __x) throw ();


extern _Float32x log10f32x (_Float32x __x) throw (); extern _Float32x __log10f32x (_Float32x __x) throw ();


extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) throw (); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern _Float32x exp10f32x (_Float32x __x) throw (); extern _Float32x __exp10f32x (_Float32x __x) throw ();




extern _Float32x expm1f32x (_Float32x __x) throw (); extern _Float32x __expm1f32x (_Float32x __x) throw ();


extern _Float32x log1pf32x (_Float32x __x) throw (); extern _Float32x __log1pf32x (_Float32x __x) throw ();


extern _Float32x logbf32x (_Float32x __x) throw (); extern _Float32x __logbf32x (_Float32x __x) throw ();




extern _Float32x exp2f32x (_Float32x __x) throw (); extern _Float32x __exp2f32x (_Float32x __x) throw ();


extern _Float32x log2f32x (_Float32x __x) throw (); extern _Float32x __log2f32x (_Float32x __x) throw ();






 extern _Float32x powf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) throw ();


extern _Float32x sqrtf32x (_Float32x __x) throw (); extern _Float32x __sqrtf32x (_Float32x __x) throw ();



extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) throw ();




extern _Float32x cbrtf32x (_Float32x __x) throw (); extern _Float32x __cbrtf32x (_Float32x __x) throw ();






extern _Float32x ceilf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) throw () __attribute__ ((__const__));


extern _Float32x fabsf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) throw () __attribute__ ((__const__));


extern _Float32x floorf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) throw () __attribute__ ((__const__));


extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) throw ();
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));




extern _Float32x nanf32x (const char *__tagb) throw (); extern _Float32x __nanf32x (const char *__tagb) throw ();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x j0f32x (_Float32x) throw (); extern _Float32x __j0f32x (_Float32x) throw ();
extern _Float32x j1f32x (_Float32x) throw (); extern _Float32x __j1f32x (_Float32x) throw ();
extern _Float32x jnf32x (int, _Float32x) throw (); extern _Float32x __jnf32x (int, _Float32x) throw ();
extern _Float32x y0f32x (_Float32x) throw (); extern _Float32x __y0f32x (_Float32x) throw ();
extern _Float32x y1f32x (_Float32x) throw (); extern _Float32x __y1f32x (_Float32x) throw ();
extern _Float32x ynf32x (int, _Float32x) throw (); extern _Float32x __ynf32x (int, _Float32x) throw ();





extern _Float32x erff32x (_Float32x) throw (); extern _Float32x __erff32x (_Float32x) throw ();
extern _Float32x erfcf32x (_Float32x) throw (); extern _Float32x __erfcf32x (_Float32x) throw ();
extern _Float32x lgammaf32x (_Float32x) throw (); extern _Float32x __lgammaf32x (_Float32x) throw ();




extern _Float32x tgammaf32x (_Float32x) throw (); extern _Float32x __tgammaf32x (_Float32x) throw ();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) throw (); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) throw ();






extern _Float32x rintf32x (_Float32x __x) throw (); extern _Float32x __rintf32x (_Float32x __x) throw ();


extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) throw ();






extern _Float32x nextdownf32x (_Float32x __x) throw (); extern _Float32x __nextdownf32x (_Float32x __x) throw ();

extern _Float32x nextupf32x (_Float32x __x) throw (); extern _Float32x __nextupf32x (_Float32x __x) throw ();



extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) throw ();



extern _Float32x scalbnf32x (_Float32x __x, int __n) throw (); extern _Float32x __scalbnf32x (_Float32x __x, int __n) throw ();



extern int ilogbf32x (_Float32x __x) throw (); extern int __ilogbf32x (_Float32x __x) throw ();




extern long int llogbf32x (_Float32x __x) throw (); extern long int __llogbf32x (_Float32x __x) throw ();




extern _Float32x scalblnf32x (_Float32x __x, long int __n) throw (); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) throw ();



extern _Float32x nearbyintf32x (_Float32x __x) throw (); extern _Float32x __nearbyintf32x (_Float32x __x) throw ();



extern _Float32x roundf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) throw () __attribute__ ((__const__));



extern _Float32x truncf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) throw () __attribute__ ((__const__));




extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw (); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) throw ();






extern long int lrintf32x (_Float32x __x) throw (); extern long int __lrintf32x (_Float32x __x) throw ();
__extension__
extern long long int llrintf32x (_Float32x __x) throw (); extern long long int __llrintf32x (_Float32x __x) throw ();



extern long int lroundf32x (_Float32x __x) throw (); extern long int __lroundf32x (_Float32x __x) throw ();
__extension__
extern long long int llroundf32x (_Float32x __x) throw (); extern long long int __llroundf32x (_Float32x __x) throw ();



extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) throw (); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) throw ();


extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));


extern _Float32x fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));


extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw (); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) throw ();




extern _Float32x roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) throw ();



extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));


extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) throw () __attribute__ ((__const__));


extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) throw ();




extern int totalorderf32x (const _Float32x *__x, const _Float32x *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagf32x (const _Float32x *__x, const _Float32x *__y) throw ()

     __attribute__ ((__pure__));


extern _Float32x getpayloadf32x (const _Float32x *__x) throw (); extern _Float32x __getpayloadf32x (const _Float32x *__x) throw ();


extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) throw ();


extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) throw ();
# 441 "/usr/include/math.h" 2 3 4
# 457 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x acosf64x (_Float64x __x) throw (); extern _Float64x __acosf64x (_Float64x __x) throw ();

extern _Float64x asinf64x (_Float64x __x) throw (); extern _Float64x __asinf64x (_Float64x __x) throw ();

extern _Float64x atanf64x (_Float64x __x) throw (); extern _Float64x __atanf64x (_Float64x __x) throw ();

extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) throw (); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) throw ();


 extern _Float64x cosf64x (_Float64x __x) throw (); extern _Float64x __cosf64x (_Float64x __x) throw ();

 extern _Float64x sinf64x (_Float64x __x) throw (); extern _Float64x __sinf64x (_Float64x __x) throw ();

extern _Float64x tanf64x (_Float64x __x) throw (); extern _Float64x __tanf64x (_Float64x __x) throw ();




extern _Float64x coshf64x (_Float64x __x) throw (); extern _Float64x __coshf64x (_Float64x __x) throw ();

extern _Float64x sinhf64x (_Float64x __x) throw (); extern _Float64x __sinhf64x (_Float64x __x) throw ();

extern _Float64x tanhf64x (_Float64x __x) throw (); extern _Float64x __tanhf64x (_Float64x __x) throw ();



 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw (); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) throw ();





extern _Float64x acoshf64x (_Float64x __x) throw (); extern _Float64x __acoshf64x (_Float64x __x) throw ();

extern _Float64x asinhf64x (_Float64x __x) throw (); extern _Float64x __asinhf64x (_Float64x __x) throw ();

extern _Float64x atanhf64x (_Float64x __x) throw (); extern _Float64x __atanhf64x (_Float64x __x) throw ();





 extern _Float64x expf64x (_Float64x __x) throw (); extern _Float64x __expf64x (_Float64x __x) throw ();


extern _Float64x frexpf64x (_Float64x __x, int *__exponent) throw (); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) throw ();


extern _Float64x ldexpf64x (_Float64x __x, int __exponent) throw (); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) throw ();


 extern _Float64x logf64x (_Float64x __x) throw (); extern _Float64x __logf64x (_Float64x __x) throw ();


extern _Float64x log10f64x (_Float64x __x) throw (); extern _Float64x __log10f64x (_Float64x __x) throw ();


extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) throw (); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) throw () __attribute__ ((__nonnull__ (2)));



extern _Float64x exp10f64x (_Float64x __x) throw (); extern _Float64x __exp10f64x (_Float64x __x) throw ();




extern _Float64x expm1f64x (_Float64x __x) throw (); extern _Float64x __expm1f64x (_Float64x __x) throw ();


extern _Float64x log1pf64x (_Float64x __x) throw (); extern _Float64x __log1pf64x (_Float64x __x) throw ();


extern _Float64x logbf64x (_Float64x __x) throw (); extern _Float64x __logbf64x (_Float64x __x) throw ();




extern _Float64x exp2f64x (_Float64x __x) throw (); extern _Float64x __exp2f64x (_Float64x __x) throw ();


extern _Float64x log2f64x (_Float64x __x) throw (); extern _Float64x __log2f64x (_Float64x __x) throw ();






 extern _Float64x powf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float64x sqrtf64x (_Float64x __x) throw (); extern _Float64x __sqrtf64x (_Float64x __x) throw ();



extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) throw ();




extern _Float64x cbrtf64x (_Float64x __x) throw (); extern _Float64x __cbrtf64x (_Float64x __x) throw ();






extern _Float64x ceilf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) throw () __attribute__ ((__const__));


extern _Float64x fabsf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) throw () __attribute__ ((__const__));


extern _Float64x floorf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) throw () __attribute__ ((__const__));


extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) throw ();
# 196 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));




extern _Float64x nanf64x (const char *__tagb) throw (); extern _Float64x __nanf64x (const char *__tagb) throw ();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x j0f64x (_Float64x) throw (); extern _Float64x __j0f64x (_Float64x) throw ();
extern _Float64x j1f64x (_Float64x) throw (); extern _Float64x __j1f64x (_Float64x) throw ();
extern _Float64x jnf64x (int, _Float64x) throw (); extern _Float64x __jnf64x (int, _Float64x) throw ();
extern _Float64x y0f64x (_Float64x) throw (); extern _Float64x __y0f64x (_Float64x) throw ();
extern _Float64x y1f64x (_Float64x) throw (); extern _Float64x __y1f64x (_Float64x) throw ();
extern _Float64x ynf64x (int, _Float64x) throw (); extern _Float64x __ynf64x (int, _Float64x) throw ();





extern _Float64x erff64x (_Float64x) throw (); extern _Float64x __erff64x (_Float64x) throw ();
extern _Float64x erfcf64x (_Float64x) throw (); extern _Float64x __erfcf64x (_Float64x) throw ();
extern _Float64x lgammaf64x (_Float64x) throw (); extern _Float64x __lgammaf64x (_Float64x) throw ();




extern _Float64x tgammaf64x (_Float64x) throw (); extern _Float64x __tgammaf64x (_Float64x) throw ();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) throw (); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) throw ();






extern _Float64x rintf64x (_Float64x __x) throw (); extern _Float64x __rintf64x (_Float64x __x) throw ();


extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) throw ();






extern _Float64x nextdownf64x (_Float64x __x) throw (); extern _Float64x __nextdownf64x (_Float64x __x) throw ();

extern _Float64x nextupf64x (_Float64x __x) throw (); extern _Float64x __nextupf64x (_Float64x __x) throw ();



extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) throw ();



extern _Float64x scalbnf64x (_Float64x __x, int __n) throw (); extern _Float64x __scalbnf64x (_Float64x __x, int __n) throw ();



extern int ilogbf64x (_Float64x __x) throw (); extern int __ilogbf64x (_Float64x __x) throw ();




extern long int llogbf64x (_Float64x __x) throw (); extern long int __llogbf64x (_Float64x __x) throw ();




extern _Float64x scalblnf64x (_Float64x __x, long int __n) throw (); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) throw ();



extern _Float64x nearbyintf64x (_Float64x __x) throw (); extern _Float64x __nearbyintf64x (_Float64x __x) throw ();



extern _Float64x roundf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) throw () __attribute__ ((__const__));



extern _Float64x truncf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) throw () __attribute__ ((__const__));




extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw (); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) throw ();






extern long int lrintf64x (_Float64x __x) throw (); extern long int __lrintf64x (_Float64x __x) throw ();
__extension__
extern long long int llrintf64x (_Float64x __x) throw (); extern long long int __llrintf64x (_Float64x __x) throw ();



extern long int lroundf64x (_Float64x __x) throw (); extern long int __lroundf64x (_Float64x __x) throw ();
__extension__
extern long long int llroundf64x (_Float64x __x) throw (); extern long long int __llroundf64x (_Float64x __x) throw ();



extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) throw (); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));


extern _Float64x fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));


extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw (); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) throw ();




extern _Float64x roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) throw () __attribute__ ((__const__));



extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ();




extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) throw ();





extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ();





extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw (); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) throw ();



extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));


extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) throw () __attribute__ ((__const__));


extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) throw ();




extern int totalorderf64x (const _Float64x *__x, const _Float64x *__y) throw ()

     __attribute__ ((__pure__));


extern int totalordermagf64x (const _Float64x *__x, const _Float64x *__y) throw ()

     __attribute__ ((__pure__));


extern _Float64x getpayloadf64x (const _Float64x *__x) throw (); extern _Float64x __getpayloadf64x (const _Float64x *__x) throw ();


extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) throw ();


extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) throw ();
# 458 "/usr/include/math.h" 2 3 4
# 503 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float fadd (double __x, double __y) throw ();


extern float fdiv (double __x, double __y) throw ();


extern float fmul (double __x, double __y) throw ();


extern float fsub (double __x, double __y) throw ();
# 504 "/usr/include/math.h" 2 3 4
# 517 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern float faddl (long double __x, long double __y) throw ();


extern float fdivl (long double __x, long double __y) throw ();


extern float fmull (long double __x, long double __y) throw ();


extern float fsubl (long double __x, long double __y) throw ();
# 518 "/usr/include/math.h" 2 3 4
# 537 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern double daddl (long double __x, long double __y) throw ();


extern double ddivl (long double __x, long double __y) throw ();


extern double dmull (long double __x, long double __y) throw ();


extern double dsubl (long double __x, long double __y) throw ();
# 538 "/usr/include/math.h" 2 3 4
# 616 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) throw ();


extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) throw ();


extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) throw ();


extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) throw ();
# 617 "/usr/include/math.h" 2 3 4
# 626 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) throw ();
# 627 "/usr/include/math.h" 2 3 4
# 636 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) throw ();
# 637 "/usr/include/math.h" 2 3 4
# 666 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) throw ();


extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) throw ();
# 667 "/usr/include/math.h" 2 3 4
# 676 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) throw ();
# 677 "/usr/include/math.h" 2 3 4
# 706 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/mathcalls-narrow.h" 3 4
extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) throw ();


extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) throw ();
# 707 "/usr/include/math.h" 2 3 4
# 773 "/usr/include/math.h" 3 4
extern int signgam;
# 853 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 973 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3 4
extern int __iscanonicall (long double __x)
     throw () __attribute__ ((__const__));
# 46 "/usr/include/x86_64-linux-gnu/bits/iscanonical.h" 3 4
extern "C++" {
inline int iscanonical (float __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (double __val) { return ((void) (__typeof (__val)) (__val), 1); }
inline int iscanonical (long double __val) { return __iscanonicall (__val); }



}
# 974 "/usr/include/math.h" 2 3 4
# 985 "/usr/include/math.h" 3 4
extern "C++" {
inline int issignaling (float __val) { return __issignalingf (__val); }
inline int issignaling (double __val) { return __issignaling (__val); }
inline int
issignaling (long double __val)
{



  return __issignalingl (__val);

}





}
# 1016 "/usr/include/math.h" 3 4
extern "C++" {
# 1047 "/usr/include/math.h" 3 4
template <class __T> inline bool
iszero (__T __val)
{
  return __val == 0;
}

}
# 1278 "/usr/include/math.h" 3 4
extern "C++" {
template<typename> struct __iseqsig_type;

template<> struct __iseqsig_type<float>
{
  static int __call (float __x, float __y) throw ()
  {
    return __iseqsigf (__x, __y);
  }
};

template<> struct __iseqsig_type<double>
{
  static int __call (double __x, double __y) throw ()
  {
    return __iseqsig (__x, __y);
  }
};

template<> struct __iseqsig_type<long double>
{
  static int __call (long double __x, long double __y) throw ()
  {

    return __iseqsigl (__x, __y);



  }
};
# 1321 "/usr/include/math.h" 3 4
template<typename _T1, typename _T2>
inline int
iseqsig (_T1 __x, _T2 __y) throw ()
{

  typedef decltype (((__x) + (__y) + 0.0f)) _T3;



  return __iseqsig_type<_T3>::__call (__x, __y);
}

}




}
# 46 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 2 3
# 77 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{



  inline constexpr double
  abs(double __x)
  { return __builtin_fabs(__x); }



  inline constexpr float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline constexpr long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::acos;


  inline constexpr float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline constexpr long double
  acos(long double __x)
  { return __builtin_acosl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }

  using ::asin;


  inline constexpr float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline constexpr long double
  asin(long double __x)
  { return __builtin_asinl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;


  inline constexpr float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline constexpr long double
  atan(long double __x)
  { return __builtin_atanl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;


  inline constexpr float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline constexpr long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }


  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;


  inline constexpr float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline constexpr long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;


  inline constexpr float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline constexpr long double
  cos(long double __x)
  { return __builtin_cosl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;


  inline constexpr float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline constexpr long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;


  inline constexpr float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline constexpr long double
  exp(long double __x)
  { return __builtin_expl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;


  inline constexpr float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline constexpr long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;


  inline constexpr float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline constexpr long double
  floor(long double __x)
  { return __builtin_floorl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;


  inline constexpr float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline constexpr long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }


  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }

  using ::frexp;


  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;


  inline constexpr float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline constexpr long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }

  using ::log;


  inline constexpr float
  log(float __x)
  { return __builtin_logf(__x); }

  inline constexpr long double
  log(long double __x)
  { return __builtin_logl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;


  inline constexpr float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline constexpr long double
  log10(long double __x)
  { return __builtin_log10l(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;


  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }


  using ::pow;


  inline constexpr float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline constexpr long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }
# 435 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;


  inline constexpr float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline constexpr long double
  sin(long double __x)
  { return __builtin_sinl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;


  inline constexpr float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline constexpr long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;


  inline constexpr float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline constexpr long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;


  inline constexpr float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline constexpr long double
  tan(long double __x)
  { return __builtin_tanl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;


  inline constexpr float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline constexpr long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }


  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }


}
# 559 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{





  constexpr int
  fpclassify(float __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }

  constexpr int
  fpclassify(double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }

  constexpr int
  fpclassify(long double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              int>::__type
    fpclassify(_Tp __x)
    { return __x != 0 ? 4 : 2; }


  constexpr bool
  isfinite(float __x)
  { return __builtin_isfinite(__x); }

  constexpr bool
  isfinite(double __x)
  { return __builtin_isfinite(__x); }

  constexpr bool
  isfinite(long double __x)
  { return __builtin_isfinite(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isfinite(_Tp __x)
    { return true; }


  constexpr bool
  isinf(float __x)
  { return __builtin_isinf(__x); }





  constexpr bool
  isinf(double __x)
  { return __builtin_isinf(__x); }


  constexpr bool
  isinf(long double __x)
  { return __builtin_isinf(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isinf(_Tp __x)
    { return false; }


  constexpr bool
  isnan(float __x)
  { return __builtin_isnan(__x); }





  constexpr bool
  isnan(double __x)
  { return __builtin_isnan(__x); }


  constexpr bool
  isnan(long double __x)
  { return __builtin_isnan(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnan(_Tp __x)
    { return false; }


  constexpr bool
  isnormal(float __x)
  { return __builtin_isnormal(__x); }

  constexpr bool
  isnormal(double __x)
  { return __builtin_isnormal(__x); }

  constexpr bool
  isnormal(long double __x)
  { return __builtin_isnormal(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnormal(_Tp __x)
    { return __x != 0 ? true : false; }



  constexpr bool
  signbit(float __x)
  { return __builtin_signbit(__x); }

  constexpr bool
  signbit(double __x)
  { return __builtin_signbit(__x); }

  constexpr bool
  signbit(long double __x)
  { return __builtin_signbit(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    signbit(_Tp __x)
    { return __x < 0 ? true : false; }


  constexpr bool
  isgreater(float __x, float __y)
  { return __builtin_isgreater(__x, __y); }

  constexpr bool
  isgreater(double __x, double __y)
  { return __builtin_isgreater(__x, __y); }

  constexpr bool
  isgreater(long double __x, long double __y)
  { return __builtin_isgreater(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreater(__type(__x), __type(__y));
    }


  constexpr bool
  isgreaterequal(float __x, float __y)
  { return __builtin_isgreaterequal(__x, __y); }

  constexpr bool
  isgreaterequal(double __x, double __y)
  { return __builtin_isgreaterequal(__x, __y); }

  constexpr bool
  isgreaterequal(long double __x, long double __y)
  { return __builtin_isgreaterequal(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreaterequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreaterequal(__type(__x), __type(__y));
    }


  constexpr bool
  isless(float __x, float __y)
  { return __builtin_isless(__x, __y); }

  constexpr bool
  isless(double __x, double __y)
  { return __builtin_isless(__x, __y); }

  constexpr bool
  isless(long double __x, long double __y)
  { return __builtin_isless(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isless(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isless(__type(__x), __type(__y));
    }


  constexpr bool
  islessequal(float __x, float __y)
  { return __builtin_islessequal(__x, __y); }

  constexpr bool
  islessequal(double __x, double __y)
  { return __builtin_islessequal(__x, __y); }

  constexpr bool
  islessequal(long double __x, long double __y)
  { return __builtin_islessequal(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessequal(__type(__x), __type(__y));
    }


  constexpr bool
  islessgreater(float __x, float __y)
  { return __builtin_islessgreater(__x, __y); }

  constexpr bool
  islessgreater(double __x, double __y)
  { return __builtin_islessgreater(__x, __y); }

  constexpr bool
  islessgreater(long double __x, long double __y)
  { return __builtin_islessgreater(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessgreater(__type(__x), __type(__y));
    }


  constexpr bool
  isunordered(float __x, float __y)
  { return __builtin_isunordered(__x, __y); }

  constexpr bool
  isunordered(double __x, double __y)
  { return __builtin_isunordered(__x, __y); }

  constexpr bool
  isunordered(long double __x, long double __y)
  { return __builtin_isunordered(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isunordered(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isunordered(__type(__x), __type(__y));
    }
# 957 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
}
# 1072 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  using ::double_t;
  using ::float_t;


  using ::acosh;
  using ::acoshf;
  using ::acoshl;

  using ::asinh;
  using ::asinhf;
  using ::asinhl;

  using ::atanh;
  using ::atanhf;
  using ::atanhl;

  using ::cbrt;
  using ::cbrtf;
  using ::cbrtl;

  using ::copysign;
  using ::copysignf;
  using ::copysignl;

  using ::erf;
  using ::erff;
  using ::erfl;

  using ::erfc;
  using ::erfcf;
  using ::erfcl;

  using ::exp2;
  using ::exp2f;
  using ::exp2l;

  using ::expm1;
  using ::expm1f;
  using ::expm1l;

  using ::fdim;
  using ::fdimf;
  using ::fdiml;

  using ::fma;
  using ::fmaf;
  using ::fmal;

  using ::fmax;
  using ::fmaxf;
  using ::fmaxl;

  using ::fmin;
  using ::fminf;
  using ::fminl;

  using ::hypot;
  using ::hypotf;
  using ::hypotl;

  using ::ilogb;
  using ::ilogbf;
  using ::ilogbl;

  using ::lgamma;
  using ::lgammaf;
  using ::lgammal;

  using ::llrint;
  using ::llrintf;
  using ::llrintl;

  using ::llround;
  using ::llroundf;
  using ::llroundl;

  using ::log1p;
  using ::log1pf;
  using ::log1pl;

  using ::log2;
  using ::log2f;
  using ::log2l;

  using ::logb;
  using ::logbf;
  using ::logbl;

  using ::lrint;
  using ::lrintf;
  using ::lrintl;

  using ::lround;
  using ::lroundf;
  using ::lroundl;

  using ::nan;
  using ::nanf;
  using ::nanl;

  using ::nearbyint;
  using ::nearbyintf;
  using ::nearbyintl;

  using ::nextafter;
  using ::nextafterf;
  using ::nextafterl;

  using ::nexttoward;
  using ::nexttowardf;
  using ::nexttowardl;

  using ::remainder;
  using ::remainderf;
  using ::remainderl;

  using ::remquo;
  using ::remquof;
  using ::remquol;

  using ::rint;
  using ::rintf;
  using ::rintl;

  using ::round;
  using ::roundf;
  using ::roundl;

  using ::scalbln;
  using ::scalblnf;
  using ::scalblnl;

  using ::scalbn;
  using ::scalbnf;
  using ::scalbnl;

  using ::tgamma;
  using ::tgammaf;
  using ::tgammal;

  using ::trunc;
  using ::truncf;
  using ::truncl;



  constexpr float
  acosh(float __x)
  { return __builtin_acoshf(__x); }

  constexpr long double
  acosh(long double __x)
  { return __builtin_acoshl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    acosh(_Tp __x)
    { return __builtin_acosh(__x); }


  constexpr float
  asinh(float __x)
  { return __builtin_asinhf(__x); }

  constexpr long double
  asinh(long double __x)
  { return __builtin_asinhl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    asinh(_Tp __x)
    { return __builtin_asinh(__x); }


  constexpr float
  atanh(float __x)
  { return __builtin_atanhf(__x); }

  constexpr long double
  atanh(long double __x)
  { return __builtin_atanhl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    atanh(_Tp __x)
    { return __builtin_atanh(__x); }


  constexpr float
  cbrt(float __x)
  { return __builtin_cbrtf(__x); }

  constexpr long double
  cbrt(long double __x)
  { return __builtin_cbrtl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    cbrt(_Tp __x)
    { return __builtin_cbrt(__x); }


  constexpr float
  copysign(float __x, float __y)
  { return __builtin_copysignf(__x, __y); }

  constexpr long double
  copysign(long double __x, long double __y)
  { return __builtin_copysignl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    copysign(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return copysign(__type(__x), __type(__y));
    }


  constexpr float
  erf(float __x)
  { return __builtin_erff(__x); }

  constexpr long double
  erf(long double __x)
  { return __builtin_erfl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erf(_Tp __x)
    { return __builtin_erf(__x); }


  constexpr float
  erfc(float __x)
  { return __builtin_erfcf(__x); }

  constexpr long double
  erfc(long double __x)
  { return __builtin_erfcl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erfc(_Tp __x)
    { return __builtin_erfc(__x); }


  constexpr float
  exp2(float __x)
  { return __builtin_exp2f(__x); }

  constexpr long double
  exp2(long double __x)
  { return __builtin_exp2l(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    exp2(_Tp __x)
    { return __builtin_exp2(__x); }


  constexpr float
  expm1(float __x)
  { return __builtin_expm1f(__x); }

  constexpr long double
  expm1(long double __x)
  { return __builtin_expm1l(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    expm1(_Tp __x)
    { return __builtin_expm1(__x); }


  constexpr float
  fdim(float __x, float __y)
  { return __builtin_fdimf(__x, __y); }

  constexpr long double
  fdim(long double __x, long double __y)
  { return __builtin_fdiml(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fdim(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fdim(__type(__x), __type(__y));
    }


  constexpr float
  fma(float __x, float __y, float __z)
  { return __builtin_fmaf(__x, __y, __z); }

  constexpr long double
  fma(long double __x, long double __y, long double __z)
  { return __builtin_fmal(__x, __y, __z); }


  template<typename _Tp, typename _Up, typename _Vp>
    constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    fma(_Tp __x, _Up __y, _Vp __z)
    {
      typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
      return fma(__type(__x), __type(__y), __type(__z));
    }


  constexpr float
  fmax(float __x, float __y)
  { return __builtin_fmaxf(__x, __y); }

  constexpr long double
  fmax(long double __x, long double __y)
  { return __builtin_fmaxl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmax(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmax(__type(__x), __type(__y));
    }


  constexpr float
  fmin(float __x, float __y)
  { return __builtin_fminf(__x, __y); }

  constexpr long double
  fmin(long double __x, long double __y)
  { return __builtin_fminl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmin(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmin(__type(__x), __type(__y));
    }


  constexpr float
  hypot(float __x, float __y)
  { return __builtin_hypotf(__x, __y); }

  constexpr long double
  hypot(long double __x, long double __y)
  { return __builtin_hypotl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    hypot(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return hypot(__type(__x), __type(__y));
    }


  constexpr int
  ilogb(float __x)
  { return __builtin_ilogbf(__x); }

  constexpr int
  ilogb(long double __x)
  { return __builtin_ilogbl(__x); }


  template<typename _Tp>
    constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    int>::__type
    ilogb(_Tp __x)
    { return __builtin_ilogb(__x); }


  constexpr float
  lgamma(float __x)
  { return __builtin_lgammaf(__x); }

  constexpr long double
  lgamma(long double __x)
  { return __builtin_lgammal(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    lgamma(_Tp __x)
    { return __builtin_lgamma(__x); }


  constexpr long long
  llrint(float __x)
  { return __builtin_llrintf(__x); }

  constexpr long long
  llrint(long double __x)
  { return __builtin_llrintl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llrint(_Tp __x)
    { return __builtin_llrint(__x); }


  constexpr long long
  llround(float __x)
  { return __builtin_llroundf(__x); }

  constexpr long long
  llround(long double __x)
  { return __builtin_llroundl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llround(_Tp __x)
    { return __builtin_llround(__x); }


  constexpr float
  log1p(float __x)
  { return __builtin_log1pf(__x); }

  constexpr long double
  log1p(long double __x)
  { return __builtin_log1pl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log1p(_Tp __x)
    { return __builtin_log1p(__x); }



  constexpr float
  log2(float __x)
  { return __builtin_log2f(__x); }

  constexpr long double
  log2(long double __x)
  { return __builtin_log2l(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log2(_Tp __x)
    { return __builtin_log2(__x); }


  constexpr float
  logb(float __x)
  { return __builtin_logbf(__x); }

  constexpr long double
  logb(long double __x)
  { return __builtin_logbl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    logb(_Tp __x)
    { return __builtin_logb(__x); }


  constexpr long
  lrint(float __x)
  { return __builtin_lrintf(__x); }

  constexpr long
  lrint(long double __x)
  { return __builtin_lrintl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lrint(_Tp __x)
    { return __builtin_lrint(__x); }


  constexpr long
  lround(float __x)
  { return __builtin_lroundf(__x); }

  constexpr long
  lround(long double __x)
  { return __builtin_lroundl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lround(_Tp __x)
    { return __builtin_lround(__x); }


  constexpr float
  nearbyint(float __x)
  { return __builtin_nearbyintf(__x); }

  constexpr long double
  nearbyint(long double __x)
  { return __builtin_nearbyintl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nearbyint(_Tp __x)
    { return __builtin_nearbyint(__x); }


  constexpr float
  nextafter(float __x, float __y)
  { return __builtin_nextafterf(__x, __y); }

  constexpr long double
  nextafter(long double __x, long double __y)
  { return __builtin_nextafterl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    nextafter(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return nextafter(__type(__x), __type(__y));
    }


  constexpr float
  nexttoward(float __x, long double __y)
  { return __builtin_nexttowardf(__x, __y); }

  constexpr long double
  nexttoward(long double __x, long double __y)
  { return __builtin_nexttowardl(__x, __y); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nexttoward(_Tp __x, long double __y)
    { return __builtin_nexttoward(__x, __y); }


  constexpr float
  remainder(float __x, float __y)
  { return __builtin_remainderf(__x, __y); }

  constexpr long double
  remainder(long double __x, long double __y)
  { return __builtin_remainderl(__x, __y); }


  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remainder(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remainder(__type(__x), __type(__y));
    }


  inline float
  remquo(float __x, float __y, int* __pquo)
  { return __builtin_remquof(__x, __y, __pquo); }

  inline long double
  remquo(long double __x, long double __y, int* __pquo)
  { return __builtin_remquol(__x, __y, __pquo); }


  template<typename _Tp, typename _Up>
    inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remquo(_Tp __x, _Up __y, int* __pquo)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remquo(__type(__x), __type(__y), __pquo);
    }


  constexpr float
  rint(float __x)
  { return __builtin_rintf(__x); }

  constexpr long double
  rint(long double __x)
  { return __builtin_rintl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    rint(_Tp __x)
    { return __builtin_rint(__x); }


  constexpr float
  round(float __x)
  { return __builtin_roundf(__x); }

  constexpr long double
  round(long double __x)
  { return __builtin_roundl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    round(_Tp __x)
    { return __builtin_round(__x); }


  constexpr float
  scalbln(float __x, long __ex)
  { return __builtin_scalblnf(__x, __ex); }

  constexpr long double
  scalbln(long double __x, long __ex)
  { return __builtin_scalblnl(__x, __ex); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbln(_Tp __x, long __ex)
    { return __builtin_scalbln(__x, __ex); }


  constexpr float
  scalbn(float __x, int __ex)
  { return __builtin_scalbnf(__x, __ex); }

  constexpr long double
  scalbn(long double __x, int __ex)
  { return __builtin_scalbnl(__x, __ex); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbn(_Tp __x, int __ex)
    { return __builtin_scalbn(__x, __ex); }


  constexpr float
  tgamma(float __x)
  { return __builtin_tgammaf(__x); }

  constexpr long double
  tgamma(long double __x)
  { return __builtin_tgammal(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    tgamma(_Tp __x)
    { return __builtin_tgamma(__x); }


  constexpr float
  trunc(float __x)
  { return __builtin_truncf(__x); }

  constexpr long double
  trunc(long double __x)
  { return __builtin_truncl(__x); }


  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    trunc(_Tp __x)
    { return __builtin_trunc(__x); }


}
# 1797 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/cmath" 3
}
# 37 "/tools/Xilinx/Vitis_HLS/2021.1/tps/lnx64/gcc-6.2.0/lib/gcc/x86_64-pc-linux-gnu/6.2.0/../../../../include/c++/6.2.0/math.h" 2 3

using std::abs;
using std::acos;
using std::asin;
using std::atan;
using std::atan2;
using std::cos;
using std::sin;
using std::tan;
using std::cosh;
using std::sinh;
using std::tanh;
using std::exp;
using std::frexp;
using std::ldexp;
using std::log;
using std::log10;
using std::modf;
using std::pow;
using std::sqrt;
using std::ceil;
using std::fabs;
using std::floor;
using std::fmod;


using std::fpclassify;
using std::isfinite;
using std::isinf;
using std::isnan;
using std::isnormal;
using std::signbit;
using std::isgreater;
using std::isgreaterequal;
using std::isless;
using std::islessequal;
using std::islessgreater;
using std::isunordered;



using std::acosh;
using std::asinh;
using std::atanh;
using std::cbrt;
using std::copysign;
using std::erf;
using std::erfc;
using std::exp2;
using std::expm1;
using std::fdim;
using std::fma;
using std::fmax;
using std::fmin;
using std::hypot;
using std::ilogb;
using std::lgamma;
using std::llrint;
using std::llround;
using std::log1p;
using std::log2;
using std::logb;
using std::lrint;
using std::lround;
using std::nearbyint;
using std::nextafter;
using std::nexttoward;
using std::remainder;
using std::remquo;
using std::rint;
using std::round;
using std::scalbln;
using std::scalbn;
using std::tgamma;
using std::trunc;
# 3 "cordiccart2pol.cpp" 2

void init_cart2pol_LUTs(data_t my_LUT_th[(1 << (8 << 1))], data_t my_LUT_r[(1 << (8 << 1))])
{

 float step = 0.5/8 -2;
 int num_steps = (int) 2/step;

 float min_theta, max_theta = 0;
 float min_r, max_r = 0;


 VITIS_LOOP_14_1: for(int i=0; i<(1 << (8 << 1)); i++){
  ap_uint<2*8> index = i;
  ap_fixed<8, 2, AP_RND, AP_WRAP, 1> fixed_x;
  ap_fixed<8, 2, AP_RND, AP_WRAP, 1> fixed_y;

  VITIS_LOOP_19_2: for(int j = 0; j < 8; j++)
   {
    fixed_x[8 -1-j] = index[2*8 -1-j];
    fixed_y[8 -1-j] = index[8 -1-j];
   }

  float _x = fixed_x;
  float _y = fixed_y;

  if((_x == 0) & (_y == 0)){
   my_LUT_th[index] = 0;
   my_LUT_r[index] = 0;
  }
  else{
   my_LUT_th[index] = atan2f(_y, _x);
   my_LUT_r[index] = sqrtf((_y*_y)+(_x*_x));
  }
 }
}

__attribute__((sdx_kernel("cordiccart2pol", 0))) void cordiccart2pol(data_t x, data_t y, data_t * r, data_t * theta)
{
#pragma HLS TOP name=cordiccart2pol
# 40 "cordiccart2pol.cpp"


 data_t my_LUT_th[(1 << (8 << 1))] = {0};
 data_t my_LUT_r[(1 << (8 << 1))] = {0};



 ap_fixed<8, 2, AP_RND, AP_WRAP, 1> fixed_x = x;
 ap_fixed<8, 2, AP_RND, AP_WRAP, 1> fixed_y = y;


 ap_uint<2*8> index;


 VITIS_LOOP_54_1: for(int i = 0; i < 8; i++)
 {
#pragma HLS UNROLL
 index[2*8 -1-i] = fixed_x[8 -1-i];
  index[8 -1-i] = fixed_y[8 -1-i];
 }


 *r = my_LUT_r[index];
 *theta = my_LUT_th[index];
}
