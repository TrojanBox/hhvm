/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_php_classes_reflection_fws_h41074b82__
#define __GENERATED_php_classes_reflection_fws_h41074b82__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

// 1. Static Strings
extern StaticStringProxy s_sys_ssp00000000;
#ifndef s_sys_ss00000000
#define s_sys_ss00000000 (*(StaticString *)(&s_sys_ssp00000000))
#endif
extern StaticStringProxy s_sys_ssp84e1d89d;
#ifndef s_sys_ss84e1d89d
#define s_sys_ss84e1d89d (*(StaticString *)(&s_sys_ssp84e1d89d))
#endif
extern StaticStringProxy s_sys_ssp5596f6c8;
#ifndef s_sys_ss5596f6c8
#define s_sys_ss5596f6c8 (*(StaticString *)(&s_sys_ssp5596f6c8))
#endif
extern StaticStringProxy s_sys_ssp8bbc8ede;
#ifndef s_sys_ss8bbc8ede
#define s_sys_ss8bbc8ede (*(StaticString *)(&s_sys_ssp8bbc8ede))
#endif
extern StaticStringProxy s_sys_ssp5784ed2b;
#ifndef s_sys_ss5784ed2b
#define s_sys_ss5784ed2b (*(StaticString *)(&s_sys_ssp5784ed2b))
#endif
extern StaticStringProxy s_sys_sspda497f2a;
#ifndef s_sys_ssda497f2a
#define s_sys_ssda497f2a (*(StaticString *)(&s_sys_sspda497f2a))
#endif
extern StaticStringProxy s_sys_ssp819481f3;
#ifndef s_sys_ss819481f3
#define s_sys_ss819481f3 (*(StaticString *)(&s_sys_ssp819481f3))
#endif
extern StaticStringProxy s_sys_ssp92306c9b;
#ifndef s_sys_ss92306c9b
#define s_sys_ss92306c9b (*(StaticString *)(&s_sys_ssp92306c9b))
#endif
extern StaticStringProxy s_sys_sspa78ef7eb;
#ifndef s_sys_ssa78ef7eb
#define s_sys_ssa78ef7eb (*(StaticString *)(&s_sys_sspa78ef7eb))
#endif
extern StaticStringProxy s_sys_sspd816f860;
#ifndef s_sys_ssd816f860
#define s_sys_ssd816f860 (*(StaticString *)(&s_sys_sspd816f860))
#endif
extern StaticStringProxy s_sys_ssp985d885e;
#ifndef s_sys_ss985d885e
#define s_sys_ss985d885e (*(StaticString *)(&s_sys_ssp985d885e))
#endif
extern StaticStringProxy s_sys_sspe302a373;
#ifndef s_sys_sse302a373
#define s_sys_sse302a373 (*(StaticString *)(&s_sys_sspe302a373))
#endif
extern StaticStringProxy s_sys_ssp2e7b0ef6;
#ifndef s_sys_ss2e7b0ef6
#define s_sys_ss2e7b0ef6 (*(StaticString *)(&s_sys_ssp2e7b0ef6))
#endif
extern StaticStringProxy s_sys_sspa19b529e;
#ifndef s_sys_ssa19b529e
#define s_sys_ssa19b529e (*(StaticString *)(&s_sys_sspa19b529e))
#endif
extern StaticStringProxy s_sys_ssp4a58ad66;
#ifndef s_sys_ss4a58ad66
#define s_sys_ss4a58ad66 (*(StaticString *)(&s_sys_ssp4a58ad66))
#endif
extern StaticStringProxy s_sys_ssp3be2773a;
#ifndef s_sys_ss3be2773a
#define s_sys_ss3be2773a (*(StaticString *)(&s_sys_ssp3be2773a))
#endif
extern StaticStringProxy s_sys_sspcb04c741;
#ifndef s_sys_sscb04c741
#define s_sys_sscb04c741 (*(StaticString *)(&s_sys_sspcb04c741))
#endif
extern StaticStringProxy s_sys_sspc272dc9e;
#ifndef s_sys_ssc272dc9e
#define s_sys_ssc272dc9e (*(StaticString *)(&s_sys_sspc272dc9e))
#endif
extern StaticStringProxy s_sys_ssp69c1ef03;
#ifndef s_sys_ss69c1ef03
#define s_sys_ss69c1ef03 (*(StaticString *)(&s_sys_ssp69c1ef03))
#endif
extern StaticStringProxy s_sys_ssp3ee05120;
#ifndef s_sys_ss3ee05120
#define s_sys_ss3ee05120 (*(StaticString *)(&s_sys_ssp3ee05120))
#endif
extern StaticStringProxy s_sys_sspdc6e02c2;
#ifndef s_sys_ssdc6e02c2
#define s_sys_ssdc6e02c2 (*(StaticString *)(&s_sys_sspdc6e02c2))
#endif
extern StaticStringProxy s_sys_ssp4ad0c110;
#ifndef s_sys_ss4ad0c110
#define s_sys_ss4ad0c110 (*(StaticString *)(&s_sys_ssp4ad0c110))
#endif
extern StaticStringProxy s_sys_ssp9795dfc8;
#ifndef s_sys_ss9795dfc8
#define s_sys_ss9795dfc8 (*(StaticString *)(&s_sys_ssp9795dfc8))
#endif
extern StaticStringProxy s_sys_sspfc63c2bb;
#ifndef s_sys_ssfc63c2bb
#define s_sys_ssfc63c2bb (*(StaticString *)(&s_sys_sspfc63c2bb))
#endif
extern StaticStringProxy s_sys_sspf82f565f;
#ifndef s_sys_ssf82f565f
#define s_sys_ssf82f565f (*(StaticString *)(&s_sys_sspf82f565f))
#endif
extern StaticStringProxy s_sys_sspa1b87da7;
#ifndef s_sys_ssa1b87da7
#define s_sys_ssa1b87da7 (*(StaticString *)(&s_sys_sspa1b87da7))
#endif
extern StaticStringProxy s_sys_sspa5a7f4f9;
#ifndef s_sys_ssa5a7f4f9
#define s_sys_ssa5a7f4f9 (*(StaticString *)(&s_sys_sspa5a7f4f9))
#endif
extern StaticStringProxy s_sys_ssp6974a1cc;
#ifndef s_sys_ss6974a1cc
#define s_sys_ss6974a1cc (*(StaticString *)(&s_sys_ssp6974a1cc))
#endif
extern StaticStringProxy s_sys_ssp12c8a8a6;
#ifndef s_sys_ss12c8a8a6
#define s_sys_ss12c8a8a6 (*(StaticString *)(&s_sys_ssp12c8a8a6))
#endif
extern StaticStringProxy s_sys_ssp750cda3b;
#ifndef s_sys_ss750cda3b
#define s_sys_ss750cda3b (*(StaticString *)(&s_sys_ssp750cda3b))
#endif
extern StaticStringProxy s_sys_ssp5bfa95ac;
#ifndef s_sys_ss5bfa95ac
#define s_sys_ss5bfa95ac (*(StaticString *)(&s_sys_ssp5bfa95ac))
#endif
extern StaticStringProxy s_sys_ssp8c04b960;
#ifndef s_sys_ss8c04b960
#define s_sys_ss8c04b960 (*(StaticString *)(&s_sys_ssp8c04b960))
#endif
extern StaticStringProxy s_sys_ssp0fc37e03;
#ifndef s_sys_ss0fc37e03
#define s_sys_ss0fc37e03 (*(StaticString *)(&s_sys_ssp0fc37e03))
#endif
extern StaticStringProxy s_sys_ssp1573187a;
#ifndef s_sys_ss1573187a
#define s_sys_ss1573187a (*(StaticString *)(&s_sys_ssp1573187a))
#endif
extern StaticStringProxy s_sys_ssp7c2c602f;
#ifndef s_sys_ss7c2c602f
#define s_sys_ss7c2c602f (*(StaticString *)(&s_sys_ssp7c2c602f))
#endif
extern StaticStringProxy s_sys_sspc82dbd12;
#ifndef s_sys_ssc82dbd12
#define s_sys_ssc82dbd12 (*(StaticString *)(&s_sys_sspc82dbd12))
#endif
extern StaticStringProxy s_sys_ssp0415e4a0;
#ifndef s_sys_ss0415e4a0
#define s_sys_ss0415e4a0 (*(StaticString *)(&s_sys_ssp0415e4a0))
#endif
extern StaticStringProxy s_sys_ssp4cd61020;
#ifndef s_sys_ss4cd61020
#define s_sys_ss4cd61020 (*(StaticString *)(&s_sys_ssp4cd61020))
#endif
extern StaticStringProxy s_sys_ssp623ae369;
#ifndef s_sys_ss623ae369
#define s_sys_ss623ae369 (*(StaticString *)(&s_sys_ssp623ae369))
#endif
extern StaticStringProxy s_sys_sspefecb9dd;
#ifndef s_sys_ssefecb9dd
#define s_sys_ssefecb9dd (*(StaticString *)(&s_sys_sspefecb9dd))
#endif
extern StaticStringProxy s_sys_ssp570270cc;
#ifndef s_sys_ss570270cc
#define s_sys_ss570270cc (*(StaticString *)(&s_sys_ssp570270cc))
#endif
extern StaticStringProxy s_sys_sspf6ac0169;
#ifndef s_sys_ssf6ac0169
#define s_sys_ssf6ac0169 (*(StaticString *)(&s_sys_sspf6ac0169))
#endif
extern StaticStringProxy s_sys_ssp9cfa17a6;
#ifndef s_sys_ss9cfa17a6
#define s_sys_ss9cfa17a6 (*(StaticString *)(&s_sys_ssp9cfa17a6))
#endif
extern StaticStringProxy s_sys_sspd04b2eb8;
#ifndef s_sys_ssd04b2eb8
#define s_sys_ssd04b2eb8 (*(StaticString *)(&s_sys_sspd04b2eb8))
#endif
extern StaticStringProxy s_sys_sspe9bf4500;
#ifndef s_sys_sse9bf4500
#define s_sys_sse9bf4500 (*(StaticString *)(&s_sys_sspe9bf4500))
#endif
extern StaticStringProxy s_sys_sspf46d6580;
#ifndef s_sys_ssf46d6580
#define s_sys_ssf46d6580 (*(StaticString *)(&s_sys_sspf46d6580))
#endif
extern StaticStringProxy s_sys_sspcc89b5fb;
#ifndef s_sys_sscc89b5fb
#define s_sys_sscc89b5fb (*(StaticString *)(&s_sys_sspcc89b5fb))
#endif
extern StaticStringProxy s_sys_sspe72cf5e5;
#ifndef s_sys_sse72cf5e5
#define s_sys_sse72cf5e5 (*(StaticString *)(&s_sys_sspe72cf5e5))
#endif
extern StaticStringProxy s_sys_ssp8ce7db5b;
#ifndef s_sys_ss8ce7db5b
#define s_sys_ss8ce7db5b (*(StaticString *)(&s_sys_ssp8ce7db5b))
#endif
extern StaticStringProxy s_sys_ssp2145036e;
#ifndef s_sys_ss2145036e
#define s_sys_ss2145036e (*(StaticString *)(&s_sys_ssp2145036e))
#endif
extern StaticStringProxy s_sys_sspc8396b02;
#ifndef s_sys_ssc8396b02
#define s_sys_ssc8396b02 (*(StaticString *)(&s_sys_sspc8396b02))
#endif
extern StaticStringProxy s_sys_ssp0a49a8a1;
#ifndef s_sys_ss0a49a8a1
#define s_sys_ss0a49a8a1 (*(StaticString *)(&s_sys_ssp0a49a8a1))
#endif
extern StaticStringProxy s_sys_ssp42b93220;
#ifndef s_sys_ss42b93220
#define s_sys_ss42b93220 (*(StaticString *)(&s_sys_ssp42b93220))
#endif
extern StaticStringProxy s_sys_ssp2ea2398f;
#ifndef s_sys_ss2ea2398f
#define s_sys_ss2ea2398f (*(StaticString *)(&s_sys_ssp2ea2398f))
#endif
extern StaticStringProxy s_sys_sspdb4d5e1b;
#ifndef s_sys_ssdb4d5e1b
#define s_sys_ssdb4d5e1b (*(StaticString *)(&s_sys_sspdb4d5e1b))
#endif
extern StaticStringProxy s_sys_ssp969a2913;
#ifndef s_sys_ss969a2913
#define s_sys_ss969a2913 (*(StaticString *)(&s_sys_ssp969a2913))
#endif
extern StaticStringProxy s_sys_ssp09d4c665;
#ifndef s_sys_ss09d4c665
#define s_sys_ss09d4c665 (*(StaticString *)(&s_sys_ssp09d4c665))
#endif
extern StaticStringProxy s_sys_sspd5cc982b;
#ifndef s_sys_ssd5cc982b
#define s_sys_ssd5cc982b (*(StaticString *)(&s_sys_sspd5cc982b))
#endif
extern StaticStringProxy s_sys_ssp88e41acd;
#ifndef s_sys_ss88e41acd
#define s_sys_ss88e41acd (*(StaticString *)(&s_sys_ssp88e41acd))
#endif
extern StaticStringProxy s_sys_ssp0f90caf6;
#ifndef s_sys_ss0f90caf6
#define s_sys_ss0f90caf6 (*(StaticString *)(&s_sys_ssp0f90caf6))
#endif
extern StaticStringProxy s_sys_ssp6c17831d;
#ifndef s_sys_ss6c17831d
#define s_sys_ss6c17831d (*(StaticString *)(&s_sys_ssp6c17831d))
#endif
extern StaticStringProxy s_sys_ssp53ec6e8f;
#ifndef s_sys_ss53ec6e8f
#define s_sys_ss53ec6e8f (*(StaticString *)(&s_sys_ssp53ec6e8f))
#endif
extern StaticStringProxy s_sys_ssp94ec964c;
#ifndef s_sys_ss94ec964c
#define s_sys_ss94ec964c (*(StaticString *)(&s_sys_ssp94ec964c))
#endif
extern StaticStringProxy s_sys_sspc7d7a51a;
#ifndef s_sys_ssc7d7a51a
#define s_sys_ssc7d7a51a (*(StaticString *)(&s_sys_sspc7d7a51a))
#endif
extern StaticStringProxy s_sys_ssp1c65f80a;
#ifndef s_sys_ss1c65f80a
#define s_sys_ss1c65f80a (*(StaticString *)(&s_sys_ssp1c65f80a))
#endif
extern StaticStringProxy s_sys_sspdd614bee;
#ifndef s_sys_ssdd614bee
#define s_sys_ssdd614bee (*(StaticString *)(&s_sys_sspdd614bee))
#endif
extern StaticStringProxy s_sys_sspd5dbbd47;
#ifndef s_sys_ssd5dbbd47
#define s_sys_ssd5dbbd47 (*(StaticString *)(&s_sys_sspd5dbbd47))
#endif
extern StaticStringProxy s_sys_ssp8934f5fc;
#ifndef s_sys_ss8934f5fc
#define s_sys_ss8934f5fc (*(StaticString *)(&s_sys_ssp8934f5fc))
#endif
extern StaticStringProxy s_sys_sspcd0bfaee;
#ifndef s_sys_sscd0bfaee
#define s_sys_sscd0bfaee (*(StaticString *)(&s_sys_sspcd0bfaee))
#endif
extern StaticStringProxy s_sys_ssp7157d1ae;
#ifndef s_sys_ss7157d1ae
#define s_sys_ss7157d1ae (*(StaticString *)(&s_sys_ssp7157d1ae))
#endif
extern StaticStringProxy s_sys_ssp3a783e44;
#ifndef s_sys_ss3a783e44
#define s_sys_ss3a783e44 (*(StaticString *)(&s_sys_ssp3a783e44))
#endif
extern StaticStringProxy s_sys_ssp1d6e06d8;
#ifndef s_sys_ss1d6e06d8
#define s_sys_ss1d6e06d8 (*(StaticString *)(&s_sys_ssp1d6e06d8))
#endif
extern StaticStringProxy s_sys_sspa4e142d1;
#ifndef s_sys_ssa4e142d1
#define s_sys_ssa4e142d1 (*(StaticString *)(&s_sys_sspa4e142d1))
#endif
extern StaticStringProxy s_sys_ssp8e2abdf3;
#ifndef s_sys_ss8e2abdf3
#define s_sys_ss8e2abdf3 (*(StaticString *)(&s_sys_ssp8e2abdf3))
#endif
extern StaticStringProxy s_sys_sspd6eedaeb;
#ifndef s_sys_ssd6eedaeb
#define s_sys_ssd6eedaeb (*(StaticString *)(&s_sys_sspd6eedaeb))
#endif
extern StaticStringProxy s_sys_sspcdbb2d67;
#ifndef s_sys_sscdbb2d67
#define s_sys_sscdbb2d67 (*(StaticString *)(&s_sys_sspcdbb2d67))
#endif
extern StaticStringProxy s_sys_ssp4483b6ae;
#ifndef s_sys_ss4483b6ae
#define s_sys_ss4483b6ae (*(StaticString *)(&s_sys_ssp4483b6ae))
#endif
extern StaticStringProxy s_sys_ssp97b15062;
#ifndef s_sys_ss97b15062
#define s_sys_ss97b15062 (*(StaticString *)(&s_sys_ssp97b15062))
#endif
extern StaticStringProxy s_sys_sspc2df217e;
#ifndef s_sys_ssc2df217e
#define s_sys_ssc2df217e (*(StaticString *)(&s_sys_sspc2df217e))
#endif
extern StaticStringProxy s_sys_ssp88a8c728;
#ifndef s_sys_ss88a8c728
#define s_sys_ss88a8c728 (*(StaticString *)(&s_sys_ssp88a8c728))
#endif
extern StaticStringProxy s_sys_ssp8fed3624;
#ifndef s_sys_ss8fed3624
#define s_sys_ss8fed3624 (*(StaticString *)(&s_sys_ssp8fed3624))
#endif
extern StaticStringProxy s_sys_ssp1902bc14;
#ifndef s_sys_ss1902bc14
#define s_sys_ss1902bc14 (*(StaticString *)(&s_sys_ssp1902bc14))
#endif
extern StaticStringProxy s_sys_ssp24749844;
#ifndef s_sys_ss24749844
#define s_sys_ss24749844 (*(StaticString *)(&s_sys_ssp24749844))
#endif
extern StaticStringProxy s_sys_sspf1bd1a9d;
#ifndef s_sys_ssf1bd1a9d
#define s_sys_ssf1bd1a9d (*(StaticString *)(&s_sys_sspf1bd1a9d))
#endif
extern StaticStringProxy s_sys_ssp7ace3627;
#ifndef s_sys_ss7ace3627
#define s_sys_ss7ace3627 (*(StaticString *)(&s_sys_ssp7ace3627))
#endif
extern StaticStringProxy s_sys_sspd029c1ac;
#ifndef s_sys_ssd029c1ac
#define s_sys_ssd029c1ac (*(StaticString *)(&s_sys_sspd029c1ac))
#endif
extern StaticStringProxy s_sys_sspf8395a4d;
#ifndef s_sys_ssf8395a4d
#define s_sys_ssf8395a4d (*(StaticString *)(&s_sys_sspf8395a4d))
#endif
extern StaticStringProxy s_sys_ssp1ce69cd5;
#ifndef s_sys_ss1ce69cd5
#define s_sys_ss1ce69cd5 (*(StaticString *)(&s_sys_ssp1ce69cd5))
#endif
extern StaticStringProxy s_sys_ssp5e1f54fe;
#ifndef s_sys_ss5e1f54fe
#define s_sys_ss5e1f54fe (*(StaticString *)(&s_sys_ssp5e1f54fe))
#endif
extern StaticStringProxy s_sys_ssp33872dc4;
#ifndef s_sys_ss33872dc4
#define s_sys_ss33872dc4 (*(StaticString *)(&s_sys_ssp33872dc4))
#endif
extern StaticStringProxy s_sys_ssp4851ee49;
#ifndef s_sys_ss4851ee49
#define s_sys_ss4851ee49 (*(StaticString *)(&s_sys_ssp4851ee49))
#endif
extern StaticStringProxy s_sys_sspa5f2219f;
#ifndef s_sys_ssa5f2219f
#define s_sys_ssa5f2219f (*(StaticString *)(&s_sys_sspa5f2219f))
#endif
extern StaticStringProxy s_sys_ssp275ee453;
#ifndef s_sys_ss275ee453
#define s_sys_ss275ee453 (*(StaticString *)(&s_sys_ssp275ee453))
#endif
extern StaticStringProxy s_sys_sspf4604833;
#ifndef s_sys_ssf4604833
#define s_sys_ssf4604833 (*(StaticString *)(&s_sys_sspf4604833))
#endif
extern StaticStringProxy s_sys_sspd14ebd08;
#ifndef s_sys_ssd14ebd08
#define s_sys_ssd14ebd08 (*(StaticString *)(&s_sys_sspd14ebd08))
#endif
extern StaticStringProxy s_sys_sspe4a1cad7;
#ifndef s_sys_sse4a1cad7
#define s_sys_sse4a1cad7 (*(StaticString *)(&s_sys_sspe4a1cad7))
#endif
extern StaticStringProxy s_sys_ssp37217e60;
#ifndef s_sys_ss37217e60
#define s_sys_ss37217e60 (*(StaticString *)(&s_sys_ssp37217e60))
#endif
extern StaticStringProxy s_sys_sspe1ffa7cf;
#ifndef s_sys_sse1ffa7cf
#define s_sys_sse1ffa7cf (*(StaticString *)(&s_sys_sspe1ffa7cf))
#endif
extern StaticStringProxy s_sys_sspf3f5d744;
#ifndef s_sys_ssf3f5d744
#define s_sys_ssf3f5d744 (*(StaticString *)(&s_sys_sspf3f5d744))
#endif
extern StaticStringProxy s_sys_sspef52e4e1;
#ifndef s_sys_ssef52e4e1
#define s_sys_ssef52e4e1 (*(StaticString *)(&s_sys_sspef52e4e1))
#endif
extern StaticStringProxy s_sys_sspc0ff3081;
#ifndef s_sys_ssc0ff3081
#define s_sys_ssc0ff3081 (*(StaticString *)(&s_sys_sspc0ff3081))
#endif
extern StaticStringProxy s_sys_ssp33988b3e;
#ifndef s_sys_ss33988b3e
#define s_sys_ss33988b3e (*(StaticString *)(&s_sys_ssp33988b3e))
#endif
extern StaticStringProxy s_sys_sspcedef5dc;
#ifndef s_sys_sscedef5dc
#define s_sys_sscedef5dc (*(StaticString *)(&s_sys_sspcedef5dc))
#endif
extern StaticStringProxy s_sys_ssp7228e959;
#ifndef s_sys_ss7228e959
#define s_sys_ss7228e959 (*(StaticString *)(&s_sys_ssp7228e959))
#endif
extern StaticStringProxy s_sys_sspcfb8e254;
#ifndef s_sys_sscfb8e254
#define s_sys_sscfb8e254 (*(StaticString *)(&s_sys_sspcfb8e254))
#endif
extern StaticStringProxy s_sys_ssp9332a8ac;
#ifndef s_sys_ss9332a8ac
#define s_sys_ss9332a8ac (*(StaticString *)(&s_sys_ssp9332a8ac))
#endif
extern StaticStringProxy s_sys_sspc90e239b;
#ifndef s_sys_ssc90e239b
#define s_sys_ssc90e239b (*(StaticString *)(&s_sys_sspc90e239b))
#endif
extern StaticStringProxy s_sys_ssp1fa13716;
#ifndef s_sys_ss1fa13716
#define s_sys_ss1fa13716 (*(StaticString *)(&s_sys_ssp1fa13716))
#endif
extern StaticStringProxy s_sys_sspdf34c0b4;
#ifndef s_sys_ssdf34c0b4
#define s_sys_ssdf34c0b4 (*(StaticString *)(&s_sys_sspdf34c0b4))
#endif
extern StaticStringProxy s_sys_sspbc590ceb;
#ifndef s_sys_ssbc590ceb
#define s_sys_ssbc590ceb (*(StaticString *)(&s_sys_sspbc590ceb))
#endif
extern StaticStringProxy s_sys_ssp90d9de57;
#ifndef s_sys_ss90d9de57
#define s_sys_ss90d9de57 (*(StaticString *)(&s_sys_ssp90d9de57))
#endif
extern StaticStringProxy s_sys_ssp9dad4367;
#ifndef s_sys_ss9dad4367
#define s_sys_ss9dad4367 (*(StaticString *)(&s_sys_ssp9dad4367))
#endif
extern StaticStringProxy s_sys_sspf4dfdccf;
#ifndef s_sys_ssf4dfdccf
#define s_sys_ssf4dfdccf (*(StaticString *)(&s_sys_sspf4dfdccf))
#endif
extern StaticStringProxy s_sys_ssp9631f2ea;
#ifndef s_sys_ss9631f2ea
#define s_sys_ss9631f2ea (*(StaticString *)(&s_sys_ssp9631f2ea))
#endif
extern StaticStringProxy s_sys_sspc556d1b5;
#ifndef s_sys_ssc556d1b5
#define s_sys_ssc556d1b5 (*(StaticString *)(&s_sys_sspc556d1b5))
#endif
extern StaticStringProxy s_sys_ssp43d0dde2;
#ifndef s_sys_ss43d0dde2
#define s_sys_ss43d0dde2 (*(StaticString *)(&s_sys_ssp43d0dde2))
#endif
extern StaticStringProxy s_sys_ssp4d6442de;
#ifndef s_sys_ss4d6442de
#define s_sys_ss4d6442de (*(StaticString *)(&s_sys_ssp4d6442de))
#endif
extern StaticStringProxy s_sys_ssp27634730;
#ifndef s_sys_ss27634730
#define s_sys_ss27634730 (*(StaticString *)(&s_sys_ssp27634730))
#endif
extern StaticStringProxy s_sys_ssp504bc94d;
#ifndef s_sys_ss504bc94d
#define s_sys_ss504bc94d (*(StaticString *)(&s_sys_ssp504bc94d))
#endif
extern StaticStringProxy s_sys_ssp8f9bd044;
#ifndef s_sys_ss8f9bd044
#define s_sys_ss8f9bd044 (*(StaticString *)(&s_sys_ssp8f9bd044))
#endif
extern StaticStringProxy s_sys_ssp6d9ef7e5;
#ifndef s_sys_ss6d9ef7e5
#define s_sys_ss6d9ef7e5 (*(StaticString *)(&s_sys_ssp6d9ef7e5))
#endif
extern StaticStringProxy s_sys_ssp6e47b4b1;
#ifndef s_sys_ss6e47b4b1
#define s_sys_ss6e47b4b1 (*(StaticString *)(&s_sys_ssp6e47b4b1))
#endif
extern StaticStringProxy s_sys_sspa812760b;
#ifndef s_sys_ssa812760b
#define s_sys_ssa812760b (*(StaticString *)(&s_sys_sspa812760b))
#endif
extern StaticStringProxy s_sys_sspce80f767;
#ifndef s_sys_ssce80f767
#define s_sys_ssce80f767 (*(StaticString *)(&s_sys_sspce80f767))
#endif
extern StaticStringProxy s_sys_sspdec3c0f0;
#ifndef s_sys_ssdec3c0f0
#define s_sys_ssdec3c0f0 (*(StaticString *)(&s_sys_sspdec3c0f0))
#endif
extern StaticStringProxy s_sys_ssp404bf1b4;
#ifndef s_sys_ss404bf1b4
#define s_sys_ss404bf1b4 (*(StaticString *)(&s_sys_ssp404bf1b4))
#endif
extern StaticStringProxy s_sys_sspdd355b2b;
#ifndef s_sys_ssdd355b2b
#define s_sys_ssdd355b2b (*(StaticString *)(&s_sys_sspdd355b2b))
#endif
extern StaticStringProxy s_sys_ssp754eb25a;
#ifndef s_sys_ss754eb25a
#define s_sys_ss754eb25a (*(StaticString *)(&s_sys_ssp754eb25a))
#endif
extern StaticStringProxy s_sys_ssp5e0a51ee;
#ifndef s_sys_ss5e0a51ee
#define s_sys_ss5e0a51ee (*(StaticString *)(&s_sys_ssp5e0a51ee))
#endif
extern StaticStringProxy s_sys_sspd4c67725;
#ifndef s_sys_ssd4c67725
#define s_sys_ssd4c67725 (*(StaticString *)(&s_sys_sspd4c67725))
#endif
extern StaticStringProxy s_sys_sspbefe32a8;
#ifndef s_sys_ssbefe32a8
#define s_sys_ssbefe32a8 (*(StaticString *)(&s_sys_sspbefe32a8))
#endif
extern StaticStringProxy s_sys_ssp5b229ad5;
#ifndef s_sys_ss5b229ad5
#define s_sys_ss5b229ad5 (*(StaticString *)(&s_sys_ssp5b229ad5))
#endif
extern StaticStringProxy s_sys_ssp9f244c80;
#ifndef s_sys_ss9f244c80
#define s_sys_ss9f244c80 (*(StaticString *)(&s_sys_ssp9f244c80))
#endif
extern StaticStringProxy s_sys_ssp309aefff;
#ifndef s_sys_ss309aefff
#define s_sys_ss309aefff (*(StaticString *)(&s_sys_ssp309aefff))
#endif
extern StaticStringProxy s_sys_sspdc3cbddc;
#ifndef s_sys_ssdc3cbddc
#define s_sys_ssdc3cbddc (*(StaticString *)(&s_sys_sspdc3cbddc))
#endif
extern StaticStringProxy s_sys_ssp56c85b78;
#ifndef s_sys_ss56c85b78
#define s_sys_ss56c85b78 (*(StaticString *)(&s_sys_ssp56c85b78))
#endif
extern StaticStringProxy s_sys_sspd8c7abd7;
#ifndef s_sys_ssd8c7abd7
#define s_sys_ssd8c7abd7 (*(StaticString *)(&s_sys_sspd8c7abd7))
#endif
extern StaticStringProxy s_sys_sspedd47a43;
#ifndef s_sys_ssedd47a43
#define s_sys_ssedd47a43 (*(StaticString *)(&s_sys_sspedd47a43))
#endif
extern StaticStringProxy s_sys_ssp1f20ac62;
#ifndef s_sys_ss1f20ac62
#define s_sys_ss1f20ac62 (*(StaticString *)(&s_sys_ssp1f20ac62))
#endif
extern StaticStringProxy s_sys_sspfb10fd8c;
#ifndef s_sys_ssfb10fd8c
#define s_sys_ssfb10fd8c (*(StaticString *)(&s_sys_sspfb10fd8c))
#endif
extern StaticStringProxy s_sys_sspe781f7da;
#ifndef s_sys_sse781f7da
#define s_sys_sse781f7da (*(StaticString *)(&s_sys_sspe781f7da))
#endif
extern StaticStringProxy s_sys_ssp90269404;
#ifndef s_sys_ss90269404
#define s_sys_ss90269404 (*(StaticString *)(&s_sys_ssp90269404))
#endif
extern StaticStringProxy s_sys_ssp9fb56979;
#ifndef s_sys_ss9fb56979
#define s_sys_ss9fb56979 (*(StaticString *)(&s_sys_ssp9fb56979))
#endif
extern StaticStringProxy s_sys_ssp4ce85288;
#ifndef s_sys_ss4ce85288
#define s_sys_ss4ce85288 (*(StaticString *)(&s_sys_ssp4ce85288))
#endif
extern StaticStringProxy s_sys_ssp134fd5fa;
#ifndef s_sys_ss134fd5fa
#define s_sys_ss134fd5fa (*(StaticString *)(&s_sys_ssp134fd5fa))
#endif
extern StaticStringProxy s_sys_ssp06d80b5c;
#ifndef s_sys_ss06d80b5c
#define s_sys_ss06d80b5c (*(StaticString *)(&s_sys_ssp06d80b5c))
#endif
extern StaticStringProxy s_sys_ssp3fe4822b;
#ifndef s_sys_ss3fe4822b
#define s_sys_ss3fe4822b (*(StaticString *)(&s_sys_ssp3fe4822b))
#endif
extern StaticStringProxy s_sys_ssp6b8aaff2;
#ifndef s_sys_ss6b8aaff2
#define s_sys_ss6b8aaff2 (*(StaticString *)(&s_sys_ssp6b8aaff2))
#endif
extern StaticStringProxy s_sys_ssp325815c1;
#ifndef s_sys_ss325815c1
#define s_sys_ss325815c1 (*(StaticString *)(&s_sys_ssp325815c1))
#endif
extern StaticStringProxy s_sys_sspf08d205d;
#ifndef s_sys_ssf08d205d
#define s_sys_ssf08d205d (*(StaticString *)(&s_sys_sspf08d205d))
#endif
extern StaticStringProxy s_sys_ssp5be7a94a;
#ifndef s_sys_ss5be7a94a
#define s_sys_ss5be7a94a (*(StaticString *)(&s_sys_ssp5be7a94a))
#endif
extern StaticStringProxy s_sys_ssp41c7a197;
#ifndef s_sys_ss41c7a197
#define s_sys_ss41c7a197 (*(StaticString *)(&s_sys_ssp41c7a197))
#endif
extern StaticStringProxy s_sys_sspa6cfea13;
#ifndef s_sys_ssa6cfea13
#define s_sys_ssa6cfea13 (*(StaticString *)(&s_sys_sspa6cfea13))
#endif
extern StaticStringProxy s_sys_ssp22824d6b;
#ifndef s_sys_ss22824d6b
#define s_sys_ss22824d6b (*(StaticString *)(&s_sys_ssp22824d6b))
#endif
extern StaticStringProxy s_sys_sspf65d4a13;
#ifndef s_sys_ssf65d4a13
#define s_sys_ssf65d4a13 (*(StaticString *)(&s_sys_sspf65d4a13))
#endif
extern StaticStringProxy s_sys_ssp77820fcc;
#ifndef s_sys_ss77820fcc
#define s_sys_ss77820fcc (*(StaticString *)(&s_sys_ssp77820fcc))
#endif
extern StaticStringProxy s_sys_ssp724a760a;
#ifndef s_sys_ss724a760a
#define s_sys_ss724a760a (*(StaticString *)(&s_sys_ssp724a760a))
#endif
extern StaticStringProxy s_sys_ssp7cd91db4;
#ifndef s_sys_ss7cd91db4
#define s_sys_ss7cd91db4 (*(StaticString *)(&s_sys_ssp7cd91db4))
#endif

// 2. Static Arrays
extern StaticArray s_sys_sa00000000;
extern StaticArray s_sys_sa4a9657b8;

// 3. Static Variants
extern const VarNR &s_sys_svib794f8ce;
extern const VarNR &s_sys_svi90d5f98c;
extern const VarNR &s_sys_svi5e544a31;
extern const VarNR &s_sys_svi86af027e;
extern const VarNR &s_sys_svif2a1fb10;
extern const VarNR &s_sys_svi1abc09e0;
extern const VarNR &s_sys_svi6af020b2;
extern const VarNR &s_sys_svid5e04164;
extern const VarNR &s_sys_svi543f7d14;
extern const VarNR &s_sys_svi5830e7c6;
extern const VarNR &s_sys_svibf7d1df5;


extern VariantProxy s_sys_svsp00000000;
#ifndef s_sys_svs00000000
#define s_sys_svs00000000 (*(Variant *)&s_sys_svsp00000000)
#endif
extern VariantProxy s_sys_svspa1b87da7;
#ifndef s_sys_svsa1b87da7
#define s_sys_svsa1b87da7 (*(Variant *)&s_sys_svspa1b87da7)
#endif
extern VariantProxy s_sys_svsp12c8a8a6;
#ifndef s_sys_svs12c8a8a6
#define s_sys_svs12c8a8a6 (*(Variant *)&s_sys_svsp12c8a8a6)
#endif
extern VariantProxy s_sys_svsp0fc37e03;
#ifndef s_sys_svs0fc37e03
#define s_sys_svs0fc37e03 (*(Variant *)&s_sys_svsp0fc37e03)
#endif
extern VariantProxy s_sys_svsp1573187a;
#ifndef s_sys_svs1573187a
#define s_sys_svs1573187a (*(Variant *)&s_sys_svsp1573187a)
#endif
extern VariantProxy s_sys_svsp623ae369;
#ifndef s_sys_svs623ae369
#define s_sys_svs623ae369 (*(Variant *)&s_sys_svsp623ae369)
#endif
extern VariantProxy s_sys_svsp570270cc;
#ifndef s_sys_svs570270cc
#define s_sys_svs570270cc (*(Variant *)&s_sys_svsp570270cc)
#endif
extern VariantProxy s_sys_svsp9cfa17a6;
#ifndef s_sys_svs9cfa17a6
#define s_sys_svs9cfa17a6 (*(Variant *)&s_sys_svsp9cfa17a6)
#endif
extern VariantProxy s_sys_svspe9bf4500;
#ifndef s_sys_svse9bf4500
#define s_sys_svse9bf4500 (*(Variant *)&s_sys_svspe9bf4500)
#endif
extern VariantProxy s_sys_svsp8ce7db5b;
#ifndef s_sys_svs8ce7db5b
#define s_sys_svs8ce7db5b (*(Variant *)&s_sys_svsp8ce7db5b)
#endif
extern VariantProxy s_sys_svsp2145036e;
#ifndef s_sys_svs2145036e
#define s_sys_svs2145036e (*(Variant *)&s_sys_svsp2145036e)
#endif
extern VariantProxy s_sys_svsp7228e959;
#ifndef s_sys_svs7228e959
#define s_sys_svs7228e959 (*(Variant *)&s_sys_svsp7228e959)
#endif
extern VariantProxy s_sys_svspcfb8e254;
#ifndef s_sys_svscfb8e254
#define s_sys_svscfb8e254 (*(Variant *)&s_sys_svspcfb8e254)
#endif
extern VariantProxy s_sys_svsp9332a8ac;
#ifndef s_sys_svs9332a8ac
#define s_sys_svs9332a8ac (*(Variant *)&s_sys_svsp9332a8ac)
#endif
extern VariantProxy s_sys_svspd4c67725;
#ifndef s_sys_svsd4c67725
#define s_sys_svsd4c67725 (*(Variant *)&s_sys_svspd4c67725)
#endif
extern VariantProxy s_sys_svspbefe32a8;
#ifndef s_sys_svsbefe32a8
#define s_sys_svsbefe32a8 (*(Variant *)&s_sys_svspbefe32a8)
#endif
extern VariantProxy s_sys_svsp5b229ad5;
#ifndef s_sys_svs5b229ad5
#define s_sys_svs5b229ad5 (*(Variant *)&s_sys_svsp5b229ad5)
#endif
extern VariantProxy s_sys_svsp9f244c80;
#ifndef s_sys_svs9f244c80
#define s_sys_svs9f244c80 (*(Variant *)&s_sys_svsp9f244c80)
#endif
extern VariantProxy s_sys_svspfb10fd8c;
#ifndef s_sys_svsfb10fd8c
#define s_sys_svsfb10fd8c (*(Variant *)&s_sys_svspfb10fd8c)
#endif
extern VariantProxy s_sys_svsp90269404;
#ifndef s_sys_svs90269404
#define s_sys_svs90269404 (*(Variant *)&s_sys_svsp90269404)
#endif
extern VariantProxy s_sys_svsp22824d6b;
#ifndef s_sys_svs22824d6b
#define s_sys_svs22824d6b (*(Variant *)&s_sys_svsp22824d6b)
#endif
extern VariantProxy s_sys_svspf65d4a13;
#ifndef s_sys_svsf65d4a13
#define s_sys_svsf65d4a13 (*(Variant *)&s_sys_svspf65d4a13)
#endif
extern VariantProxy s_sys_svsp77820fcc;
#ifndef s_sys_svs77820fcc
#define s_sys_svs77820fcc (*(Variant *)&s_sys_svsp77820fcc)
#endif

extern VarNR s_sys_sva00000000;


///////////////////////////////////////////////////////////////////////////////
}


#endif // __GENERATED_php_classes_reflection_fws_h41074b82__
