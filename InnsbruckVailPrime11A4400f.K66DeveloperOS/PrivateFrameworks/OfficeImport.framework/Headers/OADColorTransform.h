/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


@interface OADColorTransform : NSObject <NSCopying> {
	int mType;	// 4 = 0x4
}
+ (float)alphaByApplyingTransforms:(id)transforms toAlpha:(float)alpha;	// 0x3171672d
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x3178171d
+ (id)applyExpTransformWithValue:(float)value toColor:(id)color;	// 0x31840355
+ (id)applyHSLTransform:(id)transform toColor:(id)color;	// 0x318460d1
+ (id)applyRGBTransform:(id)transform toColor:(id)color skipGamma:(bool)gamma;	// 0x3184012d
+ (id)colorByApplyingTransforms:(id)transforms toColor:(id)color;	// 0x317162c1
- (id)initWithType:(int)type;	// 0x316d03c1
- (id)copyWithZone:(NSZone *)zone;	// 0x318edd49
- (unsigned)hash;	// 0x318edd99
- (BOOL)isEqual:(id)equal;	// 0x317cd641
- (int)type;	// 0x3178170d
@end

