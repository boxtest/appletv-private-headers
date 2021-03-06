/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPEnableShuffle : SABaseClientBoundCommand {
}
@property(assign, nonatomic) BOOL enable;	// G=0x32515dbd; S=0x32515e35; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32515ce1; S=0x32515d5d; 
+ (id)enableShuffle;	// 0x32515c51
+ (id)enableShuffleWithDictionary:(id)dictionary context:(id)context;	// 0x32515c95
// declared property getter: - (BOOL)enable;	// 0x32515dbd
- (id)encodedClassName;	// 0x32515c45
- (id)groupIdentifier;	// 0x32515c35
- (BOOL)requiresResponse;	// 0x32515e79
// declared property setter: - (void)setEnable:(BOOL)enable;	// 0x32515e35
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32515d5d
// declared property getter: - (id)targetAppId;	// 0x32515ce1
@end

