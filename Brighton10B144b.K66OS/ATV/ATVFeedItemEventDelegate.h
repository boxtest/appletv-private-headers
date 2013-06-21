/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"
#import "BREventDelegate.h"

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedItemEventDelegate : XXUnknownSuperclass <BREventDelegate, BRSelectionHandler> {
	NSDictionary *_eventDictionary;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) BRMerchant *merchant;	// G=0x1996c5; S=0x1996d9; @synthesize=_merchant
+ (id)feedItemDelegateWithEventHandlers:(id)eventHandlers;	// 0x199245
- (id)_initWithEventDictionary:(id)eventDictionary;	// 0x1992cd
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x19939d
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x199641
- (void)dealloc;	// 0x19933d
- (BOOL)handlePlayForControl:(id)control;	// 0x199685
- (BOOL)handleSelectionForControl:(id)control;	// 0x199645
// declared property getter: - (id)merchant;	// 0x1996c5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1996d9
@end
