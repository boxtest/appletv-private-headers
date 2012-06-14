/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRTextEntryController.h"

@class BRAirportNetwork;
@protocol ATVAPPasswordEntryDelegate;

__attribute__((visibility("hidden")))
@interface ATVAPPasswordEntryController : BRTextEntryController <BRTextFieldDelegate> {
	BRAirportNetwork *_network;	// 176 = 0xb0
	id<ATVAPPasswordEntryDelegate> _delegate;	// 180 = 0xb4
}
- (id)initForNetwork:(id)network acceptOnlyHex:(BOOL)hex notifying:(id)notifying;	// 0x1e4981
- (void).cxx_destruct;	// 0x1e4d61
- (void)setInitialPassword:(id)password;	// 0x1e4d51
- (void)textDidChange:(id)text;	// 0x1e4ce5
- (void)textDidEndEditing:(id)text;	// 0x1e4ce9
@end
