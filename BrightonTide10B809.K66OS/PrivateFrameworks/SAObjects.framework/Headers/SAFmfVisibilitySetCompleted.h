/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAFmfVisibilitySetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x353d8561; S=0x353d85dd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353d8485; S=0x353d8501; 
+ (id)visibilitySetCompleted;	// 0x353d83f5
+ (id)visibilitySetCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353d8439
- (id)encodedClassName;	// 0x353d83e9
- (id)groupIdentifier;	// 0x353d83d9
- (BOOL)requiresResponse;	// 0x353d863d
// declared property getter: - (id)searchContext;	// 0x353d8561
// declared property setter: - (void)setSearchContext:(id)context;	// 0x353d85dd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353d8501
// declared property getter: - (id)targetAppId;	// 0x353d8485
@end

