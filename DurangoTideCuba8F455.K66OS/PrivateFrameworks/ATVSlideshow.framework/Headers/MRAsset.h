/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MRAsset : NSObject {
	NSString *mPath;	// 4 = 0x4
}
@property(copy) NSString *path;	// G=0x33d635a9; S=0x33d635c1; @synthesize=mPath
+ (id)mrAssetWithPath:(id)path;	// 0x33d634e5
- (CGImageRef)CGImageForSize:(CGSize)size;	// 0x33d635a5
- (void)dealloc;	// 0x33d63541
// declared property getter: - (id)path;	// 0x33d635a9
// declared property setter: - (void)setPath:(id)path;	// 0x33d635c1
- (id)workingPath;	// 0x33d63585
- (id)workingPathForSize:(CGSize)size;	// 0x33d63595
@end

