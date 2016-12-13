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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/vthangar/Documents/Multiplier/Multiplier/Multiplier_VHDL.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0100474968_3212880686_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char t26[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t14;
    unsigned int t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4120);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4216);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7034);
    t4 = (t0 + 4280);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4216);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 7042);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t13 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t10 = (t0 + 6936U);
    t4 = xsi_base_array_concat(t4, t12, t8, (char)97, t1, t13, (char)97, t5, t10, (char)101);
    t11 = (t0 + 2448U);
    t16 = *((char **)t11);
    t11 = (t16 + 0);
    t15 = (4U + 4U);
    memcpy(t11, t4, t15);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 7046);
    *((int *)t1) = 1;
    t2 = (t0 + 7050);
    *((int *)t2) = 4;
    t14 = 1;
    t17 = 4;

LAB9:    if (t14 <= t17)
        goto LAB10;

LAB12:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 4280);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4216);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 4216);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB10:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2448U);
    t5 = *((char **)t4);
    t18 = (0 - 7);
    t15 = (t18 * -1);
    t19 = (1U * t15);
    t20 = (0 + t19);
    t4 = (t5 + t20);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t15 = (7 - 7);
    t19 = (t15 * 1U);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t5 = ((IEEE_P_2592010699) + 4024);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t18 = (1 - 7);
    t22 = (t18 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t4 = xsi_base_array_concat(t4, t12, t5, (char)99, (unsigned char)2, (char)97, t1, t13, (char)101);
    t9 = (t0 + 2448U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t22 = (1U + 7U);
    memcpy(t9, t4, t22);

LAB14:
LAB11:    t1 = (t0 + 7046);
    t14 = *((int *)t1);
    t2 = (t0 + 7050);
    t17 = *((int *)t2);
    if (t14 == t17)
        goto LAB12;

LAB16:    t18 = (t14 + 1);
    t14 = t18;
    t4 = (t0 + 7046);
    *((int *)t4) = t14;
    goto LAB9;

LAB13:    xsi_set_current_line(71, ng0);
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 6920U);
    t8 = xsi_base_array_concat(t8, t13, t10, (char)99, (unsigned char)2, (char)97, t9, t11, (char)101);
    t16 = (t0 + 2448U);
    t21 = *((char **)t16);
    t22 = (7 - 7);
    t23 = (t22 * 1U);
    t24 = (0 + t23);
    t16 = (t21 + t24);
    t27 = ((IEEE_P_2592010699) + 4024);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 4;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (4 - 7);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)99, (unsigned char)2, (char)97, t16, t28, (char)101);
    t30 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t8, t13, t25, t26);
    t33 = (t0 + 2568U);
    t34 = *((char **)t33);
    t33 = (t34 + 0);
    t35 = (t12 + 12U);
    t32 = *((unsigned int *)t35);
    t36 = (1U * t32);
    memcpy(t33, t30, t36);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t15 = (7 - 3);
    t19 = (t15 * 1U);
    t20 = (0 + t19);
    t1 = (t4 + t20);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 6984U);
    t10 = (t13 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 3;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t18 = (1 - 3);
    t22 = (t18 * -1);
    t22 = (t22 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t22;
    t5 = xsi_base_array_concat(t5, t12, t8, (char)97, t2, t9, (char)97, t1, t13, (char)101);
    t11 = (t0 + 2448U);
    t16 = *((char **)t11);
    t11 = (t16 + 0);
    t22 = (5U + 3U);
    memcpy(t11, t5, t22);
    goto LAB14;

}

static void work_a_0100474968_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);

LAB6:    t2 = (t0 + 4136);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4136);
    *((int *)t5) = 0;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 4344);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 1152U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4344);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}


extern void work_a_0100474968_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0100474968_3212880686_p_0,(void *)work_a_0100474968_3212880686_p_1};
	xsi_register_didat("work_a_0100474968_3212880686", "isim/Multiplier_TB_isim_beh.exe.sim/work/a_0100474968_3212880686.didat");
	xsi_register_executes(pe);
}
