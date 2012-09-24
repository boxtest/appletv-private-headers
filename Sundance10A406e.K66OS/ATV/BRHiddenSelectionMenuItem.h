/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRHiddenSelectionMenuItem : BRMenuItem {
	NSArray *_events;	// 176 = 0xb0
	int _eventCount;	// 180 = 0xb4
}
@property(retain) NSArray *events;	// G=0x2d1979; S=0x2d1989; converted property
@property(retain) id hiddenSelectionHandler;	// G=0x2d19f1; S=0x2d19d5; converted property
- (BOOL)brEventAction:(id)action;	// 0x2d1865
- (void)dealloc;	// 0x2d1819
// converted property getter: - (id)events;	// 0x2d1979
// converted property getter: - (id)hiddenSelectionHandler;	// 0x2d19f1
// converted property setter: - (void)setEvents:(id)events;	// 0x2d1989
// converted property setter: - (void)setHiddenSelectionHandler:(id)handler;	// 0x2d19d5
@end
