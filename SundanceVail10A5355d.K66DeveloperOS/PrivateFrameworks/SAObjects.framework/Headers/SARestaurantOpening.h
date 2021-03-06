/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSNumber, SACalendar, SAUIAppPunchOut, NSURL;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSURL *bookingId;	// G=0x3663b7dd; S=0x3663b859; 
@property(retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;	// G=0x3663b8b9; S=0x3663b90d; 
@property(copy, nonatomic) NSNumber *partySize;	// G=0x3663b949; S=0x3663b965; 
@property(retain, nonatomic) SACalendar *timeSlot;	// G=0x3663b9b5; S=0x3663ba09; 
+ (id)opening;	// 0x3663b74d
+ (id)openingWithDictionary:(id)dictionary context:(id)context;	// 0x3663b791
// declared property getter: - (id)bookingId;	// 0x3663b7dd
- (id)encodedClassName;	// 0x3663b741
- (id)groupIdentifier;	// 0x3663b731
// declared property getter: - (id)makeReservationPunchOut;	// 0x3663b8b9
// declared property getter: - (id)partySize;	// 0x3663b949
// declared property setter: - (void)setBookingId:(id)anId;	// 0x3663b859
// declared property setter: - (void)setMakeReservationPunchOut:(id)anOut;	// 0x3663b90d
// declared property setter: - (void)setPartySize:(id)size;	// 0x3663b965
// declared property setter: - (void)setTimeSlot:(id)slot;	// 0x3663ba09
// declared property getter: - (id)timeSlot;	// 0x3663b9b5
@end

