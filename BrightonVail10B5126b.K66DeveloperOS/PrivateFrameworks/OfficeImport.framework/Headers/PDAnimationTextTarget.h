/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDAnimationShapeTarget.h"
#import "OfficeImport-Structs.h"


@interface PDAnimationTextTarget : PDAnimationShapeTarget {
	int mType;	// 8 = 0x8
	NSRange mRange;	// 12 = 0xc
}
@property(assign) NSRange range;	// G=0x34a8195d; S=0x349af1ed; converted property
@property(assign) int type;	// G=0x34a8194d; S=0x349af1dd; converted property
- (id)init;	// 0x349af1b1
- (id).cxx_construct;	// 0x349af1ad
- (unsigned)hash;	// 0x34a81975
- (BOOL)isEqual:(id)equal;	// 0x34a81a01
// converted property getter: - (NSRange)range;	// 0x34a8195d
// converted property setter: - (void)setRange:(NSRange)range;	// 0x349af1ed
// converted property setter: - (void)setType:(int)type;	// 0x349af1dd
// converted property getter: - (int)type;	// 0x34a8194d
@end

