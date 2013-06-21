/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramArrowMapper : CMDiagramShapeMapper {
	BOOL mIsVertical;	// 112 = 0x70
	BOOL mIsOutward;	// 113 = 0x71
	float mRadius;	// 116 = 0x74
}
+ (void)initialize;	// 0x349db959
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x349db9d1
- (CGRect)circumscribedBounds;	// 0x349dc2b9
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x349dbb91
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x349dc385
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x349dc441
@end
