/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CaliTIPHandler : NSObject {
}
+ (id)calculateDiffsForEvent:(id)event inMessage:(id)message;	// 0x378bf1d5
+ (id)debugStringForEvent:(id)event;	// 0x378bdd39
+ (BOOL)diffsAreImportant:(id)important;	// 0x378bdcc9
+ (BOOL)doScheduleChanges:(id)changes applyToEvent:(id)event inCalendar:(id)calendar;	// 0x378be051
+ (id)getOccurrenceChange:(id)change forEvent:(id)event inCalendar:(id)calendar;	// 0x378bddd9
+ (void)initialize;	// 0x378bdac9
+ (BOOL)isAddressMe:(id)me forAccount:(id)account;	// 0x378be1e5
+ (BOOL)logiTIPDetail;	// 0x378bdb39
+ (id)myAddressInAccount:(id)account forEvent:(id)event;	// 0x378be211
+ (BOOL)myStatusNeedsActionForEvent:(id)event withAccount:(id)account;	// 0x378be319
+ (void)processMessage:(id)message inCalendar:(id)calendar;	// 0x378be445
+ (void)processMessages:(id)messages inCalendar:(id)calendar;	// 0x378bdbcd
+ (void)setLogiTIPDetail:(BOOL)detail;	// 0x378bdb49
@end

