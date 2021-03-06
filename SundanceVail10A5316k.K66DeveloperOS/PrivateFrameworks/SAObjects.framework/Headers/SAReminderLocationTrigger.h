/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderTrigger.h"

@class NSString, NSURL, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger {
}
@property(copy, nonatomic) NSURL *contactIdentifier;	// G=0x32f459b5; S=0x32f45a31; 
@property(retain, nonatomic) SALocation *location;	// G=0x32f45a91; S=0x32f45ae5; 
@property(copy, nonatomic) NSString *timing;	// G=0x32f45b21; S=0x32f45b3d; 
+ (id)locationTrigger;	// 0x32f45925
+ (id)locationTriggerWithDictionary:(id)dictionary context:(id)context;	// 0x32f45969
// declared property getter: - (id)contactIdentifier;	// 0x32f459b5
- (id)encodedClassName;	// 0x32f45919
- (id)groupIdentifier;	// 0x32f45909
// declared property getter: - (id)location;	// 0x32f45a91
// declared property setter: - (void)setContactIdentifier:(id)identifier;	// 0x32f45a31
// declared property setter: - (void)setLocation:(id)location;	// 0x32f45ae5
// declared property setter: - (void)setTiming:(id)timing;	// 0x32f45b3d
// declared property getter: - (id)timing;	// 0x32f45b21
@end

