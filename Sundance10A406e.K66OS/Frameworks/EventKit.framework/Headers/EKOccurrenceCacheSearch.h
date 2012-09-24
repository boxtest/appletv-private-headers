/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString, EKEventStore, NSSet, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject {
	NSSet *_calendars;	// 4 = 0x4
	NSString *_searchTerm;	// 8 = 0x8
	EKEventStore *_store;	// 12 = 0xc
	id _callback;	// 16 = 0x10
	NSNumber *_replyID;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(readonly, retain) NSString *searchTerm;	// G=0x313eff91; converted property
+ (id)searchWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;	// 0x313ef60d
- (id)initWithCalendars:(id)calendars searchTerm:(id)term store:(id)store callback:(id)callback;	// 0x313ef659
- (void)cancel;	// 0x313efe05
- (void)dealloc;	// 0x313efa09
- (void)run;	// 0x313efaa5
// converted property getter: - (id)searchTerm;	// 0x313eff91
@end
