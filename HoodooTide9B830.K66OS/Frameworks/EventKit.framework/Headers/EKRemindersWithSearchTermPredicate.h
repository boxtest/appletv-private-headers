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
@property(readonly, assign, nonatomic) NSString *searchTerm;	// G=0x324ba1d9; 
+ (id)predicateWithSearchTerm:(id)searchTerm;	// 0x32474f29
- (id)initWithCoder:(id)coder;	// 0x324ba169
- (id)initWithSearchTerm:(id)searchTerm;	// 0x32474f65
- (void)dealloc;	// 0x32475121
- (void)encodeWithCoder:(id)coder;	// 0x324750c5
- (BOOL)evaluateWithObject:(id)object;	// 0x324ba1fd
- (id)predicateFormat;	// 0x324ba201
- (BOOL)queryLimitToCompletedOrIncomplete;	// 0x324ba1f9
- (id)querySearchTerm;	// 0x324ba1e9
// declared property getter: - (id)searchTerm;	// 0x324ba1d9
@end
