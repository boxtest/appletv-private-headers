/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"
#import "MPAnimationSupport.h"

@class NSMutableDictionary, NSString, MCFilter, MPFilterInternal;
@protocol MPFilterSupport;

@interface MPFilter : NSObject <NSCoding, NSCopying, MPAnimationSupport> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	NSMutableDictionary *_animationPaths;	// 8 = 0x8
	MCFilter *_filter;	// 12 = 0xc
	NSObject<MPFilterSupport> *_parent;	// 16 = 0x10
	MPFilterInternal *_internal;	// 20 = 0x14
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3313b63d; converted property
@property(retain) MCFilter *filter;	// G=0x3313b8f5; S=0x3313bca1; converted property
@property(copy, nonatomic) NSString *filterID;	// G=0x3313b411; S=0x3313b431; @dynamic
@property(retain) id parent;	// G=0x3313b8e5; S=0x3313c081; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x3313b479; S=0x3313b499; @dynamic
+ (id)filterWithFilterID:(id)filterID;	// 0x3313ad91
- (id)init;	// 0x3313ae39
- (id)initWithCoder:(id)coder;	// 0x3313b151
- (id)initWithFilterID:(id)filterID;	// 0x3313adcd
- (id)animationPathForKey:(id)key;	// 0x3313b64d
// converted property getter: - (id)animationPaths;	// 0x3313b63d
- (id)convertMCAttributeToMPAttribute:(id)mpattribute withKey:(id)key;	// 0x3313baad
- (id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;	// 0x3313ba61
- (void)copyAnimationPaths:(id)paths;	// 0x3313bb9d
- (void)copyStruct:(id)aStruct;	// 0x3313baf9
- (id)copyWithZone:(NSZone *)zone;	// 0x3313aef5
- (void)dealloc;	// 0x3313b371
- (id)description;	// 0x3313af79
- (void)dump;	// 0x3313b905
- (void)encodeWithCoder:(id)coder;	// 0x3313b03d
// converted property getter: - (id)filter;	// 0x3313b8f5
- (id)filterAttributeForKey:(id)key;	// 0x3313b509
- (id)filterAttributes;	// 0x3313b4f9
// declared property getter: - (id)filterID;	// 0x3313b411
- (void)finalize;	// 0x3313b345
- (id)fullDebugLog;	// 0x3313b92d
- (int)index;	// 0x3313b8a1
// converted property getter: - (id)parent;	// 0x3313b8e5
- (id)parentDocument;	// 0x3313c0e1
// declared property getter: - (id)presetID;	// 0x3313b479
- (void)removeAnimationPathForKey:(id)key;	// 0x3313b7f9
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3313b66d
- (void)setDefaults;	// 0x3313b96d
// converted property setter: - (void)setFilter:(id)filter;	// 0x3313bca1
- (void)setFilterAttribute:(id)attribute forKey:(id)key;	// 0x3313b529
// declared property setter: - (void)setFilterID:(id)anId;	// 0x3313b431
// converted property setter: - (void)setParent:(id)parent;	// 0x3313c081
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3313b499
@end
