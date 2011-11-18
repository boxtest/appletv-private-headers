/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {
	AVPlayerLayerInternal *_playerLayer;	// 48 = 0x30
}
@property(assign, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x34682471; S=0x3468239d; converted property
@property(retain, nonatomic) AVPlayer *player;	// G=0x34682a59; S=0x346828a5; 
@property(readonly, assign, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;	// G=0x346825c1; @dynamic
@property(copy) NSString *videoGravity;	// G=0x34682719; S=0x34682619; 
+ (id)playerLayerWithPlayer:(id)player;	// 0x346821a1
- (id)init;	// 0x34683ed5
- (id)initWithLayer:(id)layer;	// 0x34683d69
- (void)_addAnimationsForContentLayer:(id)contentLayer size:(CGSize)size gravity:(id)gravity;	// 0x346838f5
- (void)_addAnimationsForSubtitleLayer:(id)subtitleLayer size:(CGSize)size;	// 0x34683799
- (void)_connectContentLayerToPlayer;	// 0x34681c75
- (void)_disconnectContentLayerFromPlayer;	// 0x34681cb1
- (CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)player;	// 0x34683325
- (CGRect)_minRectToFitVideoAndSubtitlesInBounds:(CGRect)bounds;	// 0x34681bb5
- (float)_pctOfSubtitleLayerHeight;	// 0x34682115
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x34682c49
- (void)_setItem:(id)item readyForDisplay:(BOOL)display;	// 0x346824f9
- (void)_setSubtitleDisplayEnabled:(BOOL)enabled;	// 0x34681f09
- (void)_setSubtitleGravity:(id)gravity;	// 0x34681fdd
- (BOOL)_subtitleDisplayEnabled;	// 0x34681ecd
- (id)_subtitleGravity;	// 0x34681b41
- (void)_updatePresentationSize:(CGSize)size;	// 0x34682fa1
- (void)_updateSubtitleLayerForPlayerLayerBounds:(CGRect)playerLayerBounds presentationSize:(CGSize)size playLayerTransform:(CATransform3D)transform;	// 0x34682e15
- (CGRect)_videoRect;	// 0x346821fd
- (CGRect)_videoRectForBounds:(CGRect)bounds;	// 0x34681b99
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x34683705
- (void)dealloc;	// 0x34683449
- (void)finalize;	// 0x3468338d
// converted property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x34682471
// declared property getter: - (BOOL)isReadyForDisplay;	// 0x346825c1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x346827ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34682b25
// declared property getter: - (id)player;	// 0x34682a59
- (void)removeAllAnimations;	// 0x34683595
- (void)removeAnimationForKey:(id)key;	// 0x34683661
- (void)setBounds:(CGRect)bounds;	// 0x34683a25
// converted property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x3468239d
// declared property setter: - (void)setPlayer:(id)player;	// 0x346828a5
// declared property setter: - (void)setVideoGravity:(id)gravity;	// 0x34682619
// declared property getter: - (id)videoGravity;	// 0x34682719
@end

