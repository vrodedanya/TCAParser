/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "Continue.h"

asn_TYPE_member_t asn_MBR_Continue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Continue, otid),
		(ASN_TAG_CLASS_APPLICATION | (8 << 2)),
		0,
		&asn_DEF_OrigTransactionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otid"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Continue, dtid),
		(ASN_TAG_CLASS_APPLICATION | (9 << 2)),
		0,
		&asn_DEF_DestTransactionID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dtid"
		},
	{ ATF_POINTER, 2, offsetof(struct Continue, dialoguePortion),
		(ASN_TAG_CLASS_APPLICATION | (11 << 2)),
		0,
		&asn_DEF_DialoguePortion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dialoguePortion"
		},
	{ ATF_POINTER, 1, offsetof(struct Continue, components),
		(ASN_TAG_CLASS_APPLICATION | (12 << 2)),
		0,
		&asn_DEF_ComponentPortion,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"components"
		},
};
static const int asn_MAP_Continue_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_Continue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Continue_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (8 << 2)), 0, 0, 0 }, /* otid */
    { (ASN_TAG_CLASS_APPLICATION | (9 << 2)), 1, 0, 0 }, /* dtid */
    { (ASN_TAG_CLASS_APPLICATION | (11 << 2)), 2, 0, 0 }, /* dialoguePortion */
    { (ASN_TAG_CLASS_APPLICATION | (12 << 2)), 3, 0, 0 } /* components */
};
asn_SEQUENCE_specifics_t asn_SPC_Continue_specs_1 = {
	sizeof(struct Continue),
	offsetof(struct Continue, _asn_ctx),
	asn_MAP_Continue_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Continue_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Continue = {
	"Continue",
	"Continue",
	&asn_OP_SEQUENCE,
	asn_DEF_Continue_tags_1,
	sizeof(asn_DEF_Continue_tags_1)
		/sizeof(asn_DEF_Continue_tags_1[0]), /* 1 */
	asn_DEF_Continue_tags_1,	/* Same as above */
	sizeof(asn_DEF_Continue_tags_1)
		/sizeof(asn_DEF_Continue_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Continue_1,
	4,	/* Elements count */
	&asn_SPC_Continue_specs_1	/* Additional specs */
};

