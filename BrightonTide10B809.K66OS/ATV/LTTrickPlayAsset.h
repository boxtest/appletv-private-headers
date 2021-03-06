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
@property(retain) ATVInterstitialGroup *interstitials;	// G=0x5a4b9; S=0x5a491; converted property
+ (id)assetForAsset:(id)asset;	// 0x5a075
- (id)initWithAsset:(id)asset;	// 0x5a419
- (void).cxx_destruct;	// 0x5a4cd
// converted property getter: - (id)interstitials;	// 0x5a4b9
- (id)mediaAsset;	// 0x5a47d
// converted property setter: - (void)setInterstitials:(id)interstitials;	// 0x5a491
@end

