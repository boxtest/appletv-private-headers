/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageLoader.h"


__attribute__((visibility("hidden")))
@interface BRMediaParadeProvider : BRImageLoader {
@private
	unsigned _artworkNeedsDeletterboxing : 1;	// 65 = 0x41
}
- (id)finalFormForImage:(id)image;	// 0x35e11b85
- (BOOL)isImageFinalForm:(id)form;	// 0x35e11c1d
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x35e11c01
@end
