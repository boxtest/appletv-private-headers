/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRInvalidatable.h"

@class NSMutableArray, BRAsyncTaskContext;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRImageLoader : XXUnknownSuperclass <BRInvalidatable> {
	long _queueSize;	// 4 = 0x4
	NSMutableArray *_imageQueue;	// 8 = 0x8
	NSMutableArray *_candidateImages;	// 12 = 0xc
	NSMutableArray *_pendingImages;	// 16 = 0x10
	id<BRProvider> _provider;	// 20 = 0x14
	BOOL _randomize;	// 24 = 0x18
	long _serialIndex;	// 28 = 0x1c
	long _imageArrayIndex;	// 32 = 0x20
	long _segmentCount;	// 36 = 0x24
	int _fillStrategy;	// 40 = 0x28
	long _failedLoadCount;	// 44 = 0x2c
	BRAsyncTaskContext *_taskContext;	// 48 = 0x30
	BOOL _saveQueueOnFlush;	// 52 = 0x34
	NSMutableArray *_savedImageProxyQueue;	// 56 = 0x38
	NSMutableArray *_activeImageProxyQueue;	// 60 = 0x3c
	BOOL _hasBeenInvalidated;	// 64 = 0x40
}
@property(assign) int fillStrategy;	// G=0x37d8f9; S=0x37d779; converted property
@property(retain) id imageProxies;	// G=0x37d565; S=0x37d529; converted property
@property(assign) long queueSize;	// G=0x37da39; S=0x37d909; converted property
@property(assign) BOOL randomize;	// G=0x37dd0d; S=0x37dcfd; converted property
@property(assign) long segmentCount;	// G=0x37d519; S=0x37d4c9; converted property
- (id)init;	// 0x37d265
- (void)_abandonArtwork:(id)artwork;	// 0x37f0b5
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x37eb1d
- (void)_enqueueImage:(id)image;	// 0x37e149
- (BOOL)_isQueuePrimed;	// 0x37e401
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x37ed8d
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x37df55
- (void)_primeQueue;	// 0x37e529
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x37e975
- (void)_providerUpdated:(id)updated;	// 0x37f1ad
- (id)_pullNextImageProxy;	// 0x37e6d1
- (id)_pullNextImageProxyRandomly;	// 0x37e825
- (void)_setupForNewProvider;	// 0x37f201
- (void)_updateArtwork:(id)artwork;	// 0x37eedd
- (void)dealloc;	// 0x37d401
// converted property getter: - (int)fillStrategy;	// 0x37d8f9
- (id)finalFormForImage:(id)image;	// 0x37dd3d
- (void)flushQueue;	// 0x37da7d
- (long)imageCount;	// 0x37dd1d
// converted property getter: - (id)imageProxies;	// 0x37d565
- (void)invalidate;	// 0x37df0d
- (BOOL)isImageFinalForm:(id)form;	// 0x37dd41
- (id)nextImage;	// 0x37dd45
- (BOOL)queueReady;	// 0x37dc19
// converted property getter: - (long)queueSize;	// 0x37da39
// converted property getter: - (BOOL)randomize;	// 0x37dd0d
// converted property getter: - (long)segmentCount;	// 0x37d519
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x37d779
// converted property setter: - (void)setImageProxies:(id)proxies;	// 0x37d529
- (void)setProvider:(id)provider;	// 0x37d5b9
// converted property setter: - (void)setQueueSize:(long)size;	// 0x37d909
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x37dcfd
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x37da49
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x37d4c9
@end

