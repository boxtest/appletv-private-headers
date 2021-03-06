/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSimpleMenuItem.h"

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface ATVSearchTerm : BRSimpleMenuItem {
@private
	NSString *_searchTerm;	// 20 = 0x14
	NSDate *_lastUsed;	// 24 = 0x18
}
@property(readonly, retain) NSDate *lastUsed;	// G=0x32f94eb1; converted property
@property(readonly, retain) NSString *searchTerm;	// G=0x32f94ea1; converted property
+ (id)searchTermWithString:(id)string;	// 0x32f94d6d
- (id)initWithSearchTerm:(id)searchTerm date:(id)date;	// 0x32f94dcd
- (void)dealloc;	// 0x32f94e41
// converted property getter: - (id)lastUsed;	// 0x32f94eb1
- (int)menuItemType;	// 0x32f94f45
- (id)rightJustifiedText;	// 0x32f94f19
// converted property getter: - (id)searchTerm;	// 0x32f94ea1
- (id)title;	// 0x32f94f09
- (int)titlePosition;	// 0x32f94f41
- (void)updateLastUsed;	// 0x32f94ec1
@end

