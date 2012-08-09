/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRTransportControl, BRDescriptionOverlayControl, BRWaitSpinnerControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
	id<BRMediaAsset> _asset;	// 80 = 0x50
	BRDescriptionOverlayControl *_descriptionControl;	// 84 = 0x54
	BRTextControl *_loadingControl;	// 88 = 0x58
	BRWaitSpinnerControl *_loadingSpinner;	// 92 = 0x5c
	BRTextControl *_readyToPlayInNMinsControl;	// 96 = 0x60
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 100 = 0x64
	BRTextControl *_bandwidthHintControl;	// 104 = 0x68
	BRTextControl *_readyToPlayControl;	// 108 = 0x6c
	BRTextControl *_authorizingControl;	// 112 = 0x70
	BRWaitSpinnerControl *_authorizingSpinner;	// 116 = 0x74
	BRTransportControl *_transport;	// 120 = 0x78
}
- (id)initWithAsset:(id)asset;	// 0x297625
- (void)_addFadeAnimationToControl:(id)control;	// 0x29875d
- (void)dealloc;	// 0x297b15
- (void)layoutSubcontrols;	// 0x298231
- (void)setAuthorizing;	// 0x298171
- (void)setBandwidthHintForPreview:(BOOL)preview;	// 0x297c2d
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x297e2d
- (void)setReadyToPlay;	// 0x2980c9
@end
