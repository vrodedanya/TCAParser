/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "P-AbortCause.h"

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_P_AbortCause_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_P_AbortCause = {
	"P-AbortCause",
	"P-AbortCause",
	&asn_OP_NativeInteger,
	asn_DEF_P_AbortCause_tags_1,
	sizeof(asn_DEF_P_AbortCause_tags_1)
		/sizeof(asn_DEF_P_AbortCause_tags_1[0]) - 1, /* 1 */
	asn_DEF_P_AbortCause_tags_1,	/* Same as above */
	sizeof(asn_DEF_P_AbortCause_tags_1)
		/sizeof(asn_DEF_P_AbortCause_tags_1[0]), /* 2 */
	{ 0, 0, NativeInteger_constraint },
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};
