/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAMPSetOutputSource : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *outputSourceId;	// G=0x353ca69d; S=0x353ca719; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353ca5c1; S=0x353ca63d; 
+ (id)setOutputSource;	// 0x353ca531
+ (id)setOutputSourceWithDictionary:(id)dictionary context:(id)context;	// 0x353ca575
- (id)encodedClassName;	// 0x353ca525
- (id)groupIdentifier;	// 0x353ca515
// declared property getter: - (id)outputSourceId;	// 0x353ca69d
- (BOOL)requiresResponse;	// 0x353ca779
// declared property setter: - (void)setOutputSourceId:(id)anId;	// 0x353ca719
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353ca63d
// declared property getter: - (id)targetAppId;	// 0x353ca5c1
@end
