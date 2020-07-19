#line 1 "sum.cc"
#ifndef __ac_FIRST__home_calros_asmcX43X43_examples_sum_multiple__
#define __ac_FIRST__home_calros_asmcX43X43_examples_sum_multiple__
#define __ac_FIRST_FILE__home_calros_asmcX43X43_examples_sum_multiple_sum_cc__
#ifndef __ac_have_predefined_includes__
#define __ac_have_predefined_includes__
#endif // __ac_have_predefined_includes__
#endif // __ac_FIRST__home_calros_asmcX43X43_examples_sum_multiple__
#line 10 "sum_monitored.cc"
class ASM;

#line 1 "sum.cc"
#line 14 "sum_monitored.cc"

#ifndef __ac_h_
#define __ac_h_
#ifdef __cplusplus
namespace AC {
  typedef const char* Type;
  enum JPType { CALL = 131072, EXECUTION = 8388608, CONSTRUCTION = 16777216, DESTRUCTION = 33554432 };
  enum Protection { PROT_NONE, PROT_PRIVATE, PROT_PROTECTED, PROT_PUBLIC };
  enum Specifiers { SPEC_NONE = 0x0 , SPEC_STATIC = 0x1, SPEC_MUTABLE = 0x2, SPEC_VIRTUAL = 0x4 };
  struct Action {
    void **_args; void *_result; void *_entity; void *_target; void *_that; void *_fptr;
    void (*_wrapper)(Action &);
    inline void trigger () { _wrapper (*this); }
  };
  struct AnyResultBuffer {};
  template <typename T> struct ResultBuffer : public AnyResultBuffer {
    struct { char _array[sizeof (T)]; } _data;
    ~ResultBuffer () { ((T&)_data).T::~T(); }
    operator T& () const { return (T&)_data; }
  };
  template <typename T, typename N> struct TL {
    typedef T type; typedef N next; enum { ARGS = next::ARGS + 1 };
  };
  struct TLE { enum { ARGS = 0 }; };
  template <typename T> struct Referred { typedef T type; };
  template <typename T> struct Referred<T &> { typedef T type; };
  template <typename TL, int I> struct Arg {
    typedef typename Arg<typename TL::next, I - 1>::Type Type;
    typedef typename Referred<Type>::type ReferredType;
  };
  template <typename TL> struct Arg<TL, 0> {
    typedef typename TL::type Type;
    typedef typename Referred<Type>::type ReferredType;
  };
  template <typename T> int ttest(...);
  template <typename T> char ttest(typename T::__TI const volatile *);
  template<typename T> struct HasTypeInfo {
    enum { RET=((sizeof(ttest<T>(0))==1)?1:0) };
  };
  template<typename T, int HAVE = HasTypeInfo<T>::RET> struct TypeInfo {
    enum { AVAILABLE = 0, BASECLASSES = 0, MEMBERS = 0, FUNCTIONS = 0,
           CONSTRUCTORS = 0, DESTRUCTORS = 0 };
    typedef T That;
  };
  template<typename T> struct TypeInfo<T, 1> : T::__TI {
    enum { AVAILABLE = 1 };
  };
  template<typename T> struct RT {};
  template<typename T> RT<T> rt_deduce (const T&) { return RT<T>(); }
  struct Cnv { template<typename T> operator RT<T>() const { return RT<T>(); }};
  #define __AC_TYPEOF(expr) (1?AC::Cnv():AC::rt_deduce(expr))
  template <class Aspect, int Index>
  struct CFlow {
    static int &instance () {
      static int counter = 0;
      return counter;
    }
    CFlow () { instance ()++; }
    ~CFlow () { instance ()--; }
    static bool active () { return instance () > 0; }
  };
}
inline void * operator new (long unsigned int, AC::AnyResultBuffer *p) { return p; }
inline void operator delete (void *, AC::AnyResultBuffer *) { } // for VC++
#endif // __cplusplus
#endif // __ac_h_

#line 1 "sum.cc"

#line 1 "sum.cc"
#include <cstdio>
 /* commented-out by ac++ include expander: #include "sum.hh" */ 
#line 1 "./sum.hh"
#line 88 "sum_monitored.cc"

#ifndef __ac_fwd_ASM__
#define __ac_fwd_ASM__
class ASM;
namespace AC {
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a0_before (JoinPoint *tjp);
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a1_before (JoinPoint *tjp);
  __attribute((always_inline)) inline void invoke_ASM_ASM__a2_before ();
}
#endif

#ifndef __ac_need__home_calros_asmcX43X43_examples_sum_multiple_sum_cc_glEdmg_ah__
#define __ac_need__home_calros_asmcX43X43_examples_sum_multiple_sum_cc_glEdmg_ah__
#endif

#line 1 "./sum.hh"

#line 1 "./sum.hh"
class Sum {
#line 110 "sum_monitored.cc"
public:
  template <typename, int = 0> struct __BYPASSSum {};
  template <typename, int> friend struct __BYPASSSum;
private:
#line 1 "./sum.hh"

#line 1 "./sum.hh"

private:
  int sum;
public:
  Sum();
  
#line 124 "sum_monitored.cc"
public: __attribute__((always_inline)) inline void __exec_old_add(int i);

#line 6 "./sum.hh"

#line 6 "./sum.hh"
void add(int i);
  
#line 132 "sum_monitored.cc"
public: __attribute__((always_inline)) inline void __exec_old_add2(int i,int j);

#line 7 "./sum.hh"

#line 7 "./sum.hh"
void add2(int i, int j);
  
#line 140 "sum_monitored.cc"
public: __attribute__((always_inline)) inline void __exec_old_print();

#line 8 "./sum.hh"

#line 8 "./sum.hh"
void print();
#line 147 "sum_monitored.cc"

  friend class ::ASM;

#line 9 "./sum.hh"

#line 9 "./sum.hh"
};
#line 3 "sum.cc"

Sum::Sum() {
  sum = 0;
}
#line 160 "sum_monitored.cc"


template <typename TResult, typename TThat, typename TTarget, typename TEntity, typename TArgs> struct TJP__ZN3Sum3addEi_0 {
  typedef TJP__ZN3Sum3addEi_0 __TJP;
  typedef TResult Result;
  typedef TThat   That;
  typedef TTarget Target;
  typedef TEntity Entity;
  enum { DIMS = 0 };
  typedef TEntity TTarget::* MemberPtr;
  enum { ARGS = TArgs::ARGS };
  template <int I> struct Arg : AC::Arg<TArgs, I> {};
  static const AC::JPType JPTYPE = (AC::JPType)8388608;
  struct Res {
    typedef TResult Type;
    typedef TResult ReferredType;
  };

  void *_args[ARGS];

  inline void * arg (int n) {return _args[n];}
  template <int I> typename Arg<I>::ReferredType *arg () {
    return (typename Arg<I>::ReferredType*)arg (I);
  }

struct Binding_ASM_ASM__a0_before {
  typedef __TJP TJP;
  template <int I, int DUMMY = 0> struct Arg {
    void val (TJP *tjp) {} // for VC7
  };
  template <int DUMMY> struct Arg<0, DUMMY> {
    static typename TJP::template Arg<0>::ReferredType &val (TJP *tjp) { return *tjp->template arg<0> (); }
  };
};
};


#line 7 "sum.cc"

#line 7 "sum.cc"
void Sum::add(int i) 
#line 202 "sum_monitored.cc"
{
  typedef TJP__ZN3Sum3addEi_0< void, ::Sum, ::Sum, void (int),  AC::TL< int, AC::TLE > > __TJP;
    __TJP tjp;
  tjp._args[0] = (void*)&i;
  AC::invoke_ASM_ASM__a0_before<__TJP> (&tjp);
  this->__exec_old_add(i);
  
}
__attribute__((always_inline)) inline void Sum::__exec_old_add(int i)
#line 7 "sum.cc"

#line 7 "sum.cc"
{
  sum += i;
}
#line 218 "sum_monitored.cc"


template <typename TResult, typename TThat, typename TTarget, typename TEntity, typename TArgs> struct TJP__ZN3Sum4add2Eii_0 {
  typedef TJP__ZN3Sum4add2Eii_0 __TJP;
  typedef TResult Result;
  typedef TThat   That;
  typedef TTarget Target;
  typedef TEntity Entity;
  enum { DIMS = 0 };
  typedef TEntity TTarget::* MemberPtr;
  enum { ARGS = TArgs::ARGS };
  template <int I> struct Arg : AC::Arg<TArgs, I> {};
  static const AC::JPType JPTYPE = (AC::JPType)8388608;
  struct Res {
    typedef TResult Type;
    typedef TResult ReferredType;
  };

  void *_args[ARGS];

  inline void * arg (int n) {return _args[n];}
  template <int I> typename Arg<I>::ReferredType *arg () {
    return (typename Arg<I>::ReferredType*)arg (I);
  }

struct Binding_ASM_ASM__a1_before {
  typedef __TJP TJP;
  template <int I, int DUMMY = 0> struct Arg {
    void val (TJP *tjp) {} // for VC7
  };
  template <int DUMMY> struct Arg<0, DUMMY> {
    static typename TJP::template Arg<0>::ReferredType &val (TJP *tjp) { return *tjp->template arg<0> (); }
  };
  template <int DUMMY> struct Arg<1, DUMMY> {
    static typename TJP::template Arg<1>::ReferredType &val (TJP *tjp) { return *tjp->template arg<1> (); }
  };
};
};


#line 10 "sum.cc"

#line 10 "sum.cc"
void Sum::add2(int i, int j) 
#line 263 "sum_monitored.cc"
{
  typedef TJP__ZN3Sum4add2Eii_0< void, ::Sum, ::Sum, void (int, int),  AC::TL< int, AC::TL< int, AC::TLE > > > __TJP;
    __TJP tjp;
  tjp._args[0] = (void*)&i;
  tjp._args[1] = (void*)&j;
  AC::invoke_ASM_ASM__a1_before<__TJP> (&tjp);
  this->__exec_old_add2(i, j);
  
}
__attribute__((always_inline)) inline void Sum::__exec_old_add2(int i,int j)
#line 10 "sum.cc"

#line 10 "sum.cc"
{
  sum += i;
}
void Sum::print() 
#line 281 "sum_monitored.cc"
{
    AC::invoke_ASM_ASM__a2_before ();
  this->__exec_old_print();
  
}
__attribute__((always_inline)) inline void Sum::__exec_old_print()
#line 13 "sum.cc"

#line 13 "sum.cc"
{
  printf("%d\n", sum);
}
#line 294 "sum_monitored.cc"

#ifndef __ac_have_predefined_includes__
/*** begin of aspect includes ***/
 /* commented-out by ac++ include expander: #include "sum.cc.glEdmg.ah" */ 
/*** end of aspect includes ***/
#endif
#line 16 "sum.cc"

#line 16 "sum.cc"

#ifdef __ac_FIRST_FILE__home_calros_asmcX43X43_examples_sum_multiple_sum_cc__
#ifdef __ac_need__home_calros_asmcX43X43_examples_sum_multiple_sum_cc_glEdmg_ah__
#ifndef __ac_have__home_calros_asmcX43X43_examples_sum_multiple_sum_cc_glEdmg_ah__
#define __ac_have__home_calros_asmcX43X43_examples_sum_multiple_sum_cc_glEdmg_ah__
 /* commented-out by ac++ include expander: #include "sum.cc.glEdmg.ah" */ 
#line 1 "sum.cc.glEdmg.ah"
#include <cstdio>

class ASM {
#line 314 "sum_monitored.cc"
public:
  template <typename, int = 0> struct __BYPASSASM {};
  template <typename, int> friend struct __BYPASSASM;
private:
#line 3 "./sum.cc.glEdmg.ah"

#line 3 "sum.cc.glEdmg.ah"

   
#line 324 "sum_monitored.cc"

public: void __a0_before 
#line 4 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 4 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"
( int i) {
    printf("ASM: Sum::add , i: %d\n", i);
  }
#line 333 "sum_monitored.cc"

private:

#line 6 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 6 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"


   
#line 343 "sum_monitored.cc"

public: void __a1_before 
#line 8 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 8 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"
( int i,  int j) {
    printf("ASM: Sum::add2 , i: %d, j: %d\n", i, j);
  }
#line 352 "sum_monitored.cc"

private:

#line 10 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 10 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"


   
#line 362 "sum_monitored.cc"

public: void __a2_before 
#line 12 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 12 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"
() {
    printf("ASM: Sum::print \n");
  }
#line 371 "sum_monitored.cc"

private:

#line 14 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 14 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"


#line 380 "sum_monitored.cc"

public:
  static ASM *aspectof () {
    static ASM __instance;
    return &__instance;
  }
  static ASM *aspectOf () {
    return aspectof ();
  }
private:

#line 16 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 16 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"
}
#line 396 "sum_monitored.cc"
;
namespace AC {
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a0_before (JoinPoint *tjp) {
    typedef typename JoinPoint::Binding_ASM_ASM__a0_before::template Arg<0> Arg0;
    ::ASM::aspectof()->__a0_before ((int)Arg0::val (tjp));
  }
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a1_before (JoinPoint *tjp) {
    typedef typename JoinPoint::Binding_ASM_ASM__a1_before::template Arg<0> Arg0;
    typedef typename JoinPoint::Binding_ASM_ASM__a1_before::template Arg<1> Arg1;
    ::ASM::aspectof()->__a1_before ((int)Arg0::val (tjp), (int)Arg1::val (tjp));
  }
  __attribute((always_inline)) inline void invoke_ASM_ASM__a2_before () {
    ::ASM::aspectof()->__a2_before ();
  }
} 

#line 16 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"

#line 16 "/home/calros/asmc++/examples/sum_multiple/sum.cc.glEdmg.ah"
;
#line 22 "sum.cc"
#endif
#endif
#undef __ac_FIRST__home_calros_asmcX43X43_examples_sum_multiple__
#undef __ac_FIRST_FILE__home_calros_asmcX43X43_examples_sum_multiple_sum_cc__
#endif // __ac_FIRST_FILE__home_calros_asmcX43X43_examples_sum_multiple_sum_cc__
