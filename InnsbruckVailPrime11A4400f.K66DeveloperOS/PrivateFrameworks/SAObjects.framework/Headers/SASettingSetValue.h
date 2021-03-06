/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASettingCommand.h"


@interface SASettingSetValue : SASettingCommand {
}
@property(assign, nonatomic) BOOL dryRun;	// G=0x326e89cd; S=0x326e8a45; 
@property(assign, nonatomic) BOOL failOnSiriDisconnectWarnings;	// G=0x326e8a89; S=0x326e8b01; 
+ (id)setValue;	// 0x326e893d
+ (id)setValueWithDictionary:(id)dictionary context:(id)context;	// 0x326e8981
// declared property getter: - (BOOL)dryRun;	// 0x326e89cd
- (id)encodedClassName;	// 0x326e8931
// declared property getter: - (BOOL)failOnSiriDisconnectWarnings;	// 0x326e8a89
- (id)groupIdentifier;	// 0x326e8921
- (BOOL)requiresResponse;	// 0x326e8b45
// declared property setter: - (void)setDryRun:(BOOL)run;	// 0x326e8a45
// declared property setter: - (void)setFailOnSiriDisconnectWarnings:(BOOL)warnings;	// 0x326e8b01
@end

