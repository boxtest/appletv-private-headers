/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x315a63a5; S=0x315a63b9; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x315a644d; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x315a6415; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x315a63dd; S=0x315a63f1; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x315a5d19
+ (BOOL)frontingBasicTypes;	// 0x315a5e15
+ (BOOL)notifyOfUnknownTokens;	// 0x315a5e69
+ (BOOL)parsingLeafNode;	// 0x315a5d6d
+ (BOOL)parsingWithSubItems;	// 0x315a5dc1
- (void)addCertificateString:(id)string;	// 0x315a5ebd
- (id)asParseRules;	// 0x315a5f21
// declared property getter: - (id)certCount;	// 0x315a63a5
// declared property getter: - (id)certificates;	// 0x315a644d
- (void)dealloc;	// 0x315a631d
- (id)description;	// 0x315a6191
// declared property getter: - (id)easStatus;	// 0x315a6415
// declared property getter: - (id)recipientCount;	// 0x315a63dd
// declared property setter: - (void)setCertCount:(id)count;	// 0x315a63b9
- (void)setEASStatus:(id)status;	// 0x315a6429
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x315a63f1
@end
