/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#ifndef	_Abort_H_
#define	_Abort_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DestTransactionID.h"
#include "P-AbortCause.h"
#include "DialoguePortion.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum reason_PR {
	reason_PR_NOTHING,	/* No components present */
	reason_PR_p_abortCause,
	reason_PR_u_abortCause
} reason_PR;

/* Abort */
typedef struct Abort {
	DestTransactionID_t	 dtid;
	struct reason {
		reason_PR present;
		union Abort__reason_u {
			P_AbortCause_t	 p_abortCause;
			DialoguePortion_t	 u_abortCause;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *reason;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Abort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Abort;
extern asn_SEQUENCE_specifics_t asn_SPC_Abort_specs_1;
extern asn_TYPE_member_t asn_MBR_Abort_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Abort_H_ */
#include <asn_internal.h>