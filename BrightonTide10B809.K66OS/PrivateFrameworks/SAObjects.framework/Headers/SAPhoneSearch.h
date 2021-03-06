/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate, NSNumber;

@interface SAPhoneSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x353c0ed9; S=0x353c0ef5; 
@property(copy, nonatomic) NSString *incomingPhoneNumber;	// G=0x353c0f45; S=0x353c0f61; 
@property(copy, nonatomic) NSNumber *limit;	// G=0x353c0fb1; S=0x353c0fcd; 
@property(assign, nonatomic) BOOL missed;	// G=0x353c101d; S=0x353c1095; 
@property(copy, nonatomic) NSString *outgoingPhoneNumber;	// G=0x353c10d9; S=0x353c10f5; 
@property(copy, nonatomic) NSDate *start;	// G=0x353c1145; S=0x353c1161; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c0dfd; S=0x353c0e79; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353c11b1; S=0x353c11cd; 
+ (id)search;	// 0x353c0d6d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353c0db1
- (id)encodedClassName;	// 0x353c0d61
// declared property getter: - (id)end;	// 0x353c0ed9
- (id)groupIdentifier;	// 0x353c0d51
// declared property getter: - (id)incomingPhoneNumber;	// 0x353c0f45
// declared property getter: - (id)limit;	// 0x353c0fb1
// declared property getter: - (BOOL)missed;	// 0x353c101d
// declared property getter: - (id)outgoingPhoneNumber;	// 0x353c10d9
- (BOOL)requiresResponse;	// 0x353c121d
// declared property setter: - (void)setEnd:(id)end;	// 0x353c0ef5
// declared property setter: - (void)setIncomingPhoneNumber:(id)number;	// 0x353c0f61
// declared property setter: - (void)setLimit:(id)limit;	// 0x353c0fcd
// declared property setter: - (void)setMissed:(BOOL)missed;	// 0x353c1095
// declared property setter: - (void)setOutgoingPhoneNumber:(id)number;	// 0x353c10f5
// declared property setter: - (void)setStart:(id)start;	// 0x353c1161
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c0e79
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353c11cd
// declared property getter: - (id)start;	// 0x353c1145
// declared property getter: - (id)targetAppId;	// 0x353c0dfd
// declared property getter: - (id)timeZoneId;	// 0x353c11b1
@end

