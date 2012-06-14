/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"

@class MCContainerSerializer;

@interface MPLayerSerializer : MPLayer {
	MCContainerSerializer *_layerSerializer;	// 48 = 0x30
}
- (id)container;	// 0x342dcf95
- (void)dealloc;	// 0x342dc365
- (id)description;	// 0x342dc2b5
- (void)finalize;	// 0x342dc325
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x342dc3d1
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x342dcca9
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x342dc96d
- (void)setAudioPlaylist:(id)playlist;	// 0x342dce2d
- (void)setLayerSerializer:(id)serializer;	// 0x342dcfa5
@end
