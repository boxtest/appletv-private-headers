/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSPredicate, EKEventStore;

__attribute__((visibility("hidden")))
@interface EKPredicateCount : NSObject {
	NSPredicate *_predicate;	// 4 = 0x4
	EKEventStore *_store;	// 8 = 0x8
	BOOL _finished;	// 12 = 0xc
	id _callback;	// 16 = 0x10
	unsigned _previous;	// 20 = 0x14
}
+ (id)countOfRemindersWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x34b2d585
- (id)initWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x34b2d5cd
- (void)_receivedCount:(int)count;	// 0x34b2e065
- (void)dealloc;	// 0x34b2efb5
- (void)run;	// 0x34b2d73d
- (void)terminate;	// 0x34b2e079
@end
