/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class NSString, NSArray, NSNumber, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet {
}
@property(copy, nonatomic) NSNumber *atRequestedLocation;	// G=0x325253ed; S=0x32525409; 
@property(copy, nonatomic) NSArray *locations;	// G=0x32525459; S=0x325254d5; 
@property(copy, nonatomic) NSString *proximity;	// G=0x3252553d; S=0x32525559; 
@property(copy, nonatomic) NSURL *searchContext;	// G=0x325255a9; S=0x32525625; 
+ (id)locationSnippet;	// 0x3252535d
+ (id)locationSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x325253a1
// declared property getter: - (id)atRequestedLocation;	// 0x325253ed
- (id)encodedClassName;	// 0x32525351
- (id)groupIdentifier;	// 0x32525341
// declared property getter: - (id)locations;	// 0x32525459
// declared property getter: - (id)proximity;	// 0x3252553d
// declared property getter: - (id)searchContext;	// 0x325255a9
// declared property setter: - (void)setAtRequestedLocation:(id)requestedLocation;	// 0x32525409
// declared property setter: - (void)setLocations:(id)locations;	// 0x325254d5
// declared property setter: - (void)setProximity:(id)proximity;	// 0x32525559
// declared property setter: - (void)setSearchContext:(id)context;	// 0x32525625
@end

