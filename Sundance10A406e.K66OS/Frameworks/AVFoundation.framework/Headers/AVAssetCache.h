/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {
	AVAssetCacheInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3032c3e1; 
@property(readonly, assign, nonatomic) long long currentSize;	// G=0x3032c389; 
@property(assign, nonatomic) long long maxEntrySize;	// G=0x3032c2d1; S=0x3032c329; 
@property(assign, nonatomic) long long maxSize;	// G=0x3032c215; S=0x3032c26d; 
+ (id)assetCacheWithURL:(id)url;	// 0x3032c061
- (id)initWithURL:(id)url;	// 0x3032c0a9
// declared property getter: - (id)URL;	// 0x3032c3e1
- (id)allKeys;	// 0x3032c495
// declared property getter: - (long long)currentSize;	// 0x3032c389
- (void)dealloc;	// 0x3032c165
- (void)finalize;	// 0x3032c1d1
// declared property getter: - (long long)maxEntrySize;	// 0x3032c2d1
// declared property getter: - (long long)maxSize;	// 0x3032c215
- (void)removeEntryForKey:(id)key;	// 0x3032c401
// declared property setter: - (void)setMaxEntrySize:(long long)size;	// 0x3032c329
// declared property setter: - (void)setMaxSize:(long long)size;	// 0x3032c26d
- (long long)sizeOfEntryForKey:(id)key;	// 0x3032c43d
@end

