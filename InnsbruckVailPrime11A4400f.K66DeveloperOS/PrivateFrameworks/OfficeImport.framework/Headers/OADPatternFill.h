/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class OADPattern, OADColor;

@interface OADPatternFill : OADFill {
	OADColor *mFgColor;	// 12 = 0xc
	BOOL mIsFgColorOverridden;	// 16 = 0x10
	OADColor *mBgColor;	// 20 = 0x14
	BOOL mIsBgColorOverridden;	// 24 = 0x18
	OADPattern *mPattern;	// 28 = 0x1c
	BOOL mIsPatternOverridden;	// 32 = 0x20
}
@property(retain) id bgColor;	// G=0x318ef62d; S=0x317cbb61; converted property
@property(retain) id fgColor;	// G=0x318ef5c9; S=0x317cbb15; converted property
@property(retain) id pattern;	// G=0x318ef691; S=0x317cbac5; converted property
+ (id)defaultProperties;	// 0x317cb87d
- (id)initWithDefaults;	// 0x317cb8c5
// converted property getter: - (id)bgColor;	// 0x318ef62d
- (id)copyWithZone:(NSZone *)zone;	// 0x318ef475
- (void)dealloc;	// 0x317d4fad
// converted property getter: - (id)fgColor;	// 0x318ef5c9
- (unsigned)hash;	// 0x317cbe0d
- (BOOL)isBgColorOverridden;	// 0x318ef65d
- (BOOL)isEqual:(id)equal;	// 0x317cbd31
- (BOOL)isFgColorOverridden;	// 0x318ef5f9
- (BOOL)isPatternOverridden;	// 0x318ef6c1
- (id)namedImageDataWithBlipCollection:(id)blipCollection;	// 0x318ef771
// converted property getter: - (id)pattern;	// 0x318ef691
// converted property setter: - (void)setBgColor:(id)color;	// 0x317cbb61
- (void)setColor:(id)color;	// 0x318ef6f5
// converted property setter: - (void)setFgColor:(id)color;	// 0x317cbb15
- (void)setParent:(id)parent;	// 0x317cbbad
// converted property setter: - (void)setPattern:(id)pattern;	// 0x317cbac5
- (void)setStyleColor:(id)color;	// 0x318ef705
@end

