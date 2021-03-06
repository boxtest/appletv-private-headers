/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject {
	NSSet *_properties;	// 4 = 0x4
}
@property(readonly, assign) NSSet *stringProperties;	// G=0x3359eb39; @synthesize=_properties
@property(readonly, assign) BOOL supportsPropertySearch;	// G=0x3359ead5; 
+ (id)searchSetWithProperties:(id)properties;	// 0x3359e9f5
- (id)initWithSearchProperties:(id)searchProperties;	// 0x3359e7a5
- (id)initWithStringProperties:(id)stringProperties;	// 0x3359e9a1
- (void)dealloc;	// 0x3359e759
- (BOOL)isEqualToPropertySet:(id)propertySet;	// 0x3359eb01
// declared property getter: - (id)stringProperties;	// 0x3359eb39
// declared property getter: - (BOOL)supportsPropertySearch;	// 0x3359ead5
- (BOOL)supportsPropertyTypeWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3359ea3d
- (BOOL)supportsWellKnownType:(int)type;	// 0x3359ea89
@end

