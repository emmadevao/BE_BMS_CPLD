/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/devaud/Bureau/BMS_5ESPE/BMS.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_0882566822_2603445318_p_0(char *t0)
{
    char t11[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5808);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 3112U);
    t8 = *((char **)t7);
    t7 = (t0 + 9288U);
    t9 = (t0 + 9370);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 5;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (5 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t7, t9, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9288U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t11, t3, t2, 1);
    t8 = (t11 + 12U);
    t15 = *((unsigned int *)t8);
    t21 = (1U * t15);
    t1 = (6U != t21);
    if (t1 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 6000);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t7, 6U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5936);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 2592U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(81, ng0);
    t13 = (t0 + 5936);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 9376);
    t7 = (t0 + 6000);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_size_not_matching(6U, t21, 0);
    goto LAB12;

}

static void work_a_0882566822_2603445318_p_1(char *t0)
{
    char t11[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5824);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(99, ng0);
    t7 = (t0 + 3272U);
    t8 = *((char **)t7);
    t7 = (t0 + 9304U);
    t9 = (t0 + 9382);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t7, t9, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 9304U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t11, t3, t2, 1);
    t8 = (t11 + 12U);
    t15 = *((unsigned int *)t8);
    t21 = (1U * t15);
    t1 = (4U != t21);
    if (t1 == 1)
        goto LAB11;

LAB12:    t9 = (t0 + 6128);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6064);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 2592U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(100, ng0);
    t13 = (t0 + 6064);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 9386);
    t7 = (t0 + 6128);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_size_not_matching(4U, t21, 0);
    goto LAB12;

}

static void work_a_0882566822_2603445318_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;

LAB0:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(122, ng0);
    t7 = (t0 + 2472U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t9 = (t6 == (unsigned char)0);
    if (t9 == 1)
        goto LAB19;

LAB20:    t5 = (unsigned char)0;

LAB21:    if (t5 == 1)
        goto LAB16;

LAB17:    t4 = (unsigned char)0;

LAB18:    if (t4 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t9 = (t6 == (unsigned char)0);
    if (t9 == 1)
        goto LAB30;

LAB31:    t5 = (unsigned char)0;

LAB32:    if (t5 == 1)
        goto LAB27;

LAB28:    t4 = (unsigned char)0;

LAB29:    if (t4 == 1)
        goto LAB24;

LAB25:    t1 = (unsigned char)0;

LAB26:    if (t1 != 0)
        goto LAB22;

LAB23:    xsi_set_current_line(142, ng0);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 2912U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(123, ng0);
    t7 = (t0 + 6192);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6192);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    t2 = (t0 + 2312U);
    t11 = *((char **)t2);
    t18 = *((unsigned char *)t11);
    t19 = (t18 == (unsigned char)2);
    t1 = t19;
    goto LAB15;

LAB16:    t2 = (t0 + 2152U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)2);
    t4 = t17;
    goto LAB18;

LAB19:    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t10 = *((unsigned char *)t7);
    t15 = (t10 == (unsigned char)3);
    t5 = t15;
    goto LAB21;

LAB22:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6192);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t20 = *((char **)t14);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB24:    t2 = (t0 + 2312U);
    t11 = *((char **)t2);
    t18 = *((unsigned char *)t11);
    t19 = (t18 == (unsigned char)3);
    t1 = t19;
    goto LAB26;

LAB27:    t2 = (t0 + 2152U);
    t8 = *((char **)t2);
    t16 = *((unsigned char *)t8);
    t17 = (t16 == (unsigned char)3);
    t4 = t17;
    goto LAB29;

LAB30:    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t10 = *((unsigned char *)t7);
    t15 = (t10 == (unsigned char)3);
    t5 = t15;
    goto LAB32;

}

static void work_a_0882566822_2603445318_p_3(char *t0)
{
    char t12[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5856);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(155, ng0);
    t7 = (t0 + 6256);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9390);
    t7 = (t0 + 6320);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t1);
    goto **((char **)t2);

LAB5:    t2 = (t0 + 2752U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(158, ng0);
    t7 = (t0 + 3592U);
    t8 = *((char **)t7);
    t7 = (t0 + 9320U);
    t9 = (t0 + 9392);
    t11 = (t12 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 1;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t15;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t7, t9, t12);
    if (t4 != 0)
        goto LAB14;

LAB16:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9394);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB17;

LAB18:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9396);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 6576);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);

LAB15:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t3, t2, 1);
    t8 = (t12 + 12U);
    t15 = *((unsigned int *)t8);
    t20 = (1U * t15);
    t1 = (2U != t20);
    if (t1 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 6320);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB10:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9398);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB23;

LAB25:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9400);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB28;

LAB29:
LAB24:    goto LAB8;

LAB11:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9402);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB30;

LAB32:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9404);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB35;

LAB36:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = (t0 + 9406);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t7, t12);
    if (t1 != 0)
        goto LAB39;

LAB40:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 6576);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);

LAB31:    goto LAB8;

LAB12:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 6384);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 6512);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 6576);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 6448);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB13:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6384);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 6640);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 6512);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6576);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 6448);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB14:    xsi_set_current_line(159, ng0);
    t13 = (t0 + 6384);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB15;

LAB17:    xsi_set_current_line(163, ng0);
    t10 = (t0 + 6448);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB15;

LAB19:    xsi_set_current_line(166, ng0);
    t10 = (t0 + 6512);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB15;

LAB21:    xsi_size_not_matching(2U, t20, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(179, ng0);
    t10 = (t0 + 6640);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6576);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t3, t2, 1);
    t8 = (t12 + 12U);
    t15 = *((unsigned int *)t8);
    t20 = (1U * t15);
    t1 = (2U != t20);
    if (t1 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 6320);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB24;

LAB26:    xsi_size_not_matching(2U, t20, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(183, ng0);
    t10 = (t0 + 6384);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB24;

LAB30:    xsi_set_current_line(190, ng0);
    t10 = (t0 + 6512);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t3, t2, 1);
    t8 = (t12 + 12U);
    t15 = *((unsigned int *)t8);
    t20 = (1U * t15);
    t1 = (2U != t20);
    if (t1 == 1)
        goto LAB33;

LAB34:    t9 = (t0 + 6320);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB31;

LAB33:    xsi_size_not_matching(2U, t20, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(193, ng0);
    t10 = (t0 + 6384);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t3, t2, 1);
    t8 = (t12 + 12U);
    t15 = *((unsigned int *)t8);
    t20 = (1U * t15);
    t1 = (2U != t20);
    if (t1 == 1)
        goto LAB37;

LAB38:    t9 = (t0 + 6320);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB31;

LAB37:    xsi_size_not_matching(2U, t20, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(196, ng0);
    t10 = (t0 + 6512);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9320U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t12, t3, t2, 1);
    t8 = (t12 + 12U);
    t15 = *((unsigned int *)t8);
    t20 = (1U * t15);
    t1 = (2U != t20);
    if (t1 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 6320);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB31;

LAB41:    xsi_size_not_matching(2U, t20, 0);
    goto LAB42;

}


extern void work_a_0882566822_2603445318_init()
{
	static char *pe[] = {(void *)work_a_0882566822_2603445318_p_0,(void *)work_a_0882566822_2603445318_p_1,(void *)work_a_0882566822_2603445318_p_2,(void *)work_a_0882566822_2603445318_p_3};
	xsi_register_didat("work_a_0882566822_2603445318", "isim/testcpt_isim_beh.exe.sim/work/a_0882566822_2603445318.didat");
	xsi_register_executes(pe);
}
