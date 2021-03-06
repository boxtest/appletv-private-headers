/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "NSCopying.h"
#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying> {
	CPShape *neighborShape;	// 4 = 0x4
	int shapeSide;	// 8 = 0x8
}
@property(retain) CPShape *neighborShape;	// G=0x30507185; S=0x30507209; converted property
@property(assign) int shapeSide;	// G=0x305071a5; S=0x30507195; converted property
- (id)init;	// 0x305071b5
- (id)copyWithZone:(NSZone *)zone;	// 0x3050729d
- (void)dealloc;	// 0x30507251
// converted property getter: - (id)neighborShape;	// 0x30507185
// converted property setter: - (void)setNeighborShape:(id)shape;	// 0x30507209
// converted property setter: - (void)setShapeSide:(int)side;	// 0x30507195
// converted property getter: - (int)shapeSide;	// 0x305071a5
@end

