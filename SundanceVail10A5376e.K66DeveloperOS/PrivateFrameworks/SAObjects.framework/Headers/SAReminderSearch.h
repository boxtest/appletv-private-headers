/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface SAReminderSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber *completionStatus;	// G=0x3423ac85; S=0x3423aca1; 
@property(copy, nonatomic) NSDate *dueAfter;	// G=0x3423acf1; S=0x3423ad0d; 
@property(copy, nonatomic) NSDate *dueBefore;	// G=0x3423ad5d; S=0x3423ad79; 
@property(copy, nonatomic) NSString *listName;	// G=0x3423adc9; S=0x3423ade5; 
@property(copy, nonatomic) NSString *subject;	// G=0x3423ae35; S=0x3423ae51; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3423aba9; S=0x3423ac25; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3423aea1; S=0x3423aebd; 
+ (id)search;	// 0x3423ab19
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x3423ab5d
// declared property getter: - (id)completionStatus;	// 0x3423ac85
// declared property getter: - (id)dueAfter;	// 0x3423acf1
// declared property getter: - (id)dueBefore;	// 0x3423ad5d
- (id)encodedClassName;	// 0x3423ab0d
- (id)groupIdentifier;	// 0x3423aafd
// declared property getter: - (id)listName;	// 0x3423adc9
- (BOOL)requiresResponse;	// 0x3423af0d
// declared property setter: - (void)setCompletionStatus:(id)status;	// 0x3423aca1
// declared property setter: - (void)setDueAfter:(id)after;	// 0x3423ad0d
// declared property setter: - (void)setDueBefore:(id)before;	// 0x3423ad79
// declared property setter: - (void)setListName:(id)name;	// 0x3423ade5
// declared property setter: - (void)setSubject:(id)subject;	// 0x3423ae51
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3423ac25
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3423aebd
// declared property getter: - (id)subject;	// 0x3423ae35
// declared property getter: - (id)targetAppId;	// 0x3423aba9
// declared property getter: - (id)timeZoneId;	// 0x3423aea1
@end
