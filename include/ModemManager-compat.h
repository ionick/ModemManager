/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * ModemManager Interface Specification
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2017 Google, Inc.
 */

#ifndef _MODEMMANAGER_COMPAT_H_
#define _MODEMMANAGER_COMPAT_H_

#if !defined (__MODEM_MANAGER_H_INSIDE__)
#error "Only <ModemManager.h> can be included directly."
#endif

#include <ModemManager-enums.h>

/**
 * SECTION:mm-compat
 * @title: API break replacements
 * @short_description: List of deprecated methods, types and symbols.
 *
 * These compatibility types and methods are flagged as deprecated and
 * therefore shouldn't be used in newly written code. They are provided to
 * avoid unnecessary API/ABI breaks.
 */

/* deprecated attribute support since gcc 3.1 */
#if defined __GNUC__ && (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1))
# define MM_DEPRECATED __attribute__((__deprecated__))
#else
# define MM_DEPRECATED
#endif

#ifndef MM_DISABLE_DEPRECATED

/* The following type exists just so that we can get deprecation warnings */
MM_DEPRECATED
typedef int MMModemBandDeprecated;

/**
 * MM_MODEM_BAND_U2100:
 *
 * WCDMA 2100 MHz (UTRAN band 1).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_1 instead.
 */
#define MM_MODEM_BAND_U2100 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_1)

/**
 * MM_MODEM_BAND_U1900:
 *
 * WCDMA 1900 MHz (UTRAN band 2).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_2 instead.
 */
#define MM_MODEM_BAND_U1900 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_2)

/**
 * MM_MODEM_BAND_U1800:
 *
 * WCDMA 1800 MHz (UTRAN band 3).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_3 instead.
 */
#define MM_MODEM_BAND_U1800 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_3)

/**
 * MM_MODEM_BAND_U17IV:
 *
 * AWS 1700/2100 MHz (UTRAN band 4).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_4 instead.
 */
#define MM_MODEM_BAND_U17IV ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_4)

/**
 * MM_MODEM_BAND_U850:
 *
 * UMTS 850 MHz (UTRAN band 5).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_5 instead.
 */
#define MM_MODEM_BAND_U850 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_5)

/**
 * MM_MODEM_BAND_U800:
 *
 * UMTS 800 MHz (UTRAN band 6).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_6 instead.
 */
#define MM_MODEM_BAND_U800 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_6)

/**
 * MM_MODEM_BAND_U2600:
 *
 * UMTS 2600 MHz (UTRAN band 7).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_7 instead.
 */
#define MM_MODEM_BAND_U2600 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_7)

/**
 * MM_MODEM_BAND_U900:
 *
 * UMTS 900 MHz (UTRAN band 8).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_8 instead.
 */
#define MM_MODEM_BAND_U900 ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_8)

/**
 * MM_MODEM_BAND_U17IX:
 *
 * UMTS 1700 MHz (UTRAN band 9).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_UTRAN_9 instead.
 */
#define MM_MODEM_BAND_U17IX ((MMModemBandDeprecated)MM_MODEM_BAND_UTRAN_9)

/**
 * MM_MODEM_BAND_EUTRAN_I:
 *
 * E-UTRAN band 1.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_1 instead.
 */
#define MM_MODEM_BAND_EUTRAN_I ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_1)

/**
 * MM_MODEM_BAND_EUTRAN_II:
 *
 * E-UTRAN band 2.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_2 instead.
 */
#define MM_MODEM_BAND_EUTRAN_II ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_2)

/**
 * MM_MODEM_BAND_EUTRAN_III:
 *
 * E-UTRAN band 3.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_3 instead.
 */
#define MM_MODEM_BAND_EUTRAN_III ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_3)

/**
 * MM_MODEM_BAND_EUTRAN_IV:
 *
 * E-UTRAN band 4.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_4 instead.
 */
#define MM_MODEM_BAND_EUTRAN_IV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_4)

/**
 * MM_MODEM_BAND_EUTRAN_V:
 *
 * E-UTRAN band 5.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_5 instead.
 */
#define MM_MODEM_BAND_EUTRAN_V ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_5)

/**
 * MM_MODEM_BAND_EUTRAN_VI:
 *
 * E-UTRAN band 6.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_6 instead.
 */
#define MM_MODEM_BAND_EUTRAN_VI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_6)

/**
 * MM_MODEM_BAND_EUTRAN_VII:
 *
 * E-UTRAN band 7.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_7 instead.
 */
#define MM_MODEM_BAND_EUTRAN_VII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_7)

/**
 * MM_MODEM_BAND_EUTRAN_VIII:
 *
 * E-UTRAN band 8.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_8 instead.
 */
#define MM_MODEM_BAND_EUTRAN_VIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_8)

/**
 * MM_MODEM_BAND_EUTRAN_IX:
 *
 * E-UTRAN band 9.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_9 instead.
 */
#define MM_MODEM_BAND_EUTRAN_IX ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_9)

/**
 * MM_MODEM_BAND_EUTRAN_X:
 *
 * E-UTRAN band 10.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_10 instead.
 */
#define MM_MODEM_BAND_EUTRAN_X ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_10)

/**
 * MM_MODEM_BAND_EUTRAN_XI:
 *
 * E-UTRAN band 11.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_11 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_11)

/**
 * MM_MODEM_BAND_EUTRAN_XII:
 *
 * E-UTRAN band 12.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_12 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_12)

/**
 * MM_MODEM_BAND_EUTRAN_XIII:
 *
 * E-UTRAN band 13.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_13 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_13)

/**
 * MM_MODEM_BAND_EUTRAN_XIV:
 *
 * E-UTRAN band 14.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_14 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XIV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_14)

/**
 * MM_MODEM_BAND_EUTRAN_XVII:
 *
 * E-UTRAN band 17.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_17 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XVII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_17)

/**
 * MM_MODEM_BAND_EUTRAN_XVIII:
 *
 * E-UTRAN band 18.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_18 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XVIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_18)

/**
 * MM_MODEM_BAND_EUTRAN_XIX:
 *
 * E-UTRAN band 19.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_19 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XIX ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_19)

/**
 * MM_MODEM_BAND_EUTRAN_XX:
 *
 * E-UTRAN band 20.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_20 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XX ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_20)

/**
 * MM_MODEM_BAND_EUTRAN_XXI:
 *
 * E-UTRAN band 21.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_21 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_21)

/**
 * MM_MODEM_BAND_EUTRAN_XXII:
 *
 * E-UTRAN band 22.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_22 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_22)

/**
 * MM_MODEM_BAND_EUTRAN_XXIII:
 *
 * E-UTRAN band 23.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_23 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_23)

/**
 * MM_MODEM_BAND_EUTRAN_XXIV:
 *
 * E-UTRAN band 24.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_24 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXIV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_24)

/**
 * MM_MODEM_BAND_EUTRAN_XXV:
 *
 * E-UTRAN band 25.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_25 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_25)

/**
 * MM_MODEM_BAND_EUTRAN_XXVI:
 *
 * E-UTRAN band 26.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_26 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXVI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_26)

/**
 * MM_MODEM_BAND_EUTRAN_XXXIII:
 *
 * E-UTRAN band 33.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_33 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_33)

/**
 * MM_MODEM_BAND_EUTRAN_XXXIV:
 *
 * E-UTRAN band 34.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_34 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXIV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_34)

/**
 * MM_MODEM_BAND_EUTRAN_XXXV:
 *
 * E-UTRAN band 35.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_35 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_35)

/**
 * MM_MODEM_BAND_EUTRAN_XXXVI:
 *
 * E-UTRAN band 36.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_36 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXVI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_36)

/**
 * MM_MODEM_BAND_EUTRAN_XXXVII:
 *
 * E-UTRAN band 37.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_37 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXVII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_37)

/**
 * MM_MODEM_BAND_EUTRAN_XXXVIII:
 *
 * E-UTRAN band 38.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_38 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXVIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_38)

/**
 * MM_MODEM_BAND_EUTRAN_XXXIX:
 *
 * E-UTRAN band 39.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_39 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XXXIX ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_39)

/**
 * MM_MODEM_BAND_EUTRAN_XL:
 *
 * E-UTRAN band 40.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_40 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XL ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_40)

/**
 * MM_MODEM_BAND_EUTRAN_XLI:
 *
 * E-UTRAN band 41.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_41 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XLI ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_41)

/**
 * MM_MODEM_BAND_EUTRAN_XLII:
 *
 * E-UTRAN band 42.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_42 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XLII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_42)

/**
 * MM_MODEM_BAND_EUTRAN_XLIII:
 *
 * E-UTRAN band 43.
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_43 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XLIII ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_43)

/**
 * MM_MODEM_BAND_EUTRAN_XLIV:
 *
 * E-UTRAN band 44.
 *
 * Since: 1.4
 * Deprecated: 1.8: Use #MM_MODEM_BAND_EUTRAN_44 instead.
 */
#define MM_MODEM_BAND_EUTRAN_XLIV ((MMModemBandDeprecated)MM_MODEM_BAND_EUTRAN_44)

/**
 * MM_MODEM_BAND_CDMA_BC0_CELLULAR_800:
 *
 * CDMA Band Class 0 (US Cellular 850MHz)
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC0 instead.
 */
#define MM_MODEM_BAND_CDMA_BC0_CELLULAR_800 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC0)

/**
 * MM_MODEM_BAND_CDMA_BC1_PCS_1900:
 *
 * CDMA Band Class 1 (US PCS 1900MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC1 instead.
 */
#define MM_MODEM_BAND_CDMA_BC1_PCS_1900 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC1)

/**
 * MM_MODEM_BAND_CDMA_BC2_TACS:
 *
 * CDMA Band Class 2 (UK TACS 900MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC2 instead.
 */
#define MM_MODEM_BAND_CDMA_BC2_TACS ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC2)

/**
 * MM_MODEM_BAND_CDMA_BC3_JTACS:
 *
 * CDMA Band Class 3 (Japanese TACS).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC3 instead.
 */
#define MM_MODEM_BAND_CDMA_BC3_JTACS ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC3)

/**
 * MM_MODEM_BAND_CDMA_BC4_KOREAN_PCS:
 *
 * CDMA Band Class 4 (Korean PCS).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC4 instead.
 */
#define MM_MODEM_BAND_CDMA_BC4_KOREAN_PCS ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC4)

/**
 * MM_MODEM_BAND_CDMA_BC5_NMT450:
 *
 * CDMA Band Class 5 (NMT 450MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC5 instead.
 */
#define MM_MODEM_BAND_CDMA_BC5_NMT450 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC5)

/**
 * MM_MODEM_BAND_CDMA_BC6_IMT2000:
 *
 * CDMA Band Class 6 (IMT2000 2100MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC6 instead.
 */
#define MM_MODEM_BAND_CDMA_BC6_IMT2000 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC6)

/**
 * MM_MODEM_BAND_CDMA_BC7_CELLULAR_700:
 *
 * CDMA Band Class 7 (Cellular 700MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC7 instead.
 */
#define MM_MODEM_BAND_CDMA_BC7_CELLULAR_700 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC7)

/**
 * MM_MODEM_BAND_CDMA_BC8_1800:
 *
 * CDMA Band Class 8 (1800MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC8 instead.
 */
#define MM_MODEM_BAND_CDMA_BC8_1800 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC8)

/**
 * MM_MODEM_BAND_CDMA_BC9_900:
 *
 * CDMA Band Class 9 (900MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC9 instead.
 */
#define MM_MODEM_BAND_CDMA_BC9_900 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC9)

/**
 * MM_MODEM_BAND_CDMA_BC10_SECONDARY_800:
 *
 * CDMA Band Class 10 (US Secondary 800).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC10 instead.
 */
#define MM_MODEM_BAND_CDMA_BC10_SECONDARY_800 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC10)

/**
 * MM_MODEM_BAND_CDMA_BC11_PAMR_400:
 *
 * CDMA Band Class 11 (European PAMR 400MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC11 instead.
 */
#define MM_MODEM_BAND_CDMA_BC11_PAMR_400 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC11)

/**
 * MM_MODEM_BAND_CDMA_BC12_PAMR_800:
 *
 * CDMA Band Class 12 (PAMR 800MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC12 instead.
 */
#define MM_MODEM_BAND_CDMA_BC12_PAMR_800 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC12)

/**
 * MM_MODEM_BAND_CDMA_BC13_IMT2000_2500:
 *
 * CDMA Band Class 13 (IMT2000 2500MHz Expansion).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC13 instead.
 */
#define MM_MODEM_BAND_CDMA_BC13_IMT2000_2500 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC13)

/**
 * MM_MODEM_BAND_CDMA_BC14_PCS2_1900:
 *
 * CDMA Band Class 14 (More US PCS 1900MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC14 instead.
 */
#define MM_MODEM_BAND_CDMA_BC14_PCS2_1900 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC14)

/**
 * MM_MODEM_BAND_CDMA_BC15_AWS:
 *
 * CDMA Band Class 15 (AWS 1700MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC15 instead.
 */
#define MM_MODEM_BAND_CDMA_BC15_AWS ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC15)

/**
 * MM_MODEM_BAND_CDMA_BC16_US_2500:
 *
 * CDMA Band Class 16 (US 2500MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC16 instead.
 */
#define MM_MODEM_BAND_CDMA_BC16_US_2500 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC16)

/**
 * MM_MODEM_BAND_CDMA_BC17_US_FLO_2500:
 *
 * CDMA Band Class 17 (US 2500MHz Forward Link Only).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC17 instead.
 */
#define MM_MODEM_BAND_CDMA_BC17_US_FLO_2500 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC17)

/**
 * MM_MODEM_BAND_CDMA_BC18_US_PS_700:
 *
 * CDMA Band Class 18 (US 700MHz Public Safety).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC18 instead.
 */
#define MM_MODEM_BAND_CDMA_BC18_US_PS_700 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC18)

/**
 * MM_MODEM_BAND_CDMA_BC19_US_LOWER_700:
 *
 * CDMA Band Class 19 (US Lower 700MHz).
 *
 * Since: 1.0
 * Deprecated: 1.8: Use #MM_MODEM_BAND_CDMA_BC19 instead.
 */
#define MM_MODEM_BAND_CDMA_BC19_US_LOWER_700 ((MMModemBandDeprecated)MM_MODEM_BAND_CDMA_BC19)

/* The following type exists just so that we can get deprecation warnings */
MM_DEPRECATED
typedef int MMModemLocationSourceDeprecated;

/**
 * MM_MODEM_LOCATION_SOURCE_AGPS:
 *
 * A-GPS location requested.
 *
 * Since: 1.6
 * Deprecated: 1.12.0: Use #MM_MODEM_LOCATION_SOURCE_AGPS_MSA instead.
 */
#define MM_MODEM_LOCATION_SOURCE_AGPS ((MMModemLocationSourceDeprecated)MM_MODEM_LOCATION_SOURCE_AGPS_MSA)

/* The following type exists just so that we can get deprecation warnings */
MM_DEPRECATED
typedef int MMModemCapabilityDeprecated;

/**
 * MM_MODEM_CAPABILITY_LTE_ADVANCED:
 *
 * Modem has LTE Advanced data capability.
 *
 * This value is deprecated because it is not used anywhere. LTE Advanced
 * capable devices are reported as LTE capable.
 *
 * Since: 1.0
 * Deprecated: 1.14.0.
 */
#define MM_MODEM_CAPABILITY_LTE_ADVANCED ((MMModemCapabilityDeprecated)(1 << 4))

/* The following type exists just so that we can get deprecation warnings */
MM_DEPRECATED
typedef int MMMobileEquipmentErrorDeprecated;

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_IMSI_UNKNOWN_IN_HLR:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_IMSI_UNKNOWN_IN_HSS instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_IMSI_UNKNOWN_IN_HLR (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_IMSI_UNKNOWN_IN_HSS

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_MS:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_ILLEGAL_UE instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_MS (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_ILLEGAL_UE

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_IMSI_UNKNOWN_IN_VLR:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_IMSI_UNKNOWN_IN_VLR instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_IMSI_UNKNOWN_IN_VLR (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_IMSI_UNKNOWN_IN_VLR

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_ME:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_ILLEGAL_ME instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_ILLEGAL_ME (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_ILLEGAL_ME

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_NOT_ALLOWED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_PS_SERVICES_NOT_ALLOWED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_PS_SERVICES_NOT_ALLOWED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_AND_NON_GPRS_SERVICES_NOT_ALLOWED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_PS_AND_NON_PS_SERVICES_NOT_ALLOWED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_AND_NON_GPRS_SERVICES_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_PS_AND_NON_PS_SERVICES_NOT_ALLOWED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_PLMN_NOT_ALLOWED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_PLMN_NOT_ALLOWED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_PLMN_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_PLMN_NOT_ALLOWED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_LOCATION_NOT_ALLOWED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_AREA_NOT_ALLOWED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_LOCATION_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_AREA_NOT_ALLOWED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_ROAMING_NOT_ALLOWED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_ROAMING_NOT_ALLOWED_IN_AREA instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_ROAMING_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_ROAMING_NOT_ALLOWED_IN_AREA

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_NO_CELLS_IN_LOCATION_AREA:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_NO_CELLS_IN_AREA instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_NO_CELLS_IN_LOCATION_AREA (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_NO_CELLS_IN_AREA

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_NETWORK_FAILURE:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_NETWORK_FAILURE_ATTACH instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_NETWORK_FAILURE (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_NETWORK_FAILURE_ATTACH

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_CONGESTION:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_CONGESTION instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_CONGESTION (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_CONGESTION

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_NOT_AUTHORIZED_FOR_CSG:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_NOT_AUTHORIZED_FOR_CSG instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_NOT_AUTHORIZED_FOR_CSG (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_NOT_AUTHORIZED_FOR_CSG

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_INSUFFICIENT_RESOURCES:
 *
 * Since: 1.4
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_INSUFFICIENT_RESOURCES instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_INSUFFICIENT_RESOURCES (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_INSUFFICIENT_RESOURCES

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_MISSING_OR_UNKNOWN_APN:
 *
 * Since: 1.4
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_MISSING_OR_UNKNOWN_APN instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_MISSING_OR_UNKNOWN_APN (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_MISSING_OR_UNKNOWN_APN

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNKNOWN_PDP_ADDRESS_OR_TYPE:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_UNKNOWN_PDP_ADDRESS_OR_TYPE instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNKNOWN_PDP_ADDRESS_OR_TYPE (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_UNKNOWN_PDP_ADDRESS_OR_TYPE

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_USER_AUTHENTICATION_FAILED:
 *
 * Since: 1.4
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_USER_AUTHENTICATION_FAILED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_USER_AUTHENTICATION_FAILED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_USER_AUTHENTICATION_FAILED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_ACTIVATION_REJECTED_BY_GGSN_OR_GW:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_ACTIVATION_REJECTED_BY_GGSN_OR_GW instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_ACTIVATION_REJECTED_BY_GGSN_OR_GW (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_ACTIVATION_REJECTED_BY_GGSN_OR_GW

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_ACTIVATION_REJECTED_UNSPECIFIED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_ACTIVATION_REJECTED_UNSPECIFIED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_ACTIVATION_REJECTED_UNSPECIFIED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_ACTIVATION_REJECTED_UNSPECIFIED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUPPORTED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_NOT_SUPPORTED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUPPORTED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_NOT_SUPPORTED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUBSCRIBED:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_NOT_SUBSCRIBED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_NOT_SUBSCRIBED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_NOT_SUBSCRIBED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_OUT_OF_ORDER:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_OUT_OF_ORDER instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SERVICE_OPTION_OUT_OF_ORDER (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SERVICE_OPTION_OUT_OF_ORDER

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_FEATURE_NOT_SUPPORTED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_FEATURE_NOT_SUPPORTED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_FEATURE_NOT_SUPPORTED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_FEATURE_NOT_SUPPORTED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTIC_ERROR_IN_TFT_OPERATION:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SEMANTIC_ERROR_IN_TFT_OPERATION instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTIC_ERROR_IN_TFT_OPERATION (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SEMANTIC_ERROR_IN_TFT_OPERATION

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SYNTACTICAL_ERROR_IN_TFT_OPERATION:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SYNTACTICAL_ERROR_IN_TFT_OPERATION instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SYNTACTICAL_ERROR_IN_TFT_OPERATION (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SYNTACTICAL_ERROR_IN_TFT_OPERATION

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNKNOWN_PDP_CONTEXT:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_UNKNOWN_PDP_CONTEXT instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNKNOWN_PDP_CONTEXT (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_UNKNOWN_PDP_CONTEXT

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTIC_ERRORS_IN_PACKET_FILTER:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SEMANTIC_ERRORS_IN_PACKET_FILTER instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTIC_ERRORS_IN_PACKET_FILTER (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SEMANTIC_ERRORS_IN_PACKET_FILTER

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SYNTACTICAL_ERROR_IN_PACKET_FILTER:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SYNTACTICAL_ERROR_IN_PACKET_FILTER instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SYNTACTICAL_ERROR_IN_PACKET_FILTER (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SYNTACTICAL_ERROR_IN_PACKET_FILTER

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_PDP_CONTEXT_WITHOUT_TFT_ALREADY_ACTIVATED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_PDP_CONTEXT_WITHOUT_TFT_ALREADY_ACTIVATED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_PDP_CONTEXT_WITHOUT_TFT_ALREADY_ACTIVATED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_PDP_CONTEXT_WITHOUT_TFT_ALREADY_ACTIVATED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_PDP_AUTH_FAILURE:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_PDP_AUTH_FAILURE instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_PDP_AUTH_FAILURE (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_PDP_AUTH_FAILURE

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_INVALID_MOBILE_CLASS:
 *
 * Since: 1.0
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_INVALID_MOBILE_CLASS instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_INVALID_MOBILE_CLASS (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_INVALID_MOBILE_CLASS

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_LAST_PDN_DISCONNECTION_NOT_ALLOWED_LEGACY:
 *
 * Since: 1.14
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_LAST_PDN_DISCONNECTION_NOT_ALLOWED_LEGACY instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_LAST_PDN_DISCONNECTION_NOT_ALLOWED_LEGACY (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_LAST_PDN_DISCONNECTION_NOT_ALLOWED_LEGACY

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_LAST_PDN_DISCONNECTION_NOT_ALLOWED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_LAST_PDN_DISCONNECTION_NOT_ALLOWED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_LAST_PDN_DISCONNECTION_NOT_ALLOWED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_LAST_PDN_DISCONNECTION_NOT_ALLOWED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTICALLY_INCORRECT_MESSAGE:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_SEMANTICALLY_INCORRECT_MESSAGE instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_SEMANTICALLY_INCORRECT_MESSAGE (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_SEMANTICALLY_INCORRECT_MESSAGE

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_MANDATORY_IE_ERROR:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_INVALID_MANDATORY_INFORMATION instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_MANDATORY_IE_ERROR (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_INVALID_MANDATORY_INFORMATION

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_IE_NOT_IMPLEMENTED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_MESSAGE_TYPE_NOT_IMPLEMENTED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_IE_NOT_IMPLEMENTED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_MESSAGE_TYPE_NOT_IMPLEMENTED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_CONDITIONAL_IE_ERROR:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_CONDITIONAL_IE_ERROR instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_CONDITIONAL_IE_ERROR (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_CONDITIONAL_IE_ERROR

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNSPECIFIED_PROTOCOL_ERROR:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_UNSPECIFIED_PROTOCOL_ERROR instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_UNSPECIFIED_PROTOCOL_ERROR (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_UNSPECIFIED_PROTOCOL_ERROR

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_OPERATOR_DETERMINED_BARRING:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_OPERATOR_DETERMINED_BARRING instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_OPERATOR_DETERMINED_BARRING (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_OPERATOR_DETERMINED_BARRING

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_MAXIMUM_NUMBER_OF_PDP_CONTEXTS_REACHED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_MAXIMUM_NUMBER_OF_BEARERS_REACHED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_MAXIMUM_NUMBER_OF_PDP_CONTEXTS_REACHED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_MAXIMUM_NUMBER_OF_BEARERS_REACHED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_REQUESTED_APN_NOT_SUPPORTED:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_REQUESTED_APN_NOT_SUPPORTED instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_REQUESTED_APN_NOT_SUPPORTED (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_REQUESTED_APN_NOT_SUPPORTED

/**
 * MM_MOBILE_EQUIPMENT_ERROR_GPRS_REQUEST_REJECTED_BCM_VIOLATION:
 *
 * Since: 1.8
 * Deprecated: 1.18.0: Use #MM_MOBILE_EQUIPMENT_ERROR_REQUEST_REJECTED_BCM_VIOLATION instead.
 */
#define MM_MOBILE_EQUIPMENT_ERROR_GPRS_REQUEST_REJECTED_BCM_VIOLATION (MMMobileEquipmentErrorDeprecated)MM_MOBILE_EQUIPMENT_ERROR_REQUEST_REJECTED_BCM_VIOLATION

#endif /* MM_DISABLE_DEPRECATED */

#endif /* _MODEMMANAGER_COMPAT_H_ */
