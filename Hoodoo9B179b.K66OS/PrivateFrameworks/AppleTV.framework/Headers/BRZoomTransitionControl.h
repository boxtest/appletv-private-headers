/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 56 = 0x38
	BOOL _prerenderAnimation;	// 60 = 0x3c
}
@property(assign) BOOL prerenderAnimation;	// G=0x302db29d; S=0x302db28d; converted property
- (void)_addPrerender;	// 0x302db3e1
- (void)_removePrerender;	// 0x302db469
- (void)_takePrerenderSnapshot;	// 0x302db4d5
- (void)_updateContentForTransitionState;	// 0x302db70d
- (void)_zoomInCompleted:(id)completed;	// 0x302dbe29
- (void)_zoomOutCompleted:(id)completed;	// 0x302dbe99
- (void)dealloc;	// 0x302db1d9
- (void)layoutSubcontrols;	// 0x302db30d
// converted property getter: - (BOOL)prerenderAnimation;	// 0x302db29d
- (void)setContent:(id)content;	// 0x302db225
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x302db28d
- (void)setTransitionedIn:(BOOL)anIn;	// 0x302db2ad
@end
