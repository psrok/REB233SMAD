/**
 * @file mac_user_build_config.h
 *
 * @brief This header file sets user defined switches for configuring the application
 *
 * $Id: mac_user_build_config.h 30699 2012-02-08 07:27:20Z sschneid $
 *
 * @author    Atmel Corporation: http://www.atmel.com
 * @author    Support email: avr@atmel.com
 */
/*
 * Copyright (c) 2011, Atmel Corporation All rights reserved.
 *
 * Licensed under Atmel's Limited License Agreement --> EULA.txt
 */

/* Prevent double inclusion */
#ifndef MAC_USER_BUILD_CONFIG_H
#define MAC_USER_BUILD_CONFIG_H

/* === Includes ============================================================= */


/* === Macros =============================================================== */

#define MAC_ASSOCIATION_INDICATION_RESPONSE     (1)
#define MAC_ASSOCIATION_REQUEST_CONFIRM         (1)
#define MAC_BEACON_NOTIFY_INDICATION            (0)
#define MAC_DISASSOCIATION_BASIC_SUPPORT        (0)
#define MAC_DISASSOCIATION_FFD_SUPPORT          (0)
#define MAC_GET_SUPPORT                         (0)
#define MAC_INDIRECT_DATA_BASIC                 (1)
#define MAC_INDIRECT_DATA_FFD                   (1)
#define MAC_ORPHAN_INDICATION_RESPONSE          (0)
#define MAC_PAN_ID_CONFLICT_AS_PC               (0)
#define MAC_PAN_ID_CONFLICT_NON_PC              (0)
#define MAC_PURGE_REQUEST_CONFIRM               (0)
#define MAC_RX_ENABLE_SUPPORT                   (0)
#define MAC_SCAN_ACTIVE_REQUEST_CONFIRM         (1)
#define MAC_SCAN_ED_REQUEST_CONFIRM             (0)
#define MAC_SCAN_ORPHAN_REQUEST_CONFIRM         (0)
#define MAC_SCAN_PASSIVE_REQUEST_CONFIRM        (0)
#define MAC_START_REQUEST_CONFIRM               (1)
#define MAC_SYNC_LOSS_INDICATION                (0)
#define MAC_SYNC_REQUEST                        (0)

/* === Types ================================================================ */


/* === Externals ============================================================ */


/* === Prototypes =========================================================== */

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif


#endif  /* MAC_USER_BUILD_CONFIG_H */
/* EOF */

