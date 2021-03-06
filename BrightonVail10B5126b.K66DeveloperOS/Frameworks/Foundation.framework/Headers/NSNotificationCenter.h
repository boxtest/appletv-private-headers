/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationCenter : NSObject {
	void *_impl;	// 4 = 0x4
	void *_callback;	// 8 = 0x8
	void *_pad[11];	// 12 = 0xc
}
+ (id)defaultCenter;	// 0x318a940d
- (id)init;	// 0x318c14e5
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x318b3a35
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;	// 0x318b4111
- (void)dealloc;	// 0x31942861
- (id)description;	// 0x319428a5
- (void)finalize;	// 0x3194281d
- (BOOL)isEmpty;	// 0x31942941
- (void)postNotification:(id)notification;	// 0x318ccc01
- (void)postNotificationName:(id)name object:(id)object;	// 0x318ad03d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x318a9551
- (void)removeObserver:(id)observer;	// 0x318b3b95
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0x318b3bb5
@end

