#line 1 "fibonacci.cc"
#ifndef __ac_FIRST__root_examples_fibonacci__
#define __ac_FIRST__root_examples_fibonacci__
#define __ac_FIRST_FILE__root_examples_fibonacci_fibonacci_cc__
#ifndef __ac_have_predefined_includes__
#define __ac_have_predefined_includes__
#endif // __ac_have_predefined_includes__
#endif // __ac_FIRST__root_examples_fibonacci__
#line 10 "fibonacci_monitored.cc"

#ifndef __ac_fwd_ASM__
#define __ac_fwd_ASM__
class ASM;
namespace AC {
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a0_before (JoinPoint *tjp);
  template <class JoinPoint>
  __attribute((always_inline)) inline void invoke_ASM_ASM__a1_before (JoinPoint *tjp);
}
#endif

#ifndef __ac_need__root_examples_fibonacci_fibonacci_cc_bGX0Jv_ah__
#define __ac_need__root_examples_fibonacci_fibonacci_cc_bGX0Jv_ah__
#endif

#line 1 "fibonacci.cc"

#line 1 "fibonacci.cc"
#line 30 "fibonacci_monitored.cc"
class ASM;

#line 1 "fibonacci.cc"
#line 34 "fibonacci_monitored.cc"

#ifndef __ac_h_
#define __ac_h_
#ifdef __cplusplus
namespace AC {
  typedef const char* Type;
  enum JPType { CALL = 262144, EXECUTION = 16777216, CONSTRUCTION = 33554432, DESTRUCTION = 67108864 };
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

#line 1 "fibonacci.cc"

#line 1 "fibonacci.cc"
#include <cstdio>
#include <cstdlib>

#line 108 "fibonacci_monitored.cc"

__attribute__((always_inline)) inline int __exec_old_fibonacci_impl(int a,int b,int c);

template <typename TResult, typename TThat, typename TTarget, typename TEntity, typename TArgs> struct TJP__Z14fibonacci_impliii_0 {
  typedef TJP__Z14fibonacci_impliii_0 __TJP;
  typedef TResult Result;
  typedef TThat   That;
  typedef TTarget Target;
  typedef TEntity Entity;
  enum { DIMS = 0 };
  typedef void * MemberPtr;
  enum { ARGS = TArgs::ARGS };
  template <int I> struct Arg : AC::Arg<TArgs, I> {};
  static const AC::JPType JPTYPE = (AC::JPType)16777216;
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
  template <int DUMMY> struct Arg<2, DUMMY> {
    static typename TJP::template Arg<2>::ReferredType &val (TJP *tjp) { return *tjp->template arg<2> (); }
  };
};
};


#line 4 "fibonacci.cc"

#line 4 "fibonacci.cc"
int fibonacci_impl(int a, int b, int c) 
#line 157 "fibonacci_monitored.cc"
{
  typedef TJP__Z14fibonacci_impliii_0< int, void, void, int (int,int,int),  AC::TL< int, AC::TL< int, AC::TL< int, AC::TLE > > > > __TJP;
  int __result_buffer;
  __TJP tjp;
  tjp._args[0] = (void*)&a;
  tjp._args[1] = (void*)&b;
  tjp._args[2] = (void*)&c;
  AC::invoke_ASM_ASM__a1_before<__TJP> (&tjp);
  __result_buffer = ::__exec_old_fibonacci_impl(a, b, c);
  return (int &)__result_buffer;

}
__attribute__((always_inline)) inline int __exec_old_fibonacci_impl(int a,int b,int c)
#line 4 "fibonacci.cc"

#line 4 "fibonacci.cc"
{
  if (c == 0) {
    return b;
  } else {
    return fibonacci_impl(b, a + b, c - 1);
  }
}

#line 182 "fibonacci_monitored.cc"

__attribute__((always_inline)) inline int __exec_old_fibonacci(int i);

template <typename TResult, typename TThat, typename TTarget, typename TEntity, typename TArgs> struct TJP__Z9fibonaccii_0 {
  typedef TJP__Z9fibonaccii_0 __TJP;
  typedef TResult Result;
  typedef TThat   That;
  typedef TTarget Target;
  typedef TEntity Entity;
  enum { DIMS = 0 };
  typedef void * MemberPtr;
  enum { ARGS = TArgs::ARGS };
  template <int I> struct Arg : AC::Arg<TArgs, I> {};
  static const AC::JPType JPTYPE = (AC::JPType)16777216;
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


#line 12 "fibonacci.cc"

#line 12 "fibonacci.cc"
int fibonacci(int i) 
#line 225 "fibonacci_monitored.cc"
{
  typedef TJP__Z9fibonaccii_0< int, void, void, int (int),  AC::TL< int, AC::TLE > > __TJP;
  int __result_buffer;
  __TJP tjp;
  tjp._args[0] = (void*)&i;
  AC::invoke_ASM_ASM__a0_before<__TJP> (&tjp);
  __result_buffer = ::__exec_old_fibonacci(i);
  return (int &)__result_buffer;

}
__attribute__((always_inline)) inline int __exec_old_fibonacci(int i)
#line 12 "fibonacci.cc"

#line 12 "fibonacci.cc"
{
  return fibonacci_impl(0, 1, i);
}

int main(int argc, char *argv[])
{
  int n;
  if (argc > 1) {
    n = atoi(argv[1]);
  }
  printf("%d\n", fibonacci(n));
  return 0;
}
#line 253 "fibonacci_monitored.cc"

#ifndef __ac_have_predefined_includes__
/*** begin of aspect includes ***/
 /* commented-out by ac++ include expander: #include "fibonacci.cc.bGX0Jv.ah" */ 
/*** end of aspect includes ***/
#endif
#line 25 "fibonacci.cc"

#line 25 "fibonacci.cc"

#ifdef __ac_FIRST_FILE__root_examples_fibonacci_fibonacci_cc__
#ifdef __ac_need__root_examples_fibonacci_fibonacci_cc_bGX0Jv_ah__
#ifndef __ac_have__root_examples_fibonacci_fibonacci_cc_bGX0Jv_ah__
#define __ac_have__root_examples_fibonacci_fibonacci_cc_bGX0Jv_ah__
 /* commented-out by ac++ include expander: #include "fibonacci.cc.bGX0Jv.ah" */ 
#line 1 "fibonacci.cc.bGX0Jv.ah"
#include <iostream>

class ASM {
#line 273 "fibonacci_monitored.cc"
public:
  template <typename, int = 0> struct __BYPASSASM {};
  template <typename, int> friend struct __BYPASSASM;
private:
#line 3 "./fibonacci.cc.bGX0Jv.ah"

#line 3 "fibonacci.cc.bGX0Jv.ah"

   
#line 283 "fibonacci_monitored.cc"

public: void __a0_before 
#line 4 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 4 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"
( int i) {
    std::cout << "ASM: fibonacci " << ", i: " << i << std::endl;
  }
#line 292 "fibonacci_monitored.cc"

private:

#line 6 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 6 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"


   
#line 302 "fibonacci_monitored.cc"

public: void __a1_before 
#line 8 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 8 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"
( int a,  int b,  int c) {
    std::cout << "ASM: fibonacci_impl " << ", a: " << a << ", b: " << b << ", c: " << c << std::endl;
  }
#line 311 "fibonacci_monitored.cc"

private:

#line 10 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 10 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"


#line 320 "fibonacci_monitored.cc"

public:
  static ASM *aspectof () {
    static ASM __instance;
    return &__instance;
  }
  static ASM *aspectOf () {
    return aspectof ();
  }
private:

#line 12 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 12 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"
}
#line 336 "fibonacci_monitored.cc"
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
    typedef typename JoinPoint::Binding_ASM_ASM__a1_before::template Arg<2> Arg2;
    ::ASM::aspectof()->__a1_before ((int)Arg0::val (tjp), (int)Arg1::val (tjp), (int)Arg2::val (tjp));
  }
} 

#line 12 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"

#line 12 "/root/examples/fibonacci/fibonacci.cc.bGX0Jv.ah"
;
#line 31 "fibonacci.cc"
#endif
#endif
#undef __ac_FIRST__root_examples_fibonacci__
#undef __ac_FIRST_FILE__root_examples_fibonacci_fibonacci_cc__
#endif // __ac_FIRST_FILE__root_examples_fibonacci_fibonacci_cc__
