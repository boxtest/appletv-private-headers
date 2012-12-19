/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject {
	CFDictionaryRef _unhighlightedStates;	// 4 = 0x4
	id _cell;	// 8 = 0x8
}
- (id)initWithCell:(id)cell;	// 0x330e7ce1
- (void)applyState:(unsigned)state toView:(id)view;	// 0x330e80d9
- (void)cacheState:(unsigned)state forView:(id)view;	// 0x330e7e29
- (void)dealloc;	// 0x330e7de5
- (void)highlightView:(id)view;	// 0x330e8311
@end
