// math_fwd.hpp

// TODO revise completely for new distribution classes.

// Copyright Paul A. Bristow 2006.
// Copyright John Maddock 2006.

// Use, modification and distribution are subject to the
// Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt
// or copy at http://www.boost.org/LICENSE_1_0.txt)

// Omnibus list of forward declarations of math special functions.

// IT = Integer type.
// RT = Real type (built-in floating-point types, float, double, long double) & User Defined Types
// AT = Integer or Real type 

#ifndef BOOST_MATH_SPECIAL_MATH_FWD_HPP
#define BOOST_MATH_SPECIAL_MATH_FWD_HPP

#ifdef _MSC_VER
#pragma once
#endif

#include <boost/math/special_functions/detail/round_fwd.hpp>
#include <boost/math/tools/promotion.hpp> // for argument promotion.
#include <boost/math/policies/policy.hpp>
#include <boost/mpl/comparison.hpp>
#include <boost/config/no_tr1/complex.hpp>
#include <complex>

#define BOOST_NO_MACRO_EXPAND /**/

namespace riakboost
{
   namespace math
   { // Math functions (in roughly alphabetic order).

   // Beta functions.
   template <class RT1, class RT2>
   typename tools::promote_args<RT1, RT2>::type 
         beta(RT1 a, RT2 b); // Beta function (2 arguments).

   template <class RT1, class RT2, class A>
   typename tools::promote_args<RT1, RT2, A>::type 
         beta(RT1 a, RT2 b, A x); // Beta function (3 arguments).

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         beta(RT1 a, RT2 b, RT3 x, const Policy& pol); // Beta function (3 arguments).

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         betac(RT1 a, RT2 b, RT3 x);

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         betac(RT1 a, RT2 b, RT3 x, const Policy& pol);

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta(RT1 a, RT2 b, RT3 x); // Incomplete beta function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta(RT1 a, RT2 b, RT3 x, const Policy& pol); // Incomplete beta function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac(RT1 a, RT2 b, RT3 x); // Incomplete beta complement function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac(RT1 a, RT2 b, RT3 x, const Policy& pol); // Incomplete beta complement function.

   template <class T1, class T2, class T3, class T4>
   typename tools::promote_args<T1, T2, T3, T4>::type  
         ibeta_inv(T1 a, T2 b, T3 p, T4* py);

   template <class T1, class T2, class T3, class T4, class Policy>
   typename tools::promote_args<T1, T2, T3, T4>::type  
         ibeta_inv(T1 a, T2 b, T3 p, T4* py, const Policy& pol);

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_inv(RT1 a, RT2 b, RT3 p); // Incomplete beta inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_inv(RT1 a, RT2 b, RT3 p, const Policy&); // Incomplete beta inverse function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_inva(RT1 a, RT2 b, RT3 p); // Incomplete beta inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_inva(RT1 a, RT2 b, RT3 p, const Policy&); // Incomplete beta inverse function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_invb(RT1 a, RT2 b, RT3 p); // Incomplete beta inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_invb(RT1 a, RT2 b, RT3 p, const Policy&); // Incomplete beta inverse function.

   template <class T1, class T2, class T3, class T4>
   typename tools::promote_args<T1, T2, T3, T4>::type 
         ibetac_inv(T1 a, T2 b, T3 q, T4* py);

   template <class T1, class T2, class T3, class T4, class Policy>
   typename tools::promote_args<T1, T2, T3, T4>::type 
         ibetac_inv(T1 a, T2 b, T3 q, T4* py, const Policy& pol);

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_inv(RT1 a, RT2 b, RT3 q); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_inv(RT1 a, RT2 b, RT3 q, const Policy&); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_inva(RT1 a, RT2 b, RT3 q); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_inva(RT1 a, RT2 b, RT3 q, const Policy&); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_invb(RT1 a, RT2 b, RT3 q); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibetac_invb(RT1 a, RT2 b, RT3 q, const Policy&); // Incomplete beta complement inverse function.

   template <class RT1, class RT2, class RT3>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_derivative(RT1 a, RT2 b, RT3 x);  // derivative of incomplete beta

   template <class RT1, class RT2, class RT3, class Policy>
   typename tools::promote_args<RT1, RT2, RT3>::type 
         ibeta_derivative(RT1 a, RT2 b, RT3 x, const Policy& pol);  // derivative of incomplete beta

   // erf & erfc error functions.
   template <class RT> // Error function.
   typename tools::promote_args<RT>::type erf(RT z);
   template <class RT, class Policy> // Error function.
   typename tools::promote_args<RT>::type erf(RT z, const Policy&);

   template <class RT>// Error function complement.
   typename tools::promote_args<RT>::type erfc(RT z);
   template <class RT, class Policy>// Error function complement.
   typename tools::promote_args<RT>::type erfc(RT z, const Policy&);

   template <class RT>// Error function inverse.
   typename tools::promote_args<RT>::type erf_inv(RT z);
   template <class RT, class Policy>// Error function inverse.
   typename tools::promote_args<RT>::type erf_inv(RT z, const Policy& pol);

   template <class RT>// Error function complement inverse.
   typename tools::promote_args<RT>::type erfc_inv(RT z);
   template <class RT, class Policy>// Error function complement inverse.
   typename tools::promote_args<RT>::type erfc_inv(RT z, const Policy& pol);

   // Polynomials:
   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type 
         legendre_next(unsigned l, T1 x, T2 Pl, T3 Plm1);

   template <class T>
   typename tools::promote_args<T>::type 
         legendre_p(int l, T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type 
         legendre_p(int l, T x, const Policy& pol);

   template <class T>
   typename tools::promote_args<T>::type 
         legendre_q(unsigned l, T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type 
         legendre_q(unsigned l, T x, const Policy& pol);

   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type 
         legendre_next(unsigned l, unsigned m, T1 x, T2 Pl, T3 Plm1);

   template <class T>
   typename tools::promote_args<T>::type 
         legendre_p(int l, int m, T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type 
         legendre_p(int l, int m, T x, const Policy& pol);

   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type  
         laguerre_next(unsigned n, T1 x, T2 Ln, T3 Lnm1);

   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type  
      laguerre_next(unsigned n, unsigned l, T1 x, T2 Pl, T3 Plm1);

   template <class T>
   typename tools::promote_args<T>::type 
      laguerre(unsigned n, T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type 
      laguerre(unsigned n, unsigned m, T x, const Policy& pol);

   template <class T1, class T2>
   struct laguerre_result
   {
      typedef typename mpl::if_<
         policies::is_policy<T2>,
         typename tools::promote_args<T1>::type,
         typename tools::promote_args<T2>::type
      >::type type;
   };

   template <class T1, class T2>
   typename laguerre_result<T1, T2>::type 
      laguerre(unsigned n, T1 m, T2 x);

   template <class T>
   typename tools::promote_args<T>::type 
      hermite(unsigned n, T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type 
      hermite(unsigned n, T x, const Policy& pol);

   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type 
      hermite_next(unsigned n, T1 x, T2 Hn, T3 Hnm1);

   template <class T1, class T2>
   std::complex<typename tools::promote_args<T1, T2>::type> 
         spherical_harmonic(unsigned n, int m, T1 theta, T2 phi);

   template <class T1, class T2, class Policy>
   std::complex<typename tools::promote_args<T1, T2>::type> 
      spherical_harmonic(unsigned n, int m, T1 theta, T2 phi, const Policy& pol);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type 
         spherical_harmonic_r(unsigned n, int m, T1 theta, T2 phi);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type 
      spherical_harmonic_r(unsigned n, int m, T1 theta, T2 phi, const Policy& pol);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type 
         spherical_harmonic_i(unsigned n, int m, T1 theta, T2 phi);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type 
      spherical_harmonic_i(unsigned n, int m, T1 theta, T2 phi, const Policy& pol);

   // Elliptic integrals:
   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type 
         ellint_rf(T1 x, T2 y, T3 z);

   template <class T1, class T2, class T3, class Policy>
   typename tools::promote_args<T1, T2, T3>::type 
         ellint_rf(T1 x, T2 y, T3 z, const Policy& pol);

   template <class T1, class T2, class T3>
   typename tools::promote_args<T1, T2, T3>::type 
         ellint_rd(T1 x, T2 y, T3 z);

   template <class T1, class T2, class T3, class Policy>
   typename tools::promote_args<T1, T2, T3>::type 
         ellint_rd(T1 x, T2 y, T3 z, const Policy& pol);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type 
         ellint_rc(T1 x, T2 y);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type 
         ellint_rc(T1 x, T2 y, const Policy& pol);

   template <class T1, class T2, class T3, class T4>
   typename tools::promote_args<T1, T2, T3, T4>::type 
         ellint_rj(T1 x, T2 y, T3 z, T4 p);

   template <class T1, class T2, class T3, class T4, class Policy>
   typename tools::promote_args<T1, T2, T3, T4>::type 
         ellint_rj(T1 x, T2 y, T3 z, T4 p, const Policy& pol);

   template <typename T>
   typename tools::promote_args<T>::type ellint_2(T k);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type ellint_2(T1 k, T2 phi);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type ellint_2(T1 k, T2 phi, const Policy& pol);

   template <typename T>
   typename tools::promote_args<T>::type ellint_1(T k);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type ellint_1(T1 k, T2 phi);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type ellint_1(T1 k, T2 phi, const Policy& pol);

   namespace detail{

   template <class T, class U, class V>
   struct ellint_3_result
   {
      typedef typename mpl::if_<
         policies::is_policy<V>,
         typename tools::promote_args<T, U>::type,
         typename tools::promote_args<T, U, V>::type
      >::type type;
   };

   } // namespace detail


   template <class T1, class T2, class T3>
   typename detail::ellint_3_result<T1, T2, T3>::type ellint_3(T1 k, T2 v, T3 phi);

   template <class T1, class T2, class T3, class Policy>
   typename tools::promote_args<T1, T2, T3>::type ellint_3(T1 k, T2 v, T3 phi, const Policy& pol);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type ellint_3(T1 k, T2 v);

   // Factorial functions.
   // Note: not for integral types, at present.
   template <class RT>
   struct max_factorial;
   template <class RT>
   RT factorial(unsigned int);
   template <class RT, class Policy>
   RT factorial(unsigned int, const Policy& pol);
   template <class RT>
   RT unchecked_factorial(unsigned int BOOST_MATH_APPEND_EXPLICIT_TEMPLATE_TYPE(RT)); 
   template <class RT>
   RT double_factorial(unsigned i);
   template <class RT, class Policy>
   RT double_factorial(unsigned i, const Policy& pol);

   template <class RT>
   typename tools::promote_args<RT>::type falling_factorial(RT x, unsigned n);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type falling_factorial(RT x, unsigned n, const Policy& pol);

   template <class RT>
   typename tools::promote_args<RT>::type rising_factorial(RT x, int n);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type rising_factorial(RT x, int n, const Policy& pol);

   // Gamma functions.
   template <class RT>
   typename tools::promote_args<RT>::type tgamma(RT z);

   template <class RT>
   typename tools::promote_args<RT>::type tgamma1pm1(RT z);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type tgamma1pm1(RT z, const Policy& pol);

   template <class RT1, class RT2>
   typename tools::promote_args<RT1, RT2>::type tgamma(RT1 a, RT2 z);

   template <class RT1, class RT2, class Policy>
   typename tools::promote_args<RT1, RT2>::type tgamma(RT1 a, RT2 z, const Policy& pol);

   template <class RT>
   typename tools::promote_args<RT>::type lgamma(RT z, int* sign);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type lgamma(RT z, int* sign, const Policy& pol);

   template <class RT>
   typename tools::promote_args<RT>::type lgamma(RT x);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type lgamma(RT x, const Policy& pol);

   template <class RT1, class RT2>
   typename tools::promote_args<RT1, RT2>::type tgamma_lower(RT1 a, RT2 z);

   template <class RT1, class RT2, class Policy>
   typename tools::promote_args<RT1, RT2>::type tgamma_lower(RT1 a, RT2 z, const Policy&);

   template <class RT1, class RT2>
   typename tools::promote_args<RT1, RT2>::type gamma_q(RT1 a, RT2 z);

   template <class RT1, class RT2, class Policy>
   typename tools::promote_args<RT1, RT2>::type gamma_q(RT1 a, RT2 z, const Policy&);

   template <class RT1, class RT2>
   typename tools::promote_args<RT1, RT2>::type gamma_p(RT1 a, RT2 z);

   template <class RT1, class RT2, class Policy>
   typename tools::promote_args<RT1, RT2>::type gamma_p(RT1 a, RT2 z, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type tgamma_delta_ratio(T1 z, T2 delta);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type tgamma_delta_ratio(T1 z, T2 delta, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type tgamma_ratio(T1 a, T2 b);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type tgamma_ratio(T1 a, T2 b, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type gamma_p_derivative(T1 a, T2 x);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type gamma_p_derivative(T1 a, T2 x, const Policy&);

   // gamma inverse.
   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type gamma_p_inv(T1 a, T2 p);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type gamma_p_inva(T1 a, T2 p, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type gamma_p_inva(T1 a, T2 p);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type gamma_p_inv(T1 a, T2 p, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type gamma_q_inv(T1 a, T2 q);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type gamma_q_inv(T1 a, T2 q, const Policy&);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type gamma_q_inva(T1 a, T2 q);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type gamma_q_inva(T1 a, T2 q, const Policy&);

   // digamma:
   template <class T>
   typename tools::promote_args<T>::type digamma(T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type digamma(T x, const Policy&);

   // Hypotenuse function sqrt(x ^ 2 + y ^ 2).
   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type 
         hypot(T1 x, T2 y);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type 
         hypot(T1 x, T2 y, const Policy&);

   // cbrt - cube root.
   template <class RT>
   typename tools::promote_args<RT>::type cbrt(RT z);

   template <class RT, class Policy>
   typename tools::promote_args<RT>::type cbrt(RT z, const Policy&);

   // log1p is log(x + 1)
   template <class T>
   typename tools::promote_args<T>::type log1p(T);

   template <class T, class Policy>
   typename tools::promote_args<T>::type log1p(T, const Policy&);

   // log1pmx is log(x + 1) - x
   template <class T>
   typename tools::promote_args<T>::type log1pmx(T);

   template <class T, class Policy>
   typename tools::promote_args<T>::type log1pmx(T, const Policy&);

   // Exp (x) minus 1 functions.
   template <class T>
   typename tools::promote_args<T>::type expm1(T);

   template <class T, class Policy>
   typename tools::promote_args<T>::type expm1(T, const Policy&);

   // Power - 1
   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type 
         powm1(const T1 a, const T2 z);

   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type 
         powm1(const T1 a, const T2 z, const Policy&);

   // sqrt(1+x) - 1
   template <class T>
   typename tools::promote_args<T>::type sqrt1pm1(const T& val);

   template <class T, class Policy>
   typename tools::promote_args<T>::type sqrt1pm1(const T& val, const Policy&);

   // sinus cardinals:
   template <class T>
   typename tools::promote_args<T>::type sinc_pi(T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type sinc_pi(T x, const Policy&);

   template <class T>
   typename tools::promote_args<T>::type sinhc_pi(T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type sinhc_pi(T x, const Policy&);

   // inverse hyperbolics:
   template<typename T>
   typename tools::promote_args<T>::type asinh(T x);

   template<typename T, class Policy>
   typename tools::promote_args<T>::type asinh(T x, const Policy&);

   template<typename T>
   typename tools::promote_args<T>::type acosh(T x);

   template<typename T, class Policy>
   typename tools::promote_args<T>::type acosh(T x, const Policy&);

   template<typename T>
   typename tools::promote_args<T>::type atanh(T x);

   template<typename T, class Policy>
   typename tools::promote_args<T>::type atanh(T x, const Policy&);

   namespace detail{

      typedef mpl::int_<0> bessel_no_int_tag;      // No integer optimisation possible.
      typedef mpl::int_<1> bessel_maybe_int_tag;   // Maybe integer optimisation.
      typedef mpl::int_<2> bessel_int_tag;         // Definite integer optimistaion.

      template <class T1, class T2, class Policy>
      struct bessel_traits
      {
         typedef typename tools::promote_args<
            T1, T2
         >::type result_type;

         typedef typename policies::precision<result_type, Policy>::type precision_type;

         typedef typename mpl::if_<
            mpl::or_<
               mpl::less_equal<precision_type, mpl::int_<0> >,
               mpl::greater<precision_type, mpl::int_<64> > >,
            bessel_no_int_tag,
            typename mpl::if_<
               is_integral<T1>,
               bessel_int_tag,
               bessel_maybe_int_tag
            >::type
         >::type optimisation_tag;
      };
   } // detail

   // Bessel functions:
   template <class T1, class T2, class Policy>
   typename detail::bessel_traits<T1, T2, Policy>::result_type cyl_bessel_j(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type cyl_bessel_j(T1 v, T2 x);

   template <class T, class Policy>
   typename detail::bessel_traits<T, T, Policy>::result_type sph_bessel(unsigned v, T x, const Policy& pol);

   template <class T>
   typename detail::bessel_traits<T, T, policies::policy<> >::result_type sph_bessel(unsigned v, T x);

   template <class T1, class T2, class Policy>
   typename detail::bessel_traits<T1, T2, Policy>::result_type cyl_bessel_i(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type cyl_bessel_i(T1 v, T2 x);

   template <class T1, class T2, class Policy>
   typename detail::bessel_traits<T1, T2, Policy>::result_type cyl_bessel_k(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type cyl_bessel_k(T1 v, T2 x);

   template <class T1, class T2, class Policy>
   typename detail::bessel_traits<T1, T2, Policy>::result_type cyl_neumann(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type cyl_neumann(T1 v, T2 x);

   template <class T, class Policy>
   typename detail::bessel_traits<T, T, Policy>::result_type sph_neumann(unsigned v, T x, const Policy& pol);

   template <class T>
   typename detail::bessel_traits<T, T, policies::policy<> >::result_type sph_neumann(unsigned v, T x);

   template <class T1, class T2, class Policy>
   std::complex<typename detail::bessel_traits<T1, T2, Policy>::result_type> cyl_hankel_1(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   std::complex<typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type> cyl_hankel_1(T1 v, T2 x);

   template <class T1, class T2, class Policy>
   std::complex<typename detail::bessel_traits<T1, T2, Policy>::result_type> cyl_hankel_2(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   std::complex<typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type> cyl_hankel_2(T1 v, T2 x);

   template <class T1, class T2, class Policy>
   std::complex<typename detail::bessel_traits<T1, T2, Policy>::result_type> sph_hankel_1(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   std::complex<typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type> sph_hankel_1(T1 v, T2 x);

   template <class T1, class T2, class Policy>
   std::complex<typename detail::bessel_traits<T1, T2, Policy>::result_type> sph_hankel_2(T1 v, T2 x, const Policy& pol);

   template <class T1, class T2>
   std::complex<typename detail::bessel_traits<T1, T2, policies::policy<> >::result_type> sph_hankel_2(T1 v, T2 x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type sin_pi(T x, const Policy&);

   template <class T>
   typename tools::promote_args<T>::type sin_pi(T x);

   template <class T, class Policy>
   typename tools::promote_args<T>::type cos_pi(T x, const Policy&);

   template <class T>
   typename tools::promote_args<T>::type cos_pi(T x);

   template <class T>
   int fpclassify BOOST_NO_MACRO_EXPAND(T t);

   template <class T>
   bool isfinite BOOST_NO_MACRO_EXPAND(T z);

   template <class T>
   bool isinf BOOST_NO_MACRO_EXPAND(T t);

   template <class T>
   bool isnan BOOST_NO_MACRO_EXPAND(T t);

   template <class T>
   bool isnormal BOOST_NO_MACRO_EXPAND(T t);

   template<class T> 
   int signbit BOOST_NO_MACRO_EXPAND(T x);

   template <class T>
   int sign BOOST_NO_MACRO_EXPAND(const T& z);

   template <class T>
   T copysign BOOST_NO_MACRO_EXPAND(const T& x, const T& y);

   template <class T>
   T changesign BOOST_NO_MACRO_EXPAND(const T& z);

   // Exponential integrals:
   namespace detail{

   template <class T, class U>
   struct expint_result
   {
      typedef typename mpl::if_<
         policies::is_policy<U>,
         typename tools::promote_args<T>::type,
         typename tools::promote_args<U>::type
      >::type type;
   };

   } // namespace detail

   template <class T, class Policy>
   typename tools::promote_args<T>::type expint(unsigned n, T z, const Policy&);

   template <class T, class U>
   typename detail::expint_result<T, U>::type expint(T const z, U const u);

   template <class T>
   typename tools::promote_args<T>::type expint(T z);

   // Zeta:
   template <class T, class Policy>
   typename tools::promote_args<T>::type zeta(T s, const Policy&);

   // Owen's T function:
   template <class T1, class T2, class Policy>
   typename tools::promote_args<T1, T2>::type owens_t(T1 h, T2 a, const Policy& pol);

   template <class T1, class T2>
   typename tools::promote_args<T1, T2>::type owens_t(T1 h, T2 a);

   template <class T>
   typename tools::promote_args<T>::type zeta(T s);

   // pow:
   template <int N, typename T, class Policy>
   typename tools::promote_args<T>::type pow(T base, const Policy& policy);

   template <int N, typename T>
   typename tools::promote_args<T>::type pow(T base);

   // next:
   template <class T, class Policy>
   T nextafter(const T&, const T&, const Policy&);
   template <class T>
   T nextafter(const T&, const T&);
   template <class T, class Policy>
   T float_next(const T&, const Policy&);
   template <class T>
   T float_next(const T&);
   template <class T, class Policy>
   T float_prior(const T&, const Policy&);
   template <class T>
   T float_prior(const T&);
   template <class T, class Policy>
   T float_distance(const T&, const T&, const Policy&);
   template <class T>
   T float_distance(const T&, const T&);

    } // namespace math
} // namespace riakboost

#ifdef BOOST_HAS_LONG_LONG
#define BOOST_MATH_DETAIL_LL_FUNC(Policy)\
   \
   template <class T>\
   inline T modf(const T& v, riakboost::long_long_type* ipart){ using riakboost::math::modf; return modf(v, ipart, Policy()); }\
   \
   template <class T>\
   inline riakboost::long_long_type lltrunc(const T& v){ using riakboost::math::lltrunc; return lltrunc(v, Policy()); }\
   \
   template <class T>\
   inline riakboost::long_long_type llround(const T& v){ using riakboost::math::llround; return llround(v, Policy()); }\

#else
#define BOOST_MATH_DETAIL_LL_FUNC(Policy)
#endif

#define BOOST_MATH_DECLARE_SPECIAL_FUNCTIONS(Policy)\
   \
   BOOST_MATH_DETAIL_LL_FUNC(Policy)\
   \
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type \
   beta(RT1 a, RT2 b) { return ::riakboost::math::beta(a, b, Policy()); }\
\
   template <class RT1, class RT2, class A>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, A>::type \
   beta(RT1 a, RT2 b, A x){ return ::riakboost::math::beta(a, b, x, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   betac(RT1 a, RT2 b, RT3 x) { return ::riakboost::math::betac(a, b, x, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibeta(RT1 a, RT2 b, RT3 x){ return ::riakboost::math::ibeta(a, b, x, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibetac(RT1 a, RT2 b, RT3 x){ return ::riakboost::math::ibetac(a, b, x, Policy()); }\
\
   template <class T1, class T2, class T3, class T4>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3, T4>::type  \
   ibeta_inv(T1 a, T2 b, T3 p, T4* py){ return ::riakboost::math::ibeta_inv(a, b, p, py, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibeta_inv(RT1 a, RT2 b, RT3 p){ return ::riakboost::math::ibeta_inv(a, b, p, Policy()); }\
\
   template <class T1, class T2, class T3, class T4>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3, T4>::type \
   ibetac_inv(T1 a, T2 b, T3 q, T4* py){ return ::riakboost::math::ibetac_inv(a, b, q, py, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibeta_inva(RT1 a, RT2 b, RT3 p){ return ::riakboost::math::ibeta_inva(a, b, p, Policy()); }\
\
   template <class T1, class T2, class T3>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3>::type \
   ibetac_inva(T1 a, T2 b, T3 q){ return ::riakboost::math::ibetac_inva(a, b, q, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibeta_invb(RT1 a, RT2 b, RT3 p){ return ::riakboost::math::ibeta_invb(a, b, p, Policy()); }\
\
   template <class T1, class T2, class T3>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3>::type \
   ibetac_invb(T1 a, T2 b, T3 q){ return ::riakboost::math::ibetac_invb(a, b, q, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibetac_inv(RT1 a, RT2 b, RT3 q){ return ::riakboost::math::ibetac_inv(a, b, q, Policy()); }\
\
   template <class RT1, class RT2, class RT3>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2, RT3>::type \
   ibeta_derivative(RT1 a, RT2 b, RT3 x){ return ::riakboost::math::ibeta_derivative(a, b, x, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type erf(RT z) { return ::riakboost::math::erf(z, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type erfc(RT z){ return ::riakboost::math::erfc(z, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type erf_inv(RT z) { return ::riakboost::math::erf_inv(z, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type erfc_inv(RT z){ return ::riakboost::math::erfc_inv(z, Policy()); }\
\
   using riakboost::math::legendre_next;\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type \
   legendre_p(int l, T x){ return ::riakboost::math::legendre_p(l, x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type \
   legendre_q(unsigned l, T x){ return ::riakboost::math::legendre_q(l, x, Policy()); }\
\
   using ::riakboost::math::legendre_next;\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type \
   legendre_p(int l, int m, T x){ return ::riakboost::math::legendre_p(l, m, x, Policy()); }\
\
   using ::riakboost::math::laguerre_next;\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type \
   laguerre(unsigned n, T x){ return ::riakboost::math::laguerre(n, x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::laguerre_result<T1, T2>::type \
   laguerre(unsigned n, T1 m, T2 x) { return ::riakboost::math::laguerre(n, m, x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type \
   hermite(unsigned n, T x){ return ::riakboost::math::hermite(n, x, Policy()); }\
\
   using riakboost::math::hermite_next;\
\
   template <class T1, class T2>\
   inline std::complex<typename riakboost::math::tools::promote_args<T1, T2>::type> \
   spherical_harmonic(unsigned n, int m, T1 theta, T2 phi){ return riakboost::math::spherical_harmonic(n, m, theta, phi, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
   spherical_harmonic_r(unsigned n, int m, T1 theta, T2 phi){ return ::riakboost::math::spherical_harmonic_r(n, m, theta, phi, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
   spherical_harmonic_i(unsigned n, int m, T1 theta, T2 phi){ return riakboost::math::spherical_harmonic_i(n, m, theta, phi, Policy()); }\
\
   template <class T1, class T2, class Policy>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
      spherical_harmonic_i(unsigned n, int m, T1 theta, T2 phi, const Policy& pol);\
\
   template <class T1, class T2, class T3>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3>::type \
   ellint_rf(T1 x, T2 y, T3 z){ return ::riakboost::math::ellint_rf(x, y, z, Policy()); }\
\
   template <class T1, class T2, class T3>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3>::type \
   ellint_rd(T1 x, T2 y, T3 z){ return ::riakboost::math::ellint_rd(x, y, z, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
   ellint_rc(T1 x, T2 y){ return ::riakboost::math::ellint_rc(x, y, Policy()); }\
\
   template <class T1, class T2, class T3, class T4>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3, T4>::type \
   ellint_rj(T1 x, T2 y, T3 z, T4 p){ return riakboost::math::ellint_rj(x, y, z, p, Policy()); }\
\
   template <typename T>\
   inline typename riakboost::math::tools::promote_args<T>::type ellint_2(T k){ return riakboost::math::ellint_2(k, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type ellint_2(T1 k, T2 phi){ return riakboost::math::ellint_2(k, phi, Policy()); }\
\
   template <typename T>\
   inline typename riakboost::math::tools::promote_args<T>::type ellint_1(T k){ return riakboost::math::ellint_1(k, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type ellint_1(T1 k, T2 phi){ return riakboost::math::ellint_1(k, phi, Policy()); }\
\
   template <class T1, class T2, class T3>\
   inline typename riakboost::math::tools::promote_args<T1, T2, T3>::type ellint_3(T1 k, T2 v, T3 phi){ return riakboost::math::ellint_3(k, v, phi, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type ellint_3(T1 k, T2 v){ return riakboost::math::ellint_3(k, v, Policy()); }\
\
   using riakboost::math::max_factorial;\
   template <class RT>\
   inline RT factorial(unsigned int i) { return riakboost::math::factorial<RT>(i, Policy()); }\
   using riakboost::math::unchecked_factorial;\
   template <class RT>\
   inline RT double_factorial(unsigned i){ return riakboost::math::double_factorial<RT>(i, Policy()); }\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type falling_factorial(RT x, unsigned n){ return riakboost::math::falling_factorial(x, n, Policy()); }\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type rising_factorial(RT x, unsigned n){ return riakboost::math::rising_factorial(x, n, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type tgamma(RT z){ return riakboost::math::tgamma(z, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type tgamma1pm1(RT z){ return riakboost::math::tgamma1pm1(z, Policy()); }\
\
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type tgamma(RT1 a, RT2 z){ return riakboost::math::tgamma(a, z, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type lgamma(RT z, int* sign){ return riakboost::math::lgamma(z, sign, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type lgamma(RT x){ return riakboost::math::lgamma(x, Policy()); }\
\
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type tgamma_lower(RT1 a, RT2 z){ return riakboost::math::tgamma_lower(a, z, Policy()); }\
\
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type gamma_q(RT1 a, RT2 z){ return riakboost::math::gamma_q(a, z, Policy()); }\
\
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type gamma_p(RT1 a, RT2 z){ return riakboost::math::gamma_p(a, z, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type tgamma_delta_ratio(T1 z, T2 delta){ return riakboost::math::tgamma_delta_ratio(z, delta, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type tgamma_ratio(T1 a, T2 b) { return riakboost::math::tgamma_ratio(a, b, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type gamma_p_derivative(T1 a, T2 x){ return riakboost::math::gamma_p_derivative(a, x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type gamma_p_inv(T1 a, T2 p){ return riakboost::math::gamma_p_inv(a, p, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type gamma_p_inva(T1 a, T2 p){ return riakboost::math::gamma_p_inva(a, p, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type gamma_q_inv(T1 a, T2 q){ return riakboost::math::gamma_q_inv(a, q, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type gamma_q_inva(T1 a, T2 q){ return riakboost::math::gamma_q_inva(a, q, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type digamma(T x){ return riakboost::math::digamma(x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
   hypot(T1 x, T2 y){ return riakboost::math::hypot(x, y, Policy()); }\
\
   template <class RT>\
   inline typename riakboost::math::tools::promote_args<RT>::type cbrt(RT z){ return riakboost::math::cbrt(z, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type log1p(T x){ return riakboost::math::log1p(x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type log1pmx(T x){ return riakboost::math::log1pmx(x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type expm1(T x){ return riakboost::math::expm1(x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::tools::promote_args<T1, T2>::type \
   powm1(const T1 a, const T2 z){ return riakboost::math::powm1(a, z, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type sqrt1pm1(const T& val){ return riakboost::math::sqrt1pm1(val, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type sinc_pi(T x){ return riakboost::math::sinc_pi(x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type sinhc_pi(T x){ return riakboost::math::sinhc_pi(x, Policy()); }\
\
   template<typename T>\
   inline typename riakboost::math::tools::promote_args<T>::type asinh(const T x){ return riakboost::math::asinh(x, Policy()); }\
\
   template<typename T>\
   inline typename riakboost::math::tools::promote_args<T>::type acosh(const T x){ return riakboost::math::acosh(x, Policy()); }\
\
   template<typename T>\
   inline typename riakboost::math::tools::promote_args<T>::type atanh(const T x){ return riakboost::math::atanh(x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type cyl_bessel_j(T1 v, T2 x)\
   { return riakboost::math::cyl_bessel_j(v, x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::detail::bessel_traits<T, T, Policy >::result_type sph_bessel(unsigned v, T x)\
   { return riakboost::math::sph_bessel(v, x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type \
   cyl_bessel_i(T1 v, T2 x) { return riakboost::math::cyl_bessel_i(v, x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type \
   cyl_bessel_k(T1 v, T2 x) { return riakboost::math::cyl_bessel_k(v, x, Policy()); }\
\
   template <class T1, class T2>\
   inline typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type \
   cyl_neumann(T1 v, T2 x){ return riakboost::math::cyl_neumann(v, x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::detail::bessel_traits<T, T, Policy >::result_type \
   sph_neumann(unsigned v, T x){ return riakboost::math::sph_neumann(v, x, Policy()); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type sin_pi(T x){ return riakboost::math::sin_pi(x); }\
\
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type cos_pi(T x){ return riakboost::math::cos_pi(x); }\
\
   using riakboost::math::fpclassify;\
   using riakboost::math::isfinite;\
   using riakboost::math::isinf;\
   using riakboost::math::isnan;\
   using riakboost::math::isnormal;\
   using riakboost::math::signbit;\
   using riakboost::math::sign;\
   using riakboost::math::copysign;\
   using riakboost::math::changesign;\
   \
   template <class T, class U>\
   inline typename riakboost::math::tools::promote_args<T,U>::type expint(T const& z, U const& u)\
   { return riakboost::math::expint(z, u, Policy()); }\
   \
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type expint(T z){ return riakboost::math::expint(z, Policy()); }\
   \
   template <class T>\
   inline typename riakboost::math::tools::promote_args<T>::type zeta(T s){ return riakboost::math::zeta(s, Policy()); }\
   \
   template <class T>\
   inline T round(const T& v){ using riakboost::math::round; return round(v, Policy()); }\
   \
   template <class T>\
   inline int iround(const T& v){ using riakboost::math::iround; return iround(v, Policy()); }\
   \
   template <class T>\
   inline long lround(const T& v){ using riakboost::math::lround; return lround(v, Policy()); }\
   \
   template <class T>\
   inline T trunc(const T& v){ using riakboost::math::trunc; return trunc(v, Policy()); }\
   \
   template <class T>\
   inline int itrunc(const T& v){ using riakboost::math::itrunc; return itrunc(v, Policy()); }\
   \
   template <class T>\
   inline long ltrunc(const T& v){ using riakboost::math::ltrunc; return ltrunc(v, Policy()); }\
   \
   template <class T>\
   inline T modf(const T& v, T* ipart){ using riakboost::math::modf; return modf(v, ipart, Policy()); }\
   \
   template <class T>\
   inline T modf(const T& v, int* ipart){ using riakboost::math::modf; return modf(v, ipart, Policy()); }\
   \
   template <class T>\
   inline T modf(const T& v, long* ipart){ using riakboost::math::modf; return modf(v, ipart, Policy()); }\
   \
   template <int N, class T>\
   inline typename riakboost::math::tools::promote_args<T>::type pow(T v){ return riakboost::math::pow<N>(v, Policy()); }\
   \
   template <class T> T nextafter(const T& a, const T& b){ return riakboost::math::nextafter(a, b, Policy()); }\
   template <class T> T float_next(const T& a){ return riakboost::math::float_next(a, Policy()); }\
   template <class T> T float_prior(const T& a){ return riakboost::math::float_prior(a, Policy()); }\
   template <class T> T float_distance(const T& a, const T& b){ return riakboost::math::float_distance(a, b, Policy()); }\
   \
   template <class RT1, class RT2>\
   inline typename riakboost::math::tools::promote_args<RT1, RT2>::type owens_t(RT1 a, RT2 z){ return riakboost::math::owens_t(a, z, Policy()); }\
   \
   template <class T1, class T2>\
   inline std::complex<typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type> cyl_hankel_1(T1 v, T2 x)\
   {  return riakboost::math::cyl_hankel_1(v, x, Policy()); }\
   \
   template <class T1, class T2>\
   inline std::complex<typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type> cyl_hankel_2(T1 v, T2 x)\
   { return riakboost::math::cyl_hankel_2(v, x, Policy()); }\
   \
   template <class T1, class T2>\
   inline std::complex<typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type> sph_hankel_1(T1 v, T2 x)\
   { return riakboost::math::sph_hankel_1(v, x, Policy()); }\
   \
   template <class T1, class T2>\
   inline std::complex<typename riakboost::math::detail::bessel_traits<T1, T2, Policy >::result_type> sph_hankel_2(T1 v, T2 x)\
   { return riakboost::math::sph_hankel_2(v, x, Policy()); }\



#endif // BOOST_MATH_SPECIAL_MATH_FWD_HPP


