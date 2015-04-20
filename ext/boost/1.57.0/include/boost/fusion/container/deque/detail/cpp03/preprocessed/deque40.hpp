/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost { namespace fusion {
    struct deque_tag;
    template<typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19 , typename T20 , typename T21 , typename T22 , typename T23 , typename T24 , typename T25 , typename T26 , typename T27 , typename T28 , typename T29 , typename T30 , typename T31 , typename T32 , typename T33 , typename T34 , typename T35 , typename T36 , typename T37 , typename T38 , typename T39>
    struct deque
        :
        detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::type,
        sequence_base<deque<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39> >
    {
        typedef deque_tag fusion_tag;
        typedef bidirectional_traversal_tag category;
        typedef typename detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::type base;
        typedef typename detail::deque_initial_size<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::type size;
        typedef mpl::int_<size::value> next_up;
        typedef mpl::int_<
            mpl::if_<mpl::equal_to<size, mpl::int_<0> >, mpl::int_<0>, mpl::int_<-1> >::type::value> next_down;
        typedef mpl::false_ is_view;
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1)
    : base(detail::deque_keyed_values<T0 , T1>::construct(t0 , t1))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1)
    : base(detail::deque_keyed_values<T0 , T1>::construct(t0 , t1))
{}
template <typename T_0 , typename T_1>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1)
    : base(detail::deque_keyed_values<T0 , T1>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2)
    : base(detail::deque_keyed_values<T0 , T1 , T2>::construct(t0 , t1 , t2))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2)
    : base(detail::deque_keyed_values<T0 , T1 , T2>::construct(t0 , t1 , t2))
{}
template <typename T_0 , typename T_1 , typename T_2>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2)
    : base(detail::deque_keyed_values<T0 , T1 , T2>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3>::construct(t0 , t1 , t2 , t3))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3>::construct(t0 , t1 , t2 , t3))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4>::construct(t0 , t1 , t2 , t3 , t4))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4>::construct(t0 , t1 , t2 , t3 , t4))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5>::construct(t0 , t1 , t2 , t3 , t4 , t5))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5>::construct(t0 , t1 , t2 , t3 , t4 , t5))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34 , typename add_reference<typename add_const<T35 >::type>::type t35)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34 , T35 const& t35)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34 , typename T_35>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34 , T_35 && t35)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34) , std::forward<T_35>(t35)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34 , typename add_reference<typename add_const<T35 >::type>::type t35 , typename add_reference<typename add_const<T36 >::type>::type t36)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34 , T35 const& t35 , T36 const& t36)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34 , typename T_35 , typename T_36>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34 , T_35 && t35 , T_36 && t36)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34) , std::forward<T_35>(t35) , std::forward<T_36>(t36)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34 , typename add_reference<typename add_const<T35 >::type>::type t35 , typename add_reference<typename add_const<T36 >::type>::type t36 , typename add_reference<typename add_const<T37 >::type>::type t37)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34 , T35 const& t35 , T36 const& t36 , T37 const& t37)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34 , typename T_35 , typename T_36 , typename T_37>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34 , T_35 && t35 , T_36 && t36 , T_37 && t37)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34) , std::forward<T_35>(t35) , std::forward<T_36>(t36) , std::forward<T_37>(t37)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34 , typename add_reference<typename add_const<T35 >::type>::type t35 , typename add_reference<typename add_const<T36 >::type>::type t36 , typename add_reference<typename add_const<T37 >::type>::type t37 , typename add_reference<typename add_const<T38 >::type>::type t38)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37 , t38))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34 , T35 const& t35 , T36 const& t36 , T37 const& t37 , T38 const& t38)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37 , t38))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34 , typename T_35 , typename T_36 , typename T_37 , typename T_38>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34 , T_35 && t35 , T_36 && t36 , T_37 && t37 , T_38 && t38)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34) , std::forward<T_35>(t35) , std::forward<T_36>(t36) , std::forward<T_37>(t37) , std::forward<T_38>(t38)))
{}
# endif
# if defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(typename add_reference<typename add_const<T0 >::type>::type t0 , typename add_reference<typename add_const<T1 >::type>::type t1 , typename add_reference<typename add_const<T2 >::type>::type t2 , typename add_reference<typename add_const<T3 >::type>::type t3 , typename add_reference<typename add_const<T4 >::type>::type t4 , typename add_reference<typename add_const<T5 >::type>::type t5 , typename add_reference<typename add_const<T6 >::type>::type t6 , typename add_reference<typename add_const<T7 >::type>::type t7 , typename add_reference<typename add_const<T8 >::type>::type t8 , typename add_reference<typename add_const<T9 >::type>::type t9 , typename add_reference<typename add_const<T10 >::type>::type t10 , typename add_reference<typename add_const<T11 >::type>::type t11 , typename add_reference<typename add_const<T12 >::type>::type t12 , typename add_reference<typename add_const<T13 >::type>::type t13 , typename add_reference<typename add_const<T14 >::type>::type t14 , typename add_reference<typename add_const<T15 >::type>::type t15 , typename add_reference<typename add_const<T16 >::type>::type t16 , typename add_reference<typename add_const<T17 >::type>::type t17 , typename add_reference<typename add_const<T18 >::type>::type t18 , typename add_reference<typename add_const<T19 >::type>::type t19 , typename add_reference<typename add_const<T20 >::type>::type t20 , typename add_reference<typename add_const<T21 >::type>::type t21 , typename add_reference<typename add_const<T22 >::type>::type t22 , typename add_reference<typename add_const<T23 >::type>::type t23 , typename add_reference<typename add_const<T24 >::type>::type t24 , typename add_reference<typename add_const<T25 >::type>::type t25 , typename add_reference<typename add_const<T26 >::type>::type t26 , typename add_reference<typename add_const<T27 >::type>::type t27 , typename add_reference<typename add_const<T28 >::type>::type t28 , typename add_reference<typename add_const<T29 >::type>::type t29 , typename add_reference<typename add_const<T30 >::type>::type t30 , typename add_reference<typename add_const<T31 >::type>::type t31 , typename add_reference<typename add_const<T32 >::type>::type t32 , typename add_reference<typename add_const<T33 >::type>::type t33 , typename add_reference<typename add_const<T34 >::type>::type t34 , typename add_reference<typename add_const<T35 >::type>::type t35 , typename add_reference<typename add_const<T36 >::type>::type t36 , typename add_reference<typename add_const<T37 >::type>::type t37 , typename add_reference<typename add_const<T38 >::type>::type t38 , typename add_reference<typename add_const<T39 >::type>::type t39)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37 , t38 , t39))
{}
# endif
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
BOOST_FUSION_GPU_ENABLED
deque(T0 const& t0 , T1 const& t1 , T2 const& t2 , T3 const& t3 , T4 const& t4 , T5 const& t5 , T6 const& t6 , T7 const& t7 , T8 const& t8 , T9 const& t9 , T10 const& t10 , T11 const& t11 , T12 const& t12 , T13 const& t13 , T14 const& t14 , T15 const& t15 , T16 const& t16 , T17 const& t17 , T18 const& t18 , T19 const& t19 , T20 const& t20 , T21 const& t21 , T22 const& t22 , T23 const& t23 , T24 const& t24 , T25 const& t25 , T26 const& t26 , T27 const& t27 , T28 const& t28 , T29 const& t29 , T30 const& t30 , T31 const& t31 , T32 const& t32 , T33 const& t33 , T34 const& t34 , T35 const& t35 , T36 const& t36 , T37 const& t37 , T38 const& t38 , T39 const& t39)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::construct(t0 , t1 , t2 , t3 , t4 , t5 , t6 , t7 , t8 , t9 , t10 , t11 , t12 , t13 , t14 , t15 , t16 , t17 , t18 , t19 , t20 , t21 , t22 , t23 , t24 , t25 , t26 , t27 , t28 , t29 , t30 , t31 , t32 , t33 , t34 , t35 , t36 , t37 , t38 , t39))
{}
template <typename T_0 , typename T_1 , typename T_2 , typename T_3 , typename T_4 , typename T_5 , typename T_6 , typename T_7 , typename T_8 , typename T_9 , typename T_10 , typename T_11 , typename T_12 , typename T_13 , typename T_14 , typename T_15 , typename T_16 , typename T_17 , typename T_18 , typename T_19 , typename T_20 , typename T_21 , typename T_22 , typename T_23 , typename T_24 , typename T_25 , typename T_26 , typename T_27 , typename T_28 , typename T_29 , typename T_30 , typename T_31 , typename T_32 , typename T_33 , typename T_34 , typename T_35 , typename T_36 , typename T_37 , typename T_38 , typename T_39>
BOOST_FUSION_GPU_ENABLED
deque(T_0 && t0 , T_1 && t1 , T_2 && t2 , T_3 && t3 , T_4 && t4 , T_5 && t5 , T_6 && t6 , T_7 && t7 , T_8 && t8 , T_9 && t9 , T_10 && t10 , T_11 && t11 , T_12 && t12 , T_13 && t13 , T_14 && t14 , T_15 && t15 , T_16 && t16 , T_17 && t17 , T_18 && t18 , T_19 && t19 , T_20 && t20 , T_21 && t21 , T_22 && t22 , T_23 && t23 , T_24 && t24 , T_25 && t25 , T_26 && t26 , T_27 && t27 , T_28 && t28 , T_29 && t29 , T_30 && t30 , T_31 && t31 , T_32 && t32 , T_33 && t33 , T_34 && t34 , T_35 && t35 , T_36 && t36 , T_37 && t37 , T_38 && t38 , T_39 && t39)
    : base(detail::deque_keyed_values<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19 , T20 , T21 , T22 , T23 , T24 , T25 , T26 , T27 , T28 , T29 , T30 , T31 , T32 , T33 , T34 , T35 , T36 , T37 , T38 , T39>::
      forward_(std::forward<T_0>(t0) , std::forward<T_1>(t1) , std::forward<T_2>(t2) , std::forward<T_3>(t3) , std::forward<T_4>(t4) , std::forward<T_5>(t5) , std::forward<T_6>(t6) , std::forward<T_7>(t7) , std::forward<T_8>(t8) , std::forward<T_9>(t9) , std::forward<T_10>(t10) , std::forward<T_11>(t11) , std::forward<T_12>(t12) , std::forward<T_13>(t13) , std::forward<T_14>(t14) , std::forward<T_15>(t15) , std::forward<T_16>(t16) , std::forward<T_17>(t17) , std::forward<T_18>(t18) , std::forward<T_19>(t19) , std::forward<T_20>(t20) , std::forward<T_21>(t21) , std::forward<T_22>(t22) , std::forward<T_23>(t23) , std::forward<T_24>(t24) , std::forward<T_25>(t25) , std::forward<T_26>(t26) , std::forward<T_27>(t27) , std::forward<T_28>(t28) , std::forward<T_29>(t29) , std::forward<T_30>(t30) , std::forward<T_31>(t31) , std::forward<T_32>(t32) , std::forward<T_33>(t33) , std::forward<T_34>(t34) , std::forward<T_35>(t35) , std::forward<T_36>(t36) , std::forward<T_37>(t37) , std::forward<T_38>(t38) , std::forward<T_39>(t39)))
{}
# endif
        BOOST_FUSION_GPU_ENABLED
        deque()
            {}
        BOOST_FUSION_GPU_ENABLED
        explicit deque(typename add_reference<typename add_const<T0>::type>::type t0)
            : base(t0, detail::nil_keyed_element())
            {}
        BOOST_FUSION_GPU_ENABLED
        explicit deque(deque const& rhs)
            : base(rhs)
            {}
        template<typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        BOOST_FUSION_GPU_ENABLED
        deque(deque<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39> const& seq)
            : base(seq)
            {}
        template<typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        deque(Sequence const& seq, typename disable_if<is_convertible<Sequence, T0> >::type* = 0)
            : base(base::from_iterator(fusion::begin(seq)))
            {}
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        BOOST_FUSION_GPU_ENABLED
        deque&
        operator=(deque<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39> const& rhs)
        {
            base::operator=(rhs);
            return *this;
        }
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        deque&
        operator=(T const& rhs)
        {
            base::operator=(rhs);
            return *this;
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        template <typename T0_>
        BOOST_FUSION_GPU_ENABLED
        explicit deque(T0_&& t0
          , typename enable_if<is_convertible<T0_, T0> >::type* = 0
         )
            : base(std::forward<T0_>(t0), detail::nil_keyed_element())
            {}
        BOOST_FUSION_GPU_ENABLED
        explicit deque(deque&& rhs)
            : base(std::forward<deque>(rhs))
            {}
        template<typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19 , typename U20 , typename U21 , typename U22 , typename U23 , typename U24 , typename U25 , typename U26 , typename U27 , typename U28 , typename U29 , typename U30 , typename U31 , typename U32 , typename U33 , typename U34 , typename U35 , typename U36 , typename U37 , typename U38 , typename U39>
        BOOST_FUSION_GPU_ENABLED
        deque(deque<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39>&& seq)
            : base(std::forward<deque<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19 , U20 , U21 , U22 , U23 , U24 , U25 , U26 , U27 , U28 , U29 , U30 , U31 , U32 , U33 , U34 , U35 , U36 , U37 , U38 , U39>>(seq))
            {}
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        deque&
        operator=(T&& rhs)
        {
            base::operator=(std::forward<T>(rhs));
            return *this;
        }
# endif
    };
    template <>
    struct deque<> : detail::nil_keyed_element
    {
        typedef deque_tag fusion_tag;
        typedef bidirectional_traversal_tag category;
        typedef mpl::int_<0> size;
        typedef mpl::int_<0> next_up;
        typedef mpl::int_<0> next_down;
        typedef mpl::false_ is_view;
        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        deque(Sequence const&,
            typename enable_if<
                mpl::and_<
                    traits::is_sequence<Sequence>
                  , result_of::empty<Sequence> > >::type* = 0)
        {}
        BOOST_FUSION_GPU_ENABLED
        deque() {}
    };
}}
