/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKRemindersPredicate.h"

@class NSString;

@interface EKRemindersWithSearchTermPredicate : EKRemindersPredicate {
@private
	NSString *_searchTerm;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *searchTerm;	// G=0x310375d1; 
+ (id)predicateWithSearchTerm:(id)searchTerm;	// 0x30ff2935
- (id)initWithCoder:(id)coder;	// 0x31037561
- (id)initWithSearchTerm:(id)searchTerm;	// 0x30ff2971
- (void)dealloc;	// 0x30ff2b2d
- (void)encodeWithCoder:(id)coder;	// 0x30ff2ad1
- (BOOL)evaluateWithObject:(id)object;	// 0x310375f5
- (id)predicateFormat;	// 0x310375f9
- (BOOL)queryLimitToCompletedOrIncomplete;	// 0x310375f1
- (id)querySearchTerm;	// 0x310375e1
// declared property getter: - (id)searchTerm;	// 0x310375d1
@end
