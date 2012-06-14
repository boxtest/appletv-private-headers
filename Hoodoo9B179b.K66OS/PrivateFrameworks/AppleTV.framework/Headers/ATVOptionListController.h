/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"


__attribute__((visibility("hidden")))
@interface ATVOptionListController : ATVFeedController {
@private
	BOOL _eventHandled;	// 124 = 0x7c
	BOOL _shouldDismissAfterEvent;	// 125 = 0x7d
}
- (id)initWithDictionary:(id)dictionary;	// 0x30213c2d
- (id)initWithFeedElement:(id)feedElement;	// 0x30213961
- (BOOL)brEventAction:(id)action;	// 0x30213f95
- (void)controlWasActivated;	// 0x30214049
- (void)controlWasDeactivated;	// 0x30213fd5
@end
