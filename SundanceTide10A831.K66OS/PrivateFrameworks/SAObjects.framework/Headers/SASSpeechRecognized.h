/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SASRecognition *recognition;	// G=0x304d286d; S=0x304d28c1; 
@property(copy, nonatomic) NSString *sessionId;	// G=0x304d28fd; S=0x304d2919; 
+ (id)speechRecognized;	// 0x304d27dd
+ (id)speechRecognizedWithDictionary:(id)dictionary context:(id)context;	// 0x304d2821
- (id)encodedClassName;	// 0x304d27d1
- (id)groupIdentifier;	// 0x304d27c1
// declared property getter: - (id)recognition;	// 0x304d286d
- (BOOL)requiresResponse;	// 0x304d2969
// declared property getter: - (id)sessionId;	// 0x304d28fd
// declared property setter: - (void)setRecognition:(id)recognition;	// 0x304d28c1
// declared property setter: - (void)setSessionId:(id)anId;	// 0x304d2919
@end
