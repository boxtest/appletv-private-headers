/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeThroughBlackTransitionControl : BRTransitionControl {
	BRControl *_shroud;	// 92 = 0x5c
}
- (void)_addShroud;	// 0x31dcd5
- (void)_removeShroud;	// 0x31dda9
- (void)_transitionInCompleted:(id)completed;	// 0x31e101
- (void)_transitionOutCompleted:(id)completed;	// 0x31e171
- (void)_updateContentForTransitionState;	// 0x31dde9
- (void)dealloc;	// 0x31db49
- (void)layoutSubcontrols;	// 0x31dc35
- (void)setContent:(id)content;	// 0x31db95
- (void)setTransitionedIn:(BOOL)anIn;	// 0x31dbd5
@end
