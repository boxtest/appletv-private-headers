/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, MSAsset;

__attribute__((visibility("hidden")))
@interface ATVCupidAsset : NSObject {
@private
	MSAsset *_asset;	// 4 = 0x4
	int _state;	// 8 = 0x8
	NSString *_assetID;	// 12 = 0xc
	NSDate *_dateContentCreated;	// 16 = 0x10
}
@property(retain) MSAsset *asset;	// G=0x33a19141; S=0x33a19155; @synthesize=_asset
@property(copy) NSString *assetID;	// G=0x33a19199; S=0x33a191ad; @synthesize=_assetID
@property(retain) NSDate *dateContentCreated;	// G=0x33a191d1; S=0x33a191e5; @synthesize=_dateContentCreated
@property(assign) int state;	// G=0x33a19179; S=0x33a19189; @synthesize=_state
- (id)initWithCoder:(id)coder;	// 0x33a18ead
// declared property getter: - (id)asset;	// 0x33a19141
// declared property getter: - (id)assetID;	// 0x33a19199
// declared property getter: - (id)dateContentCreated;	// 0x33a191d1
- (void)dealloc;	// 0x33a18fa9
- (id)description;	// 0x33a1901d
- (void)encodeWithCoder:(id)coder;	// 0x33a18df9
// declared property setter: - (void)setAsset:(id)asset;	// 0x33a19155
// declared property setter: - (void)setAssetID:(id)anId;	// 0x33a191ad
// declared property setter: - (void)setDateContentCreated:(id)created;	// 0x33a191e5
// declared property setter: - (void)setState:(int)state;	// 0x33a19189
// declared property getter: - (int)state;	// 0x33a19179
@end

