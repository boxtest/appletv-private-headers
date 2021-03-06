/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVInterstitialGroup;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTTrickPlayAsset : XXUnknownSuperclass {
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
	ATVInterstitialGroup *_interstitials;	// 8 = 0x8
}
@property(retain) ATVInterstitialGroup *interstitials;	// G=0x469655; S=0x46962d; converted property
+ (id)assetForAsset:(id)asset;	// 0x469201
- (id)initWithAsset:(id)asset;	// 0x4695c1
- (void).cxx_destruct;	// 0x469669
// converted property getter: - (id)interstitials;	// 0x469655
- (id)mediaAsset;	// 0x469619
// converted property setter: - (void)setInterstitials:(id)interstitials;	// 0x46962d
@end

