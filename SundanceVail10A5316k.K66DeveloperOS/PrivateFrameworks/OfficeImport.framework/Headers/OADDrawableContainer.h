/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSObject.h"
#import "OfficeImport-Structs.h"


@protocol OADDrawableContainer <NSObject>
@property(assign) CGRect logicalBounds;	// converted property
- (void)addChild:(id)child;
- (void)addChildren:(id)children;
- (id)childAtIndex:(unsigned)index;
- (unsigned)childCount;
- (id)children;
// converted property getter: - (CGRect)logicalBounds;
- (void)replaceChild:(id)child with:(id)with;
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;
@end
