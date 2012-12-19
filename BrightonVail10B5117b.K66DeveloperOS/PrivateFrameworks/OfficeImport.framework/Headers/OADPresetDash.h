/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDash.h"
#import "OfficeImport-Structs.h"


@interface OADPresetDash : OADDash {
	unsigned char mType;	// 9 = 0x9
	unsigned mIsTypeOverridden : 1;	// 10 = 0xa
}
@property(assign) int type;	// G=0x34a4c795; S=0x349f5221; converted property
+ (id)defaultProperties;	// 0x349f5191
- (id)initWithDefaults;	// 0x349f51d9
- (id)copyWithZone:(NSZone *)zone;	// 0x34b196d9
- (id)equivalentCustomDash;	// 0x34a62501
- (unsigned)hash;	// 0x34c2da0d
- (BOOL)isEqual:(id)equal;	// 0x34a4c6a9
- (BOOL)isTypeOverridden;	// 0x34a4c75d
// converted property setter: - (void)setType:(int)type;	// 0x349f5221
// converted property getter: - (int)type;	// 0x34a4c795
@end
