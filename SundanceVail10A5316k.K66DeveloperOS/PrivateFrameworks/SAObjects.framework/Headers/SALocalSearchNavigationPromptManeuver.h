/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SABaseClientBoundCommand {
}
@property(retain, nonatomic) NSNumber *maneuverIndex;	// G=0x32f6bde5; S=0x32f6be01; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f6bd09; S=0x32f6bd85; 
+ (id)navigationPromptManeuver;	// 0x32f6bc79
+ (id)navigationPromptManeuverWithDictionary:(id)dictionary context:(id)context;	// 0x32f6bcbd
- (id)encodedClassName;	// 0x32f6bc6d
- (id)groupIdentifier;	// 0x32f6bc5d
// declared property getter: - (id)maneuverIndex;	// 0x32f6bde5
- (BOOL)requiresResponse;	// 0x32f6be1d
// declared property setter: - (void)setManeuverIndex:(id)index;	// 0x32f6be01
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f6bd85
// declared property getter: - (id)targetAppId;	// 0x32f6bd09
@end
