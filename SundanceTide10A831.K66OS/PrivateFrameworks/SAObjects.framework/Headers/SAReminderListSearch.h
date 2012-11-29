/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSURL;

@interface SAReminderListSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *name;	// G=0x304f98b9; S=0x304f98d5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x304f97dd; S=0x304f9859; 
+ (id)listSearch;	// 0x304f974d
+ (id)listSearchWithDictionary:(id)dictionary context:(id)context;	// 0x304f9791
- (id)encodedClassName;	// 0x304f9741
- (id)groupIdentifier;	// 0x304f9731
// declared property getter: - (id)name;	// 0x304f98b9
- (BOOL)requiresResponse;	// 0x304f9925
// declared property setter: - (void)setName:(id)name;	// 0x304f98d5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x304f9859
// declared property getter: - (id)targetAppId;	// 0x304f97dd
@end
