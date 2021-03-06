/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAStartRequest.h"

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest {
}
@property(copy, nonatomic) NSString *interactionId;	// G=0x353dd119; S=0x353dd135; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x353dd185; S=0x353dd1a1; 
+ (id)startCorrectedSpeechRequest;	// 0x353dd089
+ (id)startCorrectedSpeechRequestWithDictionary:(id)dictionary context:(id)context;	// 0x353dd0cd
- (id)encodedClassName;	// 0x353dd07d
- (id)groupIdentifier;	// 0x353dd06d
// declared property getter: - (id)interactionId;	// 0x353dd119
// declared property getter: - (id)sessionId;	// 0x353dd185
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x353dd135
// declared property setter: - (void)setSessionId:(id)anId;	// 0x353dd1a1
@end

