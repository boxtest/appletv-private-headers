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
@property(assign) NSRange range;	// G=0x350db95d; S=0x350091ed; converted property
@property(assign) int type;	// G=0x350db94d; S=0x350091dd; converted property
- (id)init;	// 0x350091b1
- (id).cxx_construct;	// 0x350091ad
- (unsigned)hash;	// 0x350db975
- (BOOL)isEqual:(id)equal;	// 0x350dba01
// converted property getter: - (NSRange)range;	// 0x350db95d
// converted property setter: - (void)setRange:(NSRange)range;	// 0x350091ed
// converted property setter: - (void)setType:(int)type;	// 0x350091dd
// converted property getter: - (int)type;	// 0x350db94d
@end

