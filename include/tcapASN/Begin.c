/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "Begin.h"

asn_TYPE_member_t asn_MBR_Begin_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Begin, otid),
		(ASN_TAG_CLASS_APPLICATION | (8 << 2)),
		0,
		&asn_DEF_OrigTransactionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otid"
		},
	{ ATF_POINTER, 2, offsetof(struct Begin, dialoguePortion),
		(ASN_TAG_CLASS_APPLICATION | (11 << 2)),
		0,
		&asn_DEF_DialoguePortion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dialoguePortion"
		},
	{ ATF_POINTER, 1, offsetof(struct Begin, components),
		(ASN_TAG_CLASS_APPLICATION | (12 << 2)),
		0,
		&asn_DEF_ComponentPortion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"components"
		},
};
static const int asn_MAP_Begin_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Begin_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Begin_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (8 << 2)), 0, 0, 0 }, /* otid */
    { (ASN_TAG_CLASS_APPLICATION | (11 << 2)), 1, 0, 0 }, /* dialoguePortion */
    { (ASN_TAG_CLASS_APPLICATION | (12 << 2)), 2, 0, 0 } /* components */
};
asn_SEQUENCE_specifics_t asn_SPC_Begin_specs_1 = {
	sizeof(struct Begin),
	offsetof(struct Begin, _asn_ctx),
	asn_MAP_Begin_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Begin_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Begin = {
	"Begin",
	"Begin",
	&asn_OP_SEQUENCE,
	asn_DEF_Begin_tags_1,
	sizeof(asn_DEF_Begin_tags_1)
		/sizeof(asn_DEF_Begin_tags_1[0]), /* 1 */
	asn_DEF_Begin_tags_1,	/* Same as above */
	sizeof(asn_DEF_Begin_tags_1)
		/sizeof(asn_DEF_Begin_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Begin_1,
	3,	/* Elements count */
	&asn_SPC_Begin_specs_1	/* Additional specs */
};
