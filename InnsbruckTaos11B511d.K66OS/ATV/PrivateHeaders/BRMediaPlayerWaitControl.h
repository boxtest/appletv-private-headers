/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRDescriptionOverlayControl, BRTransportControl, NSDictionary, BRWaitSpinnerControl, BRTextControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
	id<BRMediaAsset> _asset;	// 84 = 0x54
	NSDictionary *_offer;	// 88 = 0x58
	BRDescriptionOverlayControl *_descriptionControl;	// 92 = 0x5c
	BRTextControl *_loadingControl;	// 96 = 0x60
	BRWaitSpinnerControl *_loadingSpinner;	// 100 = 0x64
	BRTextControl *_readyToPlayInNMinsControl;	// 104 = 0x68
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 108 = 0x6c
	BRTextControl *_bandwidthHintControl;	// 112 = 0x70
	BRTextControl *_readyToPlayControl;	// 116 = 0x74
	BRTextControl *_authorizingControl;	// 120 = 0x78
	BRWaitSpinnerControl *_authorizingSpinner;	// 124 = 0x7c
	BRTransportControl *_transport;	// 128 = 0x80
}
- (id)initWithAsset:(id)asset;	// 0x346fa9
- (id)initWithOffer:(id)offer;	// 0x346ed1
- (void)_addFadeAnimationToControl:(id)control;	// 0x347c89
- (void)_cacheManagerItemStateChanged:(id)changed;	// 0x346d01
- (id)_itemId;	// 0x346e19
- (void)_setup;	// 0x346841
- (void)dealloc;	// 0x347081
- (void)layoutSubcontrols;	// 0x34772d
- (void)setAuthorizing;	// 0x34766d
- (void)setBandwidthHintForPreview:(BOOL)preview;	// 0x3471d9
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x3473e5
- (void)setReadyToPlay;	// 0x3475c5
@end

