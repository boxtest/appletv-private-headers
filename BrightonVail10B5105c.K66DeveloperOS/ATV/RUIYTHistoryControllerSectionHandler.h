/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSectionHandling.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIYTHistoryController;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryControllerSectionHandler : XXUnknownSuperclass <RUIYTListSectionHandling> {
	RUIYTHistoryController *_historyController;	// 4 = 0x4
}
- (id)initWithHistoryController:(id)historyController;	// 0x274645
- (void).cxx_destruct;	// 0x2747a5
- (id)itemForIndex:(id)index;	// 0x2746a5
- (BOOL)itemSelectedAtIndex:(id)index action:(int)action defer:(BOOL *)defer;	// 0x274779
@end

