/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaCollection.h"

@class NSArray, ATVDataClient, BRImageManager, BRMediaCollectionType, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface BRStreamingPhotoCollection : BRPhotoMediaCollection {
	ATVDataCollection *_collection;	// 44 = 0x2c
	NSArray *_atvItems;	// 48 = 0x30
	ATVDataClient *_dataClient;	// 52 = 0x34
	NSArray *_assets;	// 56 = 0x38
	BRMediaCollectionType *_type;	// 60 = 0x3c
	BOOL _useForScreenSaver;	// 64 = 0x40
}
@property(readonly, retain) ATVDataClient *dataClient;	// G=0x2b3439; converted property
@property(readonly, assign) BRImageManager *preferredImageManager;	// G=0x2b3469; 
@property(assign) BOOL useForScreenSaver;	// G=0x2b3459; S=0x2b3449; converted property
+ (id)collectionWithATVMediaCollection:(id)atvmediaCollection;	// 0x2b290d
+ (id)collectionWithATVMediaItems:(id)atvmediaItems;	// 0x2b2949
- (id)initWithATVItems:(id)atvitems dataClient:(id)client;	// 0x2b2a3d
- (id)initWithATVMediaCollection:(id)atvmediaCollection;	// 0x2b29b1
- (id)initWithStreamingAssets:(id)streamingAssets dataClient:(id)client;	// 0x2b2aad
- (id)atvCollection;	// 0x2b2f5d
- (id)collectionID;	// 0x2b2e25
- (id)collectionName;	// 0x2b3205
- (id)collectionType;	// 0x2b3215
- (int)count;	// 0x2b2ef1
// converted property getter: - (id)dataClient;	// 0x2b3439
- (void)dealloc;	// 0x2b2b1d
- (id)description;	// 0x2b2bad
- (id)imageProxy;	// 0x2b2dc9
- (BOOL)isLibrary;	// 0x2b3395
- (BOOL)isLocal;	// 0x2b3355
- (id)keyAssetID;	// 0x2b3359
- (id)mediaAssets;	// 0x2b2f6d
- (id)mediaTypes;	// 0x2b33f5
- (id)photoAssets;	// 0x2b3155
// declared property getter: - (id)preferredImageManager;	// 0x2b3469
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x2b3449
- (id)title;	// 0x2b31c9
// converted property getter: - (BOOL)useForScreenSaver;	// 0x2b3459
@end
