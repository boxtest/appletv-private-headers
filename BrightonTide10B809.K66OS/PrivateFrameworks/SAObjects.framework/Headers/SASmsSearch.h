/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL, NSDate;

@interface SASmsSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSDate *end;	// G=0x353c30d9; S=0x353c30f5; 
@property(copy, nonatomic) NSString *message;	// G=0x353c3145; S=0x353c3161; 
@property(copy, nonatomic) NSString *recipient;	// G=0x353c31b1; S=0x353c31cd; 
@property(copy, nonatomic) NSString *sender;	// G=0x353c321d; S=0x353c3239; 
@property(copy, nonatomic) NSDate *start;	// G=0x353c3289; S=0x353c32a5; 
@property(assign, nonatomic) int status;	// G=0x353c32f5; S=0x353c331d; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353c2ffd; S=0x353c3079; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353c334d; S=0x353c3369; 
+ (id)search;	// 0x353c2f6d
+ (id)searchWithDictionary:(id)dictionary context:(id)context;	// 0x353c2fb1
- (id)encodedClassName;	// 0x353c2f61
// declared property getter: - (id)end;	// 0x353c30d9
- (id)groupIdentifier;	// 0x353c2f51
// declared property getter: - (id)message;	// 0x353c3145
// declared property getter: - (id)recipient;	// 0x353c31b1
- (BOOL)requiresResponse;	// 0x353c33b9
// declared property getter: - (id)sender;	// 0x353c321d
// declared property setter: - (void)setEnd:(id)end;	// 0x353c30f5
// declared property setter: - (void)setMessage:(id)message;	// 0x353c3161
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x353c31cd
// declared property setter: - (void)setSender:(id)sender;	// 0x353c3239
// declared property setter: - (void)setStart:(id)start;	// 0x353c32a5
// declared property setter: - (void)setStatus:(int)status;	// 0x353c331d
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353c3079
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353c3369
// declared property getter: - (id)start;	// 0x353c3289
// declared property getter: - (int)status;	// 0x353c32f5
// declared property getter: - (id)targetAppId;	// 0x353c2ffd
// declared property getter: - (id)timeZoneId;	// 0x353c334d
@end

