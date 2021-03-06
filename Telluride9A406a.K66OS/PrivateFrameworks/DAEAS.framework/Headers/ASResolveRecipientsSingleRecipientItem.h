/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASResolveRecipientsCertificatesItem, NSString;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	ASResolveRecipientsCertificatesItem *_certificates;	// 44 = 0x2c
}
@property(retain) ASResolveRecipientsCertificatesItem *certificates;	// G=0x3443495d; S=0x34434971; @synthesize=_certificates
@property(retain) NSString *emailAddress;	// G=0x34434925; S=0x34434939; @synthesize=_emailAddress
+ (BOOL)acceptsTopLevelLeaves;	// 0x34434461
+ (BOOL)frontingBasicTypes;	// 0x3443455d
+ (BOOL)notifyOfUnknownTokens;	// 0x344345b1
+ (BOOL)parsingLeafNode;	// 0x344344b5
+ (BOOL)parsingWithSubItems;	// 0x34434509
- (id)asParseRules;	// 0x34434605
// declared property getter: - (id)certificates;	// 0x3443495d
- (id)description;	// 0x344348ad
// declared property getter: - (id)emailAddress;	// 0x34434925
// declared property setter: - (void)setCertificates:(id)certificates;	// 0x34434971
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x34434939
@end

