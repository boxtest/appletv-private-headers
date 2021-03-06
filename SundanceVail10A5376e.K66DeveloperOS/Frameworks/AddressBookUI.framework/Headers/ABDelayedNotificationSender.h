/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject {
	CFArrayRef _delegatesForDelayedNotification;	// 4 = 0x4
	NSMutableArray *_delayedNotifications;	// 8 = 0x8
	CFDictionaryRef _delayedNotificationInfos;	// 12 = 0xc
}
- (void)addDelayedNotification:(id)notification;	// 0x3100bd09
- (void)addDelayedNotification:(id)notification withInfo:(CFDictionaryRef)info allowDuplicateNotification:(BOOL)notification3;	// 0x3100bad5
- (void)addDelegate:(id)delegate;	// 0x3100b809
- (BOOL)containsDelegate:(id)delegate;	// 0x3100b875
- (void)dealloc;	// 0x3100b791
- (void)removeDelegate:(id)delegate andDeliverDelayedNotifications:(BOOL)notifications;	// 0x3100b8a9
@end

