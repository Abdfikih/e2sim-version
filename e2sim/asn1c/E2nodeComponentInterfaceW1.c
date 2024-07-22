/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-ied-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#include "E2nodeComponentInterfaceW1.h"

asn_TYPE_member_t asn_MBR_E2nodeComponentInterfaceW1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2nodeComponentInterfaceW1, ng_eNB_DU_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_IEs_NGENB_DU_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ng-eNB-DU-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_E2nodeComponentInterfaceW1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2nodeComponentInterfaceW1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ng-eNB-DU-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_E2nodeComponentInterfaceW1_specs_1 = {
	sizeof(struct E2nodeComponentInterfaceW1),
	offsetof(struct E2nodeComponentInterfaceW1, _asn_ctx),
	asn_MAP_E2nodeComponentInterfaceW1_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2nodeComponentInterfaceW1 = {
	"E2nodeComponentInterfaceW1",
	"E2nodeComponentInterfaceW1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2nodeComponentInterfaceW1_tags_1,
	sizeof(asn_DEF_E2nodeComponentInterfaceW1_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceW1_tags_1[0]), /* 1 */
	asn_DEF_E2nodeComponentInterfaceW1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2nodeComponentInterfaceW1_tags_1)
		/sizeof(asn_DEF_E2nodeComponentInterfaceW1_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_E2nodeComponentInterfaceW1_1,
	1,	/* Elements count */
	&asn_SPC_E2nodeComponentInterfaceW1_specs_1	/* Additional specs */
};

