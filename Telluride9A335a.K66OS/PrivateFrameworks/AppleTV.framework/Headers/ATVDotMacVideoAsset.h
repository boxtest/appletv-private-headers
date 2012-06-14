/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacAsset.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoAsset : ATVDotMacAsset {
@private
	long _duration;	// 60 = 0x3c
	NSString *_mediaURL;	// 64 = 0x40
	NSString *_description;	// 68 = 0x44
}
@property(assign) long duration;	// G=0x340b5c01; S=0x340b5c11; converted property
@property(retain) NSString *mediaURL;	// G=0x340b5a65; S=0x340b5b31; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x340b59ad
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x340b5ddd
- (void)dealloc;	// 0x340b5a05
// converted property getter: - (long)duration;	// 0x340b5c01
- (BOOL)hasVideoContent;	// 0x340b5dd9
- (id)mediaDescription;	// 0x340b5c21
- (id)mediaType;	// 0x340b5dbd
// converted property getter: - (id)mediaURL;	// 0x340b5a65
- (void)setDescription:(id)description;	// 0x340b5ced
// converted property setter: - (void)setDuration:(long)duration;	// 0x340b5c11
// converted property setter: - (void)setMediaURL:(id)url;	// 0x340b5b31
@end
