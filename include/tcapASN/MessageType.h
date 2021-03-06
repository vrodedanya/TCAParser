/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#ifndef	_MessageType_H_
#define	_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unidirectional.h"
#include "Begin.h"
#include "End.h"
#include "Continue.h"
#include "Abort.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MessageType_PR {
	MessageType_PR_NOTHING,	/* No components present */
	MessageType_PR_unidirectional,
	MessageType_PR_begin,
	MessageType_PR_end,
	MessageType_PR_continue,
	MessageType_PR_abort
} MessageType_PR;

/* MessageType */
typedef struct MessageType {
	MessageType_PR present;
	union MessageType_u {
		Unidirectional_t	 unidirectional;
		Begin_t	 begin;
		End_t	 end;
		Continue_t	 Continue;
		Abort_t	 abort;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _MessageType_H_ */
#include <asn_internal.h>
