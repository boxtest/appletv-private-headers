/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"
#import "DAMailMessageAttachment.h"

@class NSNumber, NSString;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSCoding> {
	NSString *_attName;	// 40 = 0x28
	NSNumber *_attSize;	// 44 = 0x2c
	NSNumber *_attMethod;	// 48 = 0x30
	NSString *_attDisplayName;	// 52 = 0x34
	NSString *_attContentId;	// 56 = 0x38
	NSString *_attContentLocation;	// 60 = 0x3c
	NSNumber *_attIsInline;	// 64 = 0x40
	NSNumber *_hasBase64Transfer;	// 68 = 0x44
}
@property(copy) NSString *contentId;	// G=0x315620ed; S=0x31562101; @synthesize=_attContentId
@property(copy) NSString *contentLocation;	// G=0x31562125; S=0x31562139; @synthesize=_attContentLocation
@property(copy) NSString *displayName;	// G=0x315620b5; S=0x315620c9; @synthesize=_attDisplayName
@property(copy) NSNumber *hasBase64Transfer;	// G=0x31562195; S=0x315621a9; @synthesize=_hasBase64Transfer
@property(copy) NSNumber *isInline;	// G=0x3156215d; S=0x31562171; @synthesize=_attIsInline
@property(copy) NSNumber *method;	// G=0x3156207d; S=0x31562091; @synthesize=_attMethod
@property(copy) NSString *name;	// G=0x3156200d; S=0x31562021; @synthesize=_attName
@property(copy) NSNumber *size;	// G=0x31562045; S=0x31562059; @synthesize=_attSize
+ (BOOL)acceptsTopLevelLeaves;	// 0x315610c9
+ (BOOL)frontingBasicTypes;	// 0x315611c5
+ (BOOL)notifyOfUnknownTokens;	// 0x31561219
+ (BOOL)parsingLeafNode;	// 0x3156111d
+ (BOOL)parsingWithSubItems;	// 0x31561171
- (id)initWithCoder:(id)coder;	// 0x31561c25
- (id)asParseRules;	// 0x31561379
// declared property getter: - (id)contentId;	// 0x315620ed
// declared property getter: - (id)contentLocation;	// 0x31562125
- (void)dealloc;	// 0x315612a1
- (id)description;	// 0x31561b91
// declared property getter: - (id)displayName;	// 0x315620b5
- (void)encodeWithCoder:(id)coder;	// 0x31561e41
// declared property getter: - (id)hasBase64Transfer;	// 0x31562195
// declared property getter: - (id)isInline;	// 0x3156215d
- (BOOL)isMostDefinitelyBase64ed;	// 0x31561fe9
// declared property getter: - (id)method;	// 0x3156207d
// declared property getter: - (id)name;	// 0x3156200d
// declared property setter: - (void)setContentId:(id)anId;	// 0x31562101
// declared property setter: - (void)setContentLocation:(id)location;	// 0x31562139
// declared property setter: - (void)setDisplayName:(id)name;	// 0x315620c9
// declared property setter: - (void)setHasBase64Transfer:(id)transfer;	// 0x315621a9
// declared property setter: - (void)setIsInline:(id)anInline;	// 0x31562171
// declared property setter: - (void)setMethod:(id)method;	// 0x31562091
// declared property setter: - (void)setName:(id)name;	// 0x31562021
- (void)setPercentEscapedName:(id)name;	// 0x3156126d
// declared property setter: - (void)setSize:(id)size;	// 0x31562059
// declared property getter: - (id)size;	// 0x31562045
@end

