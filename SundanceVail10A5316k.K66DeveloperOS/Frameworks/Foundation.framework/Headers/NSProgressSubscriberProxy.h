/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSProgressSubscriber.h"

@class NSFileAccessNode, NSString;

__attribute__((visibility("hidden")))
@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber> {
@private
	id<NSProgressSubscriber> _forwarder;	// 4 = 0x4
	id _subscriberID;	// 8 = 0x8
	NSFileAccessNode *_itemLocation;	// 12 = 0xc
	NSString *_appBundleIDOrNil;	// 16 = 0x10
}
- (id)initWithForwarder:(id)forwarder subscriberID:(id)anId appBundleID:(id)anId3;	// 0x31b48631
- (oneway void)addPublisher:(id)publisher forID:(id)anId withValues:(id)values isOld:(BOOL)old;	// 0x31b48a25
- (id)appBundleID;	// 0x31b48745
- (void)dealloc;	// 0x31b486cd
- (id)description;	// 0x31b48b4d
- (id)descriptionWithIndenting:(id)indenting;	// 0x31b48aa5
- (oneway void)observePublisherForID:(id)anId value:(id)value forKey:(id)key inUserInfo:(BOOL)userInfo;	// 0x31b48a55
- (oneway void)removePublisherForID:(id)anId;	// 0x31b48a85
- (void)setItemLocation:(id)location;	// 0x31b4877d
@end
