/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject <NSCopying> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mLeftBorderIndex;	// 8 = 0x8
	unsigned mRightBorderIndex;	// 12 = 0xc
	unsigned mTopBorderIndex;	// 16 = 0x10
	unsigned mBottomBorderIndex;	// 20 = 0x14
	unsigned mDiagonalBorderIndex;	// 24 = 0x18
	unsigned mVerticalBorderIndex;	// 28 = 0x1c
	unsigned mHorizontalBorderIndex;	// 32 = 0x20
}
@property(retain) id bottomBorder;	// G=0x318eb53d; S=0x318df3f9; converted property
@property(retain) id diagonalBorder;	// G=0x31a99935; S=0x319e03fd; converted property
@property(retain) id horizontalBorder;	// G=0x31a99f99; S=0x31a48bdd; converted property
@property(retain) id leftBorder;	// G=0x318eb4fd; S=0x318df32d; converted property
@property(retain) id rightBorder;	// G=0x318eb579; S=0x318df371; converted property
@property(retain) id topBorder;	// G=0x318eb365; S=0x318df3b5; converted property
@property(retain) id verticalBorder;	// G=0x31a99821; S=0x31a48b99; converted property
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal resources:(id)resources;	// 0x319e0169
+ (id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal vertical:(id)vertical horizontal:(id)horizontal resources:(id)resources;	// 0x31a48b39
+ (id)bordersWithResources:(id)resources;	// 0x319e01e1
- (id)initWithResources:(id)resources;	// 0x319e0225
// converted property getter: - (id)bottomBorder;	// 0x318eb53d
- (id)copyWithZone:(NSZone *)zone;	// 0x31ace7dd
// converted property getter: - (id)diagonalBorder;	// 0x31a99935
- (unsigned)hash;	// 0x31ace7b1
// converted property getter: - (id)horizontalBorder;	// 0x31a99f99
- (BOOL)isEqual:(id)equal;	// 0x319e0a15
- (BOOL)isEqualToBorders:(id)borders;	// 0x319e0a69
// converted property getter: - (id)leftBorder;	// 0x318eb4fd
// converted property getter: - (id)rightBorder;	// 0x318eb579
// converted property setter: - (void)setBottomBorder:(id)border;	// 0x318df3f9
// converted property setter: - (void)setDiagonalBorder:(id)border;	// 0x319e03fd
// converted property setter: - (void)setHorizontalBorder:(id)border;	// 0x31a48bdd
// converted property setter: - (void)setLeftBorder:(id)border;	// 0x318df32d
// converted property setter: - (void)setRightBorder:(id)border;	// 0x318df371
// converted property setter: - (void)setTopBorder:(id)border;	// 0x318df3b5
// converted property setter: - (void)setVerticalBorder:(id)border;	// 0x31a48b99
// converted property getter: - (id)topBorder;	// 0x318eb365
// converted property getter: - (id)verticalBorder;	// 0x31a99821
@end

