/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray, NSURL, NSNumber;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSNumber *atRequestedLocation;	// G=0x37960a35; S=0x37960a51; 
@property(copy, nonatomic) NSArray *fmfLocations;	// G=0x37960aa1; S=0x37960b1d; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x37960b85; S=0x37960c01; 
+ (id)searchCompleted;	// 0x379609a5
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x379609e9
// declared property getter: - (id)atRequestedLocation;	// 0x37960a35
- (id)encodedClassName;	// 0x37960999
// declared property getter: - (id)fmfLocations;	// 0x37960aa1
- (id)groupIdentifier;	// 0x37960989
// declared property getter: - (id)searchContext;	// 0x37960b85
// declared property setter: - (void)setAtRequestedLocation:(id)requestedLocation;	// 0x37960a51
// declared property setter: - (void)setFmfLocations:(id)locations;	// 0x37960b1d
// declared property setter: - (void)setSearchContext:(id)context;	// 0x37960c01
@end
