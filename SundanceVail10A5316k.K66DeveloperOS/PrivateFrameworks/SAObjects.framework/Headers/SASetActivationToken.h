/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *activationToken;	// G=0x32f64e75; S=0x32f64e91; 
@property(copy, nonatomic) NSString *language;	// G=0x32f64ee1; S=0x32f64efd; 
+ (id)setActivationToken;	// 0x32f64de5
+ (id)setActivationTokenWithDictionary:(id)dictionary context:(id)context;	// 0x32f64e29
// declared property getter: - (id)activationToken;	// 0x32f64e75
- (id)encodedClassName;	// 0x32f64dd9
- (id)groupIdentifier;	// 0x32f64dc9
// declared property getter: - (id)language;	// 0x32f64ee1
- (BOOL)requiresResponse;	// 0x32f64f4d
// declared property setter: - (void)setActivationToken:(id)token;	// 0x32f64e91
// declared property setter: - (void)setLanguage:(id)language;	// 0x32f64efd
@end
