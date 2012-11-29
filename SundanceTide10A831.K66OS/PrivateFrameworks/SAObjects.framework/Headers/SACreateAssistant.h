/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x304fb705; S=0x304fb721; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x304fb771; S=0x304fb78d; 
@property(copy, nonatomic) NSString *language;	// G=0x304fb7dd; S=0x304fb7f9; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *validationData;	// G=0x304fb849; S=0x304fb865; 
+ (id)createAssistant;	// 0x304fb675
+ (id)createAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x304fb6b9
// declared property getter: - (id)activationToken;	// 0x304fb705
// declared property getter: - (id)connectionType;	// 0x304fb771
- (id)encodedClassName;	// 0x304fb669
- (id)groupIdentifier;	// 0x304fb659
// declared property getter: - (id)language;	// 0x304fb7dd
// declared property setter: - (void)setActivationToken:(id)token;	// 0x304fb721
// declared property setter: - (void)setConnectionType:(id)type;	// 0x304fb78d
// declared property setter: - (void)setLanguage:(id)language;	// 0x304fb7f9
// declared property setter: - (void)setValidationData:(id)data;	// 0x304fb865
// declared property getter: - (id)validationData;	// 0x304fb849
@end
