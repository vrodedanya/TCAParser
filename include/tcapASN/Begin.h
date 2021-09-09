/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#ifndef	_Begin_H_
#define	_Begin_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OrigTransactionID.h"
#include "DialoguePortion.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ComponentPortion;

/* Begin */
typedef struct Begin {
	OrigTransactionID_t	 otid;
	DialoguePortion_t	*dialoguePortion	/* OPTIONAL */;
	struct ComponentPortion	*components	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Begin_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Begin;
extern asn_SEQUENCE_specifics_t asn_SPC_Begin_specs_1;
extern asn_TYPE_member_t asn_MBR_Begin_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ComponentPortion.h"

#endif	/* _Begin_H_ */
#include <asn_internal.h>
