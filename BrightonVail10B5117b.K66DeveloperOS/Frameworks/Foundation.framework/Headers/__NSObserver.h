/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNotificationCenter, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject {
	NSNotificationCenter *nc;	// 4 = 0x4
	NSOperationQueue *queue;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	id object;	// 16 = 0x10
	id block;	// 20 = 0x14
}
@property(readonly, retain) NSString *name;	// G=0x319e1f71; converted property
@property(readonly, retain) id object;	// G=0x319e1f81; converted property
+ (void)forgetObserver:(id)observer;	// 0x319e1dfd
+ (BOOL)isAnObserver:(id)observer;	// 0x319534c9
+ (id)observerWithCenter:(id)center queue:(id)queue name:(id)name object:(id)object block:(id)block;	// 0x31953afd
- (void)_doit:(id)doit;	// 0x3194aaa1
- (void)dealloc;	// 0x319e1ed1
// converted property getter: - (id)name;	// 0x319e1f71
// converted property getter: - (id)object;	// 0x319e1f81
@end
