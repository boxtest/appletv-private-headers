/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x37039831; S=0x37038e49; converted property
@property(assign) unsigned long matrixIndex;	// G=0x3703939d; S=0x37038e39; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x3714de61
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x37097f61
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x3714e0dd
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x3714dfad
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x3714dead
// converted property getter: - (id)color;	// 0x37039831
- (id)copyWithZone:(NSZone *)zone;	// 0x37060791
- (void)dealloc;	// 0x3703eefd
// converted property getter: - (unsigned long)matrixIndex;	// 0x3703939d
// converted property setter: - (void)setColor:(id)color;	// 0x37038e49
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x37038e39
@end
