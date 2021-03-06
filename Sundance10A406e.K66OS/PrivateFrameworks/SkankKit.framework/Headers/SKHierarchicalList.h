/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKListView.h"
#import "SkankKit-Structs.h"


@interface SKHierarchicalList : SKListView {
	SKLayer *_selectionHighlight;	// 100 = 0x64
}
@property(readonly, retain) SKLayer *selectionHighlight;	// G=0x3027eeb5; converted property
- (id)init;	// 0x3027edf5
// converted property getter: - (id)selectionHighlight;	// 0x3027eeb5
- (void)setBounds:(CGRect)bounds;	// 0x3027ee6d
- (void)setSelectedLayer:(id)layer;	// 0x3027f18d
@end

