/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"


@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {
	BOOL mIsFlipped;	// 112 = 0x70
}
- (id)_suggestedBoundsForNodeAtIndex:(unsigned)index;	// 0x37a6cd9d
- (void)mapAt:(id)at withState:(id)state;	// 0x37a6cc11
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x37a6cea9
- (void)setIsFlipped:(BOOL)flipped;	// 0x37a7fb11
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x37a6cd21
@end
